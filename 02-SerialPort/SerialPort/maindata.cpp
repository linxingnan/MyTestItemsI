#include "maindata.h"
#include "ui_maindata.h"
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>

mainData::mainData(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainData)
{
    ui->setupUi(this);
    m_nRecvNum = 0;
    m_nSendNum = 0;
    ui->stackedWidget->setCurrentIndex(0);
    vewReData = ui->textEdRecData;

    InitStatusBar();
    initSaveConfig();
    initSerialPort();
    serialPort->getPortNum();

    connect(ui->comBoxSerPort, &MycomboBox::clicked, serialPort, &SerialThread::getPortNum);    //点击触发获取串口

    connect(ui->puBuOpenPort, &QPushButton::clicked, this, &mainData::openSerialPortParam);     //打开串口

    connect(ui->cheBoxHexRe,&QCheckBox::stateChanged, this, &mainData::checkStateChange);       //16进制显示
    connect(ui->cheBoxDataComPa,&QCheckBox::stateChanged, this, &mainData::checkStateChange);   //数据对比
//    connect(ui->cheBoxSendT,&QCheckBox::stateChanged, this, &mainData::checkStateChange);
//    connect(ui->cheBoxTimRe,&QCheckBox::stateChanged, this, &mainData::checkStateChange);
//    connect(ui->cheBoxHexSend,&QCheckBox::stateChanged, this, &mainData::checkStateChange);

    connect(ui->puBuSendData, &QPushButton::clicked, this, &mainData::sendData);                //发送数据
    connect(ui->puBuClearRe, &QPushButton::clicked, this, &mainData::clearButton);              //清空显示窗口
    connect(ui->puBuClearSend, &QPushButton::clicked, this, &mainData::clearButton);            //清空发送窗口
    mainData::openSerialPortParam();//运行打开最后一个串口
}

mainData::~mainData()
{
    delete ui;
}

void mainData::InitStatusBar()
{
//    m_SerStateLbl = new QLabel();
    m_RecvNumLbl = new QLabel();
    m_SendNumLbl = new QLabel();

//    m_SerStateLbl->setMinimumSize(180, 20);
    m_RecvNumLbl->setMinimumSize(180, 20); // 标签最小尺寸
    m_SendNumLbl->setMinimumSize(180, 20);

//    ui->statusbar->addWidget(m_SerStateLbl);
    ui->statusbar->addWidget(m_RecvNumLbl);
    ui->statusbar->addWidget(m_SendNumLbl);

    updTxDataLength(0);
    updRxDataLength(0);
}

void mainData::initSaveConfig()
{
    saveConfig = new SaveConfigThread;
    saveThread = new QThread(this);

    saveConfig->moveToThread(saveThread);
    saveThread->start();

    connect(this,&mainData::destroyed,this,&mainData::closeSvaeThread); //关闭保存线程

    QString nBaudRate,nParityType,nDataBits, nStopBits, nFlowCtrl;

    saveConfig->ReadInit("comBoxBound",nBaudRate);  //初始化combox数据
    saveConfig->ReadInit("comBoxParity",nParityType);
    saveConfig->ReadInit("comBoxDaBit",nDataBits);
    saveConfig->ReadInit("comBoxStopBit",nStopBits);
    saveConfig->ReadInit("comBoxFlowCtrl",nFlowCtrl);
    if(nBaudRate == ""||nParityType == "" || nDataBits == "" || nStopBits == "" || nFlowCtrl == "")
    {
        return;
    }
    ui->comBoxBound->setCurrentIndex(nBaudRate.toInt());
    ui->comBoxParity->setCurrentIndex(nParityType.toInt());
    ui->comBoxDaBit->setCurrentIndex(nDataBits.toInt());
    ui->comBoxStopBit->setCurrentIndex(nStopBits.toInt());
    ui->comBoxFlowCtrl->setCurrentIndex(nFlowCtrl.toInt());
}

void mainData::closeSvaeThread()
{
    saveThread->quit();
    saveThread->wait();
    delete saveConfig;
}

void mainData::updTxDataLength(uint TxLength)
{
    m_nSendNum += TxLength;
    QString strSendNum = QString::number(m_nSendNum);
    m_SendNumLbl->setText(tr("Tx：%1").arg(strSendNum));
}

void mainData::updRxDataLength(uint RxLength)
{
    m_nRecvNum += RxLength;
    QString strRecvNum = QString::number(m_nRecvNum);
    m_RecvNumLbl->setText(tr("Rx：%1").arg(strRecvNum));
}

void mainData::clearButton()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if(button == ui->puBuClearRe)
    {
        m_nRecvNum = 0;
        updRxDataLength(0);
        if(ui->cheBoxDataComPa->isChecked())
        {
            ui->textEdComHexData->clear();
            ui->textEdComRawData->clear();
        }
        else
        {
            vewReData->clear();
        }
    }
    else if(button == ui->puBuClearSend)
    {
        m_nSendNum = 0;
        updTxDataLength(0);
        ui->textEdSendData->clear();
    }
}



void mainData::updateComPort(QStringList CommPortList)
{
    ui->comBoxSerPort->clear();
    ui->comBoxSerPort->addItems(CommPortList);
}

void mainData::initSerialPort()
{
    serialPort = new SerialThread;
    serialThread = new QThread(this);


    serialPort->moveToThread(serialThread);
    serialThread->start();

    connect(serialPort, &SerialThread::getcomPortList,this,&mainData::updateComPort);   //获取串口号
    connect(this,&mainData::destroyed,this,&mainData::closeSerialThread);   //关闭串口线程
//    connect(serialPort, &SerialThread::linkError, this, &mainData::closeSerialPort);
    connect(serialPort, &SerialThread::receData, this, &mainData::handleReData);    //处理串口数据
}

void mainData::checkStateChange()
{
    QCheckBox *ReBox = qobject_cast<QCheckBox *>(sender());
    if(ReBox == ui->cheBoxHexRe)
    {
        if(ui->cheBoxHexRe->isChecked())//转16进制
        {
            if(ui->cheBoxDataComPa->isChecked())
            {
                vewReData = ui->textEdComHexData;
            }

            QByteArray hex = ui->textEdRecData->toPlainText().toLatin1().toHex();

            QString ouput = "";
            for(int i = 0; i<hex.length(); i++)
            {
                ouput+=hex[i];
                ouput+=hex[++i];
                ouput+=" ";
            }
            ui->textEdRecData->clear();
            ui->textEdRecData->insertPlainText(ouput);
        }
        else
        {
            if(ui->cheBoxDataComPa->isChecked())
            {
                vewReData = ui->textEdComRawData;
            }
            QString textData = ui->textEdRecData->toPlainText();
            QByteArray hex = QHelper::hexStrToByteArray(textData);
            ui->textEdRecData->clear();
            ui->textEdRecData->insertPlainText(hex);
        }
    }
    else if(ReBox == ui->cheBoxDataComPa)//数据比较
    {
        QString data = vewReData->toPlainText();
        vewReData->clear();
        if(ui->cheBoxDataComPa->isChecked())
        {
            ui->stackedWidget->setCurrentIndex(1);
            if(ui->cheBoxHexRe->isChecked())//将16进制数据放到16进制窗口
            {
                vewReData = ui->textEdComHexData;
                QByteArray hex = QHelper::hexStrToByteArray(data);
                ui->textEdComRawData->clear();
                ui->textEdComRawData->insertPlainText(hex);
            }
            else
            {
                vewReData = ui->textEdComRawData;
                QByteArray hex = data.toLatin1().toHex();
                QString ouput;
                for(int i = 0; i<hex.length(); i++)
                {
                    ouput+=hex[i];
                    ouput+=hex[++i];
                    ouput+=" ";
                }
                ui->textEdComHexData->clear();
                ui->textEdComHexData->insertPlainText(ouput);
            }
        }
        else
        {
            ui->stackedWidget->setCurrentIndex(0);
            vewReData = ui->textEdRecData;
        }
        vewReData->insertPlainText(data);
    }

}


void mainData::closeSerialThread()
{
    serialThread->quit();
    serialThread->wait();
    delete serialPort;
}

void mainData::openSerialPortParam()
{
    if(ui->puBuOpenPort->text() == "关闭串口")
    {
        closeSerialPort();
        ui->comBoxBound->setEnabled(true);
        ui->comBoxDaBit->setEnabled(true);
        ui->comBoxParity->setEnabled(true);
        ui->comBoxSerPort->setEnabled(true);
        ui->comBoxStopBit->setEnabled(true);
        ui->comBoxFlowCtrl->setEnabled(true);
    }
    else
    {
        //串口号
        QString strPOrtNum = ui->comBoxSerPort->currentText();
        if(strPOrtNum == nullptr)
        {
            QMessageBox::critical(this, QString("Error"), QString("请检查串口是否连接"), QMessageBox::Ok);
            return ;
        }

        int nBaudRate = ui->comBoxBound->currentText().toInt();

        int nParityType = ui->comBoxParity->currentIndex();

        int nDataBits = ui->comBoxDaBit->currentText().toInt();

        int nStopBits = ui->comBoxStopBit->currentIndex();

        int nFlowCtrl = ui->comBoxFlowCtrl->currentIndex();

        if(!(serialPort->openSerial(strPOrtNum,nBaudRate,nParityType,nDataBits,nStopBits,nFlowCtrl)))
        {
            QMessageBox::critical(this, QString("Error"), QString("串口打开失败"), QMessageBox::Ok);
            return;
        }
        saveConfig->WriteInit("comBoxBound",QString::number(ui->comBoxBound->currentIndex()));
        saveConfig->WriteInit("comBoxParity",QString::number(nParityType));
        saveConfig->WriteInit("comBoxDaBit",QString::number(ui->comBoxDaBit->currentIndex()));
        saveConfig->WriteInit("comBoxStopBit",QString::number(nStopBits));
        saveConfig->WriteInit("comBoxFlowCtrl",QString::number(nFlowCtrl));


        ui->comBoxBound->setEnabled(false);
        ui->comBoxDaBit->setEnabled(false);
        ui->comBoxParity->setEnabled(false);
        ui->comBoxSerPort->setEnabled(false);
        ui->comBoxStopBit->setEnabled(false);
        ui->comBoxFlowCtrl->setEnabled(false);

        ui->puBuOpenPort->setText("关闭串口");
    }

}

void mainData::closeSerialPort()
{
    if(serialPort->isOpenPort())
    {
        serialPort->closePort();
        ui->puBuOpenPort->setText("打开串口");
    }
    else
    {
        ui->puBuOpenPort->setText("打开串口");
        return;
    }
}

void mainData::handleReData(QByteArray data, int length)
{
    if(ui->cheBoxDataComPa->isChecked())
    {
        QString ouput = QHelper::byteToHex(data);
        ui->textEdComHexData->insertPlainText(ouput);
        ui->textEdComRawData->insertPlainText(QString::fromLocal8Bit(data));

        ui->textEdComHexData->moveCursor(QTextCursor::End);
        ui->textEdComRawData->moveCursor(QTextCursor::End);
    }
    else
    {
        if(ui->cheBoxHexRe->isChecked())
        {
            QString ouput = QHelper::byteToHex(data);
            vewReData->insertPlainText(ouput);
        }
        else
            vewReData->insertPlainText(QString::fromLocal8Bit(data));
        ui->textEdRecData->moveCursor(QTextCursor::End);    //超过文本框的大小 自动下拉
    }

    updRxDataLength(length);
}

void mainData::sendData()
{
    if(!serialPort->isOpenPort())
    {
//        QMessageBox::critical(this, QString("Error"), QString("串口未打开，发送失败"), QMessageBox::Ok);
        return;
    }
    QString SendBytes = ui->textEdSendData->toPlainText();
    QByteArray sendHex;
    if(!SendBytes.isEmpty())
    {
        if(ui->cheBoxHexSend->isChecked())
        {
            if(!QHelper::checkHex(SendBytes))
            {
                QMessageBox::critical(this, QString("Error"), QString("请输入正确的格式 0-9 a-f A-F"), QMessageBox::Ok);
                return;
            }
            sendHex = QHelper::hexStrToByteArray(SendBytes);
        }
        else
        {
            sendHex = SendBytes.toLocal8Bit();
        }
        if(ui->cheBoxSendT->isChecked())
        {
            sendHex.append("\r\n");

        }
        serialPort->writeData(sendHex);
        updTxDataLength(sendHex.size());
    }

}


