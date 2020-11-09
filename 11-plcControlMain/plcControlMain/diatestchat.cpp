#include "diatestchat.h"
#include "ui_diatestchat.h"
#include <QDebug>
#include "helpApi/qhelpapi.h"
#include <QPushButton>
#include <QComboBox>
DiaTestChat::DiaTestChat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiaTestChat)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/image/icon/ceshi.png"));
    initUi();
    initModbusTcpClient();

    connect(ui->puBLink, &QPushButton::clicked, this, &DiaTestChat::onLinkModbus);
    connect(ui->puBClose, &QPushButton::clicked, this, &DiaTestChat::onLinkModbus);

}

DiaTestChat::~DiaTestChat()
{

    if(threadTcp->isRunning())
    {
        threadTcp->quit();
        threadTcp->wait();
    }
    if(tcpSocket!=nullptr)
        delete tcpSocket;


    delete ui;
}
//正确返回ip
//错误返回空字符串
QString DiaTestChat::getIPString()
{
    QString str = "";

    for(int i = 0; i<ipSpinBox.size()-1; i++)
    {
        if(ipSpinBox.at(i)->text().isEmpty())
        {
            str.clear();
            return str;
        }
        str += ipSpinBox.at(i)->text()+".";
    }
    str += ipSpinBox.at(ipSpinBox.size()-1)->text();
    return str;
}

void DiaTestChat::setEquData(QStringList data)
{
    QString ipAddr = data.at(0);
    QStringList tempList = ipAddr.split(".");
    for(int i = 0; i < ipSpinBox.size(); i++)
    {
        ipSpinBox.at(i)->setValue(tempList.at(i).toInt());
    }
    QString band = data.at(1);
    int bandNum = QHelpApi::bandName.key(band);
//    qDebug()<<"bandNum "<<bandNum;
    ui->cBoxPlcName->setCurrentIndex(bandNum);
}


void DiaTestChat::onLinkModbus()
{
    //获取信号接收者
    QObject *mySender = sender();
    //转换为按钮类型
    QPushButton *p = qobject_cast<QPushButton *>(mySender);

    if(p == ui->puBLink)
    {
        emit newTcp(getIPString(),502);
    }
    else
    {
        emit disconnectTcp();
    }
}

void DiaTestChat::initUi()
{
    ipSpinBox.append(ui->spBoxIp1);
    ipSpinBox.append(ui->spBoxIp2);
    ipSpinBox.append(ui->spBoxIp3);
    ipSpinBox.append(ui->spBoxIp4);

    for(int i = 0; i < ipSpinBox.size(); i++)
    {
        ipSpinBox.at(i)->setRange(0,255);
        ipSpinBox.at(i)->setButtonSymbols(QAbstractSpinBox::NoButtons);
        ipSpinBox.at(i)->setAlignment(Qt::AlignCenter);
        ipSpinBox.at(i)->setFixedWidth(40);
        ipSpinBox.at(i)->installEventFilter(this);//安装事件过滤器
    }

    ui->puBLink->setEnabled(true);
    ui->puBClose->setEnabled(false);

    ui->stackedWidget->setVisible(false);

//    connect(ui->cBoxPlcName, &QComboBox::currentIndexChanged, this, &DiaTestChat::on_test);
    connect(ui->cBoxReadOrWrite, SIGNAL(currentIndexChanged(int)), this, SLOT(on_cBoxPlcName_currentIndexChanged(int)));
    connect(ui->cBoxRegion, SIGNAL(currentIndexChanged(int)), this, SLOT(on_cBoxPlcName_currentIndexChanged(int)));
    connect(ui->cBoxCompany, SIGNAL(currentIndexChanged(int)), this, SLOT(on_cBoxPlcName_currentIndexChanged(int)));

    connect(ui->spBoxCount, SIGNAL(valueChanged(int)), this, SLOT(on_spBoxStart_valueChanged(int)));

    connect(ui->puBReset, &QPushButton::clicked, this, &DiaTestChat::on_puBPositioning_clicked);

    readData.sendTimes = 0;
    readData.table = 0x03;
    readData.startAddr = 0x00;
    readData.numberOfEntries = 1;

    connect(ui->cBoxLoopSend, &QCheckBox::stateChanged, this, [=](int arg1)
    {
        if(arg1 == Qt::Unchecked)
        {
            ui->puBSend->setEnabled(true);
        }
    });
}

void DiaTestChat::initModbusTcpClient()
{
    tcpSocket = new TcpThread();
    threadTcp = new QThread(this);

    tcpSocket->moveToThread(threadTcp);
    threadTcp->start();

    connect(this, &DiaTestChat::newTcp, tcpSocket, &TcpThread::connectToServer);
    connect(this, &DiaTestChat::disconnectTcp, tcpSocket, &TcpThread::closeConnect);
    connect(tcpSocket, &TcpThread::connectSuccess, this, [=]()
    {
        ui->puBLink->setEnabled(false);
        ui->puBClose->setEnabled(true);
    });
    connect(tcpSocket, &TcpThread::disConnect, this, [=]()
    {
        ui->puBLink->setEnabled(true);
        ui->puBClose->setEnabled(false);
    });
    connect(this, &DiaTestChat::sendData, tcpSocket, &TcpThread::directSendData);
    connect(tcpSocket, &TcpThread::receData, this, [=](QByteArray data)
    {
        qDebug()<<"得到数据"<<data;
        QString str = QHelpApi::byteArrayToHexStr(data);
        checkReStr = str;

        if(QHelpApi::checkModbusData(checkSendStr,checkReStr))
        {
            static int j = 0;
            j++;
            ui->labReTrueNum->setNum(j);
        }

        if(!ui->cBoxData->isChecked())     //数据查看
            ui->tEdReData->setText(str);
        else
        {
            QStringList list = str.split(" ");
            QString temp = "";
            for(int i = 9; i< list.size(); i++)
            {
                temp.append(list.at(i));
                if(i!=list.size()-1)
                    temp.append(" ");
            }
            ui->tEdReData->setText(temp);
        }
        static int i = 0;
        i++;
        ui->labReNum->setNum(i);

        qint64 tmMsec=timeCount.elapsed();     //毫秒数

        ui->labReResponse->setNum(static_cast<int>(tmMsec));
        if(ui->cBoxLoopSend->isChecked())   //循环
        {
            readData.sendTimes++;
            on_puBSend_clicked();
            ui->puBSend->setEnabled(false);
        }

    });

}

void DiaTestChat::viewSendData()
{
    //设备地址
    int equAddr = 0;
    if(ui->cBoxPlcName->currentIndex()<=5)
        equAddr = 0;
    else
        equAddr = 1;
    //字和位  功能码不同
    switch(ui->cBoxCompany->currentIndex())
    {
        case 0:
        switch (ui->cBoxReadOrWrite->currentIndex())
        {
            case 0: readData.table = 0x03; break;//读
            case 1: readData.table = 0x10; break;//写
        }
        break;
        case 1:
        switch (ui->cBoxReadOrWrite->currentIndex())
        {
            case 0: readData.table = 0x01; break;
            case 1: readData.table = 0x05; break;
        }
        break;
    }
    //起始地址
    switch(ui->cBoxPlcName->currentIndex())
    {
        case 0://FP
            if(ui->cBoxCompany->currentText() == "字")
            {
                readData.startAddr = 0x0;
            }
            else
            {
                switch(ui->cBoxRegion->currentIndex())
                {
                    case 0:
                        readData.startAddr = 0x0;
                    break;
                    case 1:
                        readData.startAddr = 0x800;
                    break;
                }
            }
        break;
        case 1://FX
            if(ui->cBoxCompany->currentText() == "字")
            {
                switch (ui->cBoxRegion->currentIndex())
                {
                    case 0:readData.startAddr = 0;break;
                    case 1:readData.startAddr = 0x03e8;break;
                    case 2:readData.startAddr = 0x0514;break;
                    case 3:readData.startAddr = 0x07d0;break;
                }
            }
            else
            {
                switch (ui->cBoxRegion->currentIndex())
                {
                    case 0:readData.startAddr = 0;break;
                    case 1:readData.startAddr = 0x03e8;break;
                    case 2:readData.startAddr = 0x0bb8;break;
                    case 3:readData.startAddr = 0x1388;break;
                    case 4:readData.startAddr = 0x1770;break;
                    case 5:readData.startAddr = 0x1b58;break;
                }
            }
        break;
        case 2://DVP
            if(ui->cBoxCompany->currentText() == "字")
            {
                readData.startAddr = 0;
            }
            else
            {
                switch (ui->cBoxRegion->currentIndex())
                {
                    case 0:readData.startAddr = 0;break;
                    case 1:readData.startAddr = 0x0500;break;
                }
            }
        break;
        case 3://CP
        case 4://CJ
            if(ui->cBoxCompany->currentText() == "字")
            {
                switch (ui->cBoxRegion->currentIndex())
                {
                    case 0:readData.startAddr = 0;break;
                    case 1:readData.startAddr = 0x4268;break;
                }
            }
            else
            {
                switch (ui->cBoxRegion->currentIndex())
                {
                    case 0:readData.startAddr = 0;break;
                    case 1:readData.startAddr = 0x62a8;break;
                }
            }
        break;
        case 5://Q
            if(ui->cBoxCompany->currentText() == "字")
            {
                switch (ui->cBoxRegion->currentIndex())
                {
                    case 0:readData.startAddr = 0;break;
                    case 1:readData.startAddr = 0x6d60;break;
                }
            }
            else
            {
                switch (ui->cBoxRegion->currentIndex())
                {
                    case 0:readData.startAddr = 0;break;
                    case 1:readData.startAddr = 0x2008;break;
                }
            }
        break;
        case 6://MB
            if(ui->cBoxCompany->currentText() == "字")
            {
                switch (ui->cBoxRegion->currentIndex())
                {
                    case 0:readData.startAddr = 0;break;
                    case 1:readData.startAddr = 0x6d60;break;
                }
            }
            else
            {
                switch (ui->cBoxRegion->currentIndex())
                {
                    case 0:readData.startAddr = 0;break;
                    case 1:readData.startAddr = 0x3fff;break;
                    case 2:readData.startAddr = 0x47ff;break;
                }
            }
        break;
        case 7://SC
        case 8://XJ
        case 9://KV
        case 10://VB
        case 11://bcnet
            readData.startAddr = 0;
        break;
    }

    readData.startAddr += ui->spBoxStart->value();

    switch(ui->cBoxCompany->currentIndex())
    {
        case 0 :
           readData.numberOfEntries = ui->spBoxCount->value();
        break;
        case 1:
            switch (ui->cBoxReadOrWrite->currentIndex())
            {
                case 0:
                    readData.numberOfEntries = ui->spBoxCount->value();
                break;
                case 1:
                    if(isReset == 1)
                        readData.numberOfEntries = 0xff00;
                    else
                       readData.numberOfEntries = 0x0;
                    isReset = 0;
                break;
            }
        break;
    }
    QString sendStr;
    if(ui->cBoxReadOrWrite->currentIndex() == 0)
        sendStr = QHelpApi::buildModbusDataRead(readData.sendTimes,equAddr,readData.table,readData.startAddr,readData.numberOfEntries);
    else
    {
        if(ui->cBoxCompany->currentIndex() == 1)
        {
            sendStr = QHelpApi::buildModbusDataRead(readData.sendTimes,equAddr,readData.table,readData.startAddr,readData.numberOfEntries);
        }
        else
            sendStr = QHelpApi::buildModbusDataWrite(readData.sendTimes,equAddr,readData.table,readData.startAddr,readData.numberOfEntries,ui->textEdit->toPlainText());
    }

    ui->tEdSendData->setText(sendStr);
}

void DiaTestChat::cBoxDataChange()
{
    ui->cBoxRegion->clear();
    QString temp;
    QStringList list;
    switch (ui->cBoxPlcName->currentIndex())
    {
        case 0://FP
            if(ui->cBoxCompany->currentIndex() == 0)
                temp = "D";
            else
                temp = "Y R";
        break;
        case 1://FX
            if(ui->cBoxCompany->currentIndex() == 0)
                temp = "TN CN D8000 D";
            else
                temp = "Y M S M8000 TS CS";
        break;
        case 2://DVP
            if(ui->cBoxCompany->currentIndex() == 0)
                temp = "D";
            else
                temp = "S Y";
        break;
        case 3://CP
        case 4://CJ
            if(ui->cBoxCompany->currentIndex() == 0)
                temp = "CIO DM";
            else
                temp = "CIO.bit DM.bit";
        break;
        case 5://Q
            if(ui->cBoxCompany->currentIndex() == 0)
                temp = "D TN";
            else
                temp = "Y DY";
        break;
        case 6://MB
            if(ui->cBoxCompany->currentIndex() == 0)
                temp = "D TD";
            else
                temp = "M X Y";
        break;
        case 7://SC
        case 8://XJ
        case 9://KV
        case 10://VB
        case 11://bcnet
            if(ui->cBoxCompany->currentIndex() == 0)
                temp = "4";
            else
                temp = "0";
        break;
    }
    list = temp.split(" ");
    ui->cBoxRegion->addItems(list);
}

bool DiaTestChat::eventFilter(QObject *object, QEvent *event)
{
    //如果object不是四个输入框，则返回
    int nowBox = -1;
    for(int i=0; i<4; i++)
    {
        if( object == ipSpinBox.at(i) )
            nowBox = i;
    }
    if( -1 == nowBox )
        return false;

    QSpinBox *spinBox = dynamic_cast<QSpinBox*>(object);
    //如果某个输入框得到了输入焦点，则将它们设为全选状态
    if( QEvent::FocusIn == event->type() )
    {
        spinBox->selectAll();
        return true;
    }

    //如果输入框内的字符为0，则清空该输入框（防止用户输入多个0）
    else if( QEvent::KeyPress == event->type() )
    {
        QString context = spinBox->text();
        if( "0" == context )
            spinBox->clear();
    }
    //如果输入框内的数字大于25，则输入焦点自动跳到下一格
    else if( QEvent::KeyRelease == event->type() )
    {
        int val = spinBox->value();
        if( val > 25 && nowBox < 3 )
        {
            ipSpinBox[nowBox+1]->setFocus();
        }
    }
    return false;
}

void DiaTestChat::on_cBoxPlcName_currentIndexChanged(int index)
{
    Q_UNUSED(index)
    //获取信号接收者
    QObject *mySender = sender();
    //转换为按钮类型
    QComboBox *p = qobject_cast<QComboBox *>(mySender);

    if(p == ui->cBoxPlcName)
    {
        cBoxDataChange();
    }
    else if(p == ui->cBoxReadOrWrite)
    {
        if(ui->cBoxReadOrWrite->currentIndex() == 0)
        {
            ui->stackedWidget->setVisible(false);
        }
        else
        {
            ui->stackedWidget->setVisible(true);
        }
    }
    else if(p == ui->cBoxRegion)
    {
    }
    else if(p == ui->cBoxCompany)
    {
        if(ui->cBoxCompany->currentIndex() == 0)
        {
            ui->spBoxCount->setEnabled(true);
            ui->stackedWidget->setCurrentIndex(0);
        }
        else
        {
            ui->spBoxCount->setEnabled(false);
            ui->stackedWidget->setCurrentIndex(1);
            ui->spBoxCount->setValue(1);
        }
        cBoxDataChange();
    }

    viewSendData();
}

void DiaTestChat::on_puBSend_clicked()
{
    viewSendData();
    QString str;

    str = ui->tEdSendData->toPlainText();
    static int i = 0;
    if(tcpSocket!=nullptr)
    {
       checkSendStr = str;
       emit sendData(str);
       i++;
       ui->labSendNum->setNum(i);

//       timeCount.start();
       timeCount.restart();
    }

}

void DiaTestChat::on_spBoxStart_valueChanged(int arg1)
{
    //获取信号接收者
    QObject *mySender = sender();
    //转换为按钮类型
    QSpinBox *p = qobject_cast<QSpinBox *>(mySender);

    if(p == ui->spBoxStart)
    {
    }
    else if(p == ui->spBoxCount)
    {
        readData.numberOfEntries = ui->spBoxCount->value();
        QString str = QString("填入%1个字节的待写数据（16进制，以空格分开）：").arg(arg1*2);
        ui->label_16->setText(str);
    }

    viewSendData();
}


void DiaTestChat::on_puBPositioning_clicked()
{
    //获取信号接收者
    QObject *mySender = sender();
    //转换为按钮类型
    QPushButton *p = qobject_cast<QPushButton *>(mySender);

    if(p == ui->puBPositioning)
        isReset = 1;
//        readData.numberOfEntries = 0xff00;
    else
        isReset = 2;
//        readData.numberOfEntries = 0;

    viewSendData();
}

