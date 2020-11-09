#include "dialogsiemenssetparameter.h"
#include "ui_dialogsiemenssetparameter.h"
#include "dialogmodbusmapblock.h"
#include <QDebug>
#include <QFileDialog>
#include "helpApi/qhelpapi.h"
#include "dialogmosbusmapcheck.h"
#include <QMessageBox>
DialogSiemensSetParameter::DialogSiemensSetParameter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSiemensSetParameter)
{
    ui->setupUi(this);
    initUi();

    connect(ui->puBUpConfig, &QPushButton::clicked, this, [=]()
    {
        emit upConfig();
    });

    connect(ui->puBDownConfig, &QPushButton::clicked, this, [=]()
    {
        emit downConfig();
    });
}

DialogSiemensSetParameter::~DialogSiemensSetParameter()
{
    delete ui;
}

void DialogSiemensSetParameter::setViewData(QString ipAddr)
{
    ui->liEdEquIp->setText(ipAddr);
}

QString DialogSiemensSetParameter::getIp()
{
    return ui->liEdEquIp->text();
}

void DialogSiemensSetParameter::setModData(QList<int> listData)
{
    ui->spBox_S7Inter_BcNetAddr->setValue(listData.at(0));
    ui->spBox_S7Inter_HightAddr->setValue(listData.at(1));
    ui->spBox_S7Inter_AddrRetryNum->setValue(listData.at(2));
    ui->spBox_S7Inter_ReFreshNum->setValue(listData.at(3));
    ui->liEd_S7TCP_TargetPlcIp->setText(QString::number(listData.at(4)));
    ui->checkB_Web->setChecked(listData.at(5));
    switch (listData.at(6))
    {
    case 0x11:
        ui->cBox_S7Inter_ChatMode->setCurrentIndex(0);
        break;
    case 0x22:
        ui->cBox_S7Inter_ChatMode->setCurrentIndex(2);
        break;
    case 0x33:
        ui->cBox_S7Inter_ChatMode->setCurrentIndex(1);
        break;
    case 0x44:
        ui->cBox_S7Inter_ChatMode->setCurrentIndex(3);
        break;
    }
    ui->cBox_S7TCP_Open->setCurrentIndex(listData.at(7));
    switch (listData.at(8))
    {
    case 0xff:
        ui->cBox_S7Inter_ChatBaud->setCurrentIndex(9);
        break;
    default:
        ui->cBox_S7Inter_ChatBaud->setCurrentIndex(listData.at(8));
        break;
    }
    switch (listData.at(9))
    {
    case 0xff:
        ui->cBox_S7Extend_Baud->setCurrentIndex(12);
        break;
    case 0x09:
    case 0x0a:
    case 0x0b:
        ui->cBox_S7Extend_Baud->setCurrentIndex(listData.at(9)-9);
        break;
    case 0x00:
    case 0x01:
        ui->cBox_S7Extend_Baud->setCurrentIndex(listData.at(9)+3);
        break;
    case 0x0c:
    case 0x0d:
    case 0x0e:
    case 0x0f:
    case 0x10:
        ui->cBox_S7Extend_Baud->setCurrentIndex(listData.at(9)-7);
        break;
    case 0x04:
        ui->cBox_S7Extend_Baud->setCurrentIndex(10);
        break;
    case 0x11:
        ui->cBox_S7Extend_Baud->setCurrentIndex(11);
        break;
    }
    ui->spBox_S7Extend_ChatSyn->setValue(listData.at(10));
    ui->spBox_S7Extend_ChatTimeOut->setValue(listData.at(11));
}

void DialogSiemensSetParameter::setNetData(QStringList netData)
{
    ui->liEd_Net_Ip->setText(netData.at(0));
    ui->liEd_Net_Subnet->setText(netData.at(1));
    ui->liEd_Net_Gateway->setText(netData.at(2));
    ui->liEd_S7TCP_ServerPort->setText(netData.at(3));
    ui->liEd_Mod_chatPort->setText(netData.at(4));
    ui->liEd_BcNetS7_ChatPort->setText(netData.at(5));
}

void DialogSiemensSetParameter::setModbusMapData(QVector<QString> vecStr)
{
    QString modMapData, s7PlcData;
    QString mbCMD;

    for(int row = 0; row<vecStr.size(); row++)
    {
        mbCMD = vecStr.at(row);
        bool ok = QHelpApi::handleMBFile(mbCMD,modMapData,s7PlcData);
        if(ok)
        {
            mbCMD = mbCMD.remove(0,3);
            qDebug()<<mbCMD;
            ui->tableModbusMap->insertRow(row);
            createRowData(row,modMapData,s7PlcData,mbCMD);
        }
    }


}

void DialogSiemensSetParameter::downConfig_ModbusMap(QString &listStr)
{
    listStr.clear();

    listStr.append("00 FF 01 4C 00 00 53 01");

    for(int i = 0; i <ui->tableModbusMap->rowCount(); i++)
    {
        QTableWidgetItem    *cellItem;
        cellItem=ui->tableModbusMap->item(i,DialogSiemensSetParameter::colModbusData); //获取单元格的item
        QString cmd = cellItem->data(Qt::UserRole).toString();

        cmd = inserRowToMbCmd(i,cmd);
        listStr.append(cmd);

        if(i != ui->tableModbusMap->rowCount()-1)
            listStr.append(" ");
    }
    for(int i =0; i<32-ui->tableModbusMap->rowCount();i++)
    {
        QString writeData = " 00 00 00 00 00 00 00 00 00 00 00 00";
        listStr.append(writeData);

    }

//    qDebug()<<listStr;

}

void DialogSiemensSetParameter::downConfig_netData(QList<int> &vecInt, QVector<QString> &vecStr)
{
    vecInt.clear();
    vecInt.append( ui->spBox_S7Inter_BcNetAddr->value() );
    vecInt.append( ui->spBox_S7Inter_HightAddr->value() );
    vecInt.append( ui->spBox_S7Inter_AddrRetryNum->value() );
    vecInt.append( ui->spBox_S7Inter_ReFreshNum->value() );
    vecInt.append(ui->liEd_S7TCP_TargetPlcIp->text().toInt());
    vecInt.append(ui->checkB_Web->checkState());

    int temp = -1;
    switch (ui->cBox_S7Inter_ChatMode->currentIndex())
    {
    case 0:
        temp = 0x11;
        break;
    case 1:
        temp = 0x33;
        break;
    case 2:
        temp = 0x22;
        break;
    case 3:
        temp = 0x44;
        break;
    }
    if(temp == -1)
        temp = 255;
    vecInt.append(temp);

    vecInt.append(ui->cBox_S7TCP_Open->currentIndex());

    temp = -1;
    switch (ui->cBox_S7Inter_ChatBaud->currentIndex())
    {
    case 9:
        temp = 0xff;
        break;
    default:
        temp = ui->cBox_S7Inter_ChatBaud->currentIndex();
        break;
    }
    if(temp == -1)
        temp = 255;
    vecInt.append(temp);

    temp = -1;
    switch(ui->cBox_S7Extend_Baud->currentIndex())
    {
    case 12:
        temp = 0xff;
        break;
    case 0:
    case 1:
    case 2:
        temp = ui->cBox_S7Extend_Baud->currentIndex()+9;
        break;
    case 3:
    case 4:
        temp = ui->cBox_S7Extend_Baud->currentIndex()-3;
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        temp = ui->cBox_S7Extend_Baud->currentIndex()+7;
        break;
    case 10:
        temp = 4;
        break;
    case 11:
        temp = 0x11;
        break;
    }
    if(temp == -1)
        temp = 255;
    vecInt.append(temp);

    vecInt.append(ui->spBox_S7Extend_ChatSyn->value());
    vecInt.append(ui->spBox_S7Extend_ChatTimeOut->value());

    vecStr.append(ui->liEd_Net_Ip->text());
    vecStr.append(ui->liEd_Net_Subnet->text());
    vecStr.append(ui->liEd_Net_Gateway->text());
    vecStr.append(ui->liEd_S7TCP_ServerPort->text());
    vecStr.append(ui->liEd_Mod_chatPort->text());
    vecStr.append(ui->liEd_BcNetS7_ChatPort->text());
}

void DialogSiemensSetParameter::on_tabWidgetTabChange(int page)
{
    //获取信号接收者
    QObject * mySender = sender();
    //转换为按钮类型
    QTabWidget *p = qobject_cast<QTabWidget *>(mySender);

    if(p == ui->tabWidS7Config)
    {
        switch(page)
        {
        case 0:
            ui->labMessage->setText("设置Net的S7总线通讯接口的参数");
            break;
        case 1:
            ui->labMessage->setText("设置Net的扩展总线通讯接口的参数");
            break;
        }
    }
    else if(p == ui->tabWidNetConfig)
    {
        switch(page)
        {
        case 0:
            ui->labMessage->setText("设置Net的以太网接口的参数");
            break;
        case 1:
            ui->labMessage->setText("设置S7TCP服务器参数，S7TCP服务器用于STEP7、WINCC及各类采用西门子以太网驱动的监控组态软件");
            break;
        case 2:
            ui->labMessage->setText("设置ModbusTcp服务器参数");
            break;
        case 3:
            ui->labMessage->setText("设置BCNetS7协议服务器");
            break;
        case 4:
            ui->labMessage->setText("设置Web控制");
            break;
        }
    }
}

void DialogSiemensSetParameter::initUi()
{
    connect(ui->tabWidS7Config, &QTabWidget::currentChanged, this, &DialogSiemensSetParameter::on_tabWidgetTabChange);
    connect(ui->tabWidNetConfig, &QTabWidget::currentChanged, this, &DialogSiemensSetParameter::on_tabWidgetTabChange);

    initTableData();

    connect(ui->puB_ModMap_NewMap, &QPushButton::clicked, this, &DialogSiemensSetParameter::on_tableBtnClicked);
    connect(ui->puB_ModMap_DelMap, &QPushButton::clicked, this, &DialogSiemensSetParameter::on_tableBtnClicked);
    connect(ui->puB_ModMap_EditMap, &QPushButton::clicked, this, &DialogSiemensSetParameter::on_tableBtnClicked);
    connect(ui->puB_ModMap_FindMap, &QPushButton::clicked, this, &DialogSiemensSetParameter::on_tableBtnClicked);
    connect(ui->puB_ModMap_DistriMap, &QPushButton::clicked, this, &DialogSiemensSetParameter::on_tableBtnClicked);
    connect(ui->puB_ModMap_DefaultMap, &QPushButton::clicked, this, &DialogSiemensSetParameter::on_tableBtnClicked);
    connect(ui->puB_ModMap_ExportModMap, &QPushButton::clicked, this, &DialogSiemensSetParameter::on_tableBtnClicked);
    connect(ui->puB_ModMap_ImportModMap, &QPushButton::clicked, this, &DialogSiemensSetParameter::on_tableBtnClicked);
}

void DialogSiemensSetParameter::createTableHead()
{
    ui->tableModbusMap->clear();
    int rowCount = ui->tableModbusMap->rowCount();//记录当前tablewidget的行数，rowCount()会实时变化
    for(int i = 0; i<rowCount; i++)
    {
       ui->tableModbusMap->removeRow(0);
    }
    //设置表头
    QTableWidgetItem    *headerItem;
    QStringList headerText;
    headerText<<"Modbus数据区"<<"S7PLC数据区";  //表头标题用QStringList来表示
    ui->tableModbusMap->setColumnCount(headerText.count());//列数设置为与 headerText的行数相等

    for (int i=0;i<ui->tableModbusMap->columnCount();i++)//列编号从0开始
    {
       headerItem=new QTableWidgetItem(headerText.at(i));
       ui->tableModbusMap->setHorizontalHeaderItem(i,headerItem); //设置表头单元格的Item
    }
}

void DialogSiemensSetParameter::initTableData()
{
    createTableHead();
    ui->tableModbusMap->setColumnWidth(colModbusData,400);
    ui->tableModbusMap->setColumnWidth(colS7PlcData,400);

    ui->tableModbusMap->setAlternatingRowColors(true); //设置交替行背景颜色
    ui->tableModbusMap->setEditTriggers(QAbstractItemView::NoEditTriggers); //不允许编辑

    connect(ui->tableModbusMap, &QTableWidget::doubleClicked, this, [=]()
    {
        emit ui->puB_ModMap_EditMap->clicked();
    });
}

void DialogSiemensSetParameter::createRowData(int row, QString &modbusData, QString &s7PlcData, QString &cmd)
{
    //为一行的单元格创建 Items
    QTableWidgetItem    *item;
//    //ID
//    item=new  QTableWidgetItem(QString::number(row),DialogSiemensSetParameter::ctID);
//    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter); //文本对齐格式
//    ui->tableModbusMap->setItem(row,DialogSiemensSetParameter::colID,item); //为单元格设置Item

    //modBusData
    item=new  QTableWidgetItem(modbusData,DialogSiemensSetParameter::ctModbusData);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter); //文本对齐格式
    item->setData(Qt::UserRole,QVariant(cmd));//保存一条指令，用于输出文件时候使用
    ui->tableModbusMap->setItem(row,DialogSiemensSetParameter::colModbusData,item); //为单元格设置Item

    //s7PlcData
    item=new  QTableWidgetItem(s7PlcData,DialogSiemensSetParameter::ctS7PlcData);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter); //文本对齐格式
    ui->tableModbusMap->setItem(row,DialogSiemensSetParameter::colS7PlcData,item); //为单元格设置Item
}

QString DialogSiemensSetParameter::inserRowToMbCmd(int row, const QString &mbCMd)
{
    QString rowStr = QHelpApi::hexNumToStr(row,2)+" ";
    rowStr.append(mbCMd);
    return rowStr;
}

void DialogSiemensSetParameter::on_listWidget_currentRowChanged(int currentRow)
{
    ui->stackedWidget->setCurrentIndex(currentRow);
    ui->tabWidS7Config->setCurrentIndex(currentRow);
}

void DialogSiemensSetParameter::on_tableBtnClicked()
{
    //获取信号接收者
    QObject * mySender = sender();
    //转换为按钮类型
    QPushButton *p = qobject_cast<QPushButton *>(mySender);

    if(p == ui->puB_ModMap_NewMap)//新建一条映射
    {
        if(ui->tableModbusMap->rowCount()==32)
        {
            QMessageBox::information(nullptr, "新建映射", "最大映射数为32",QMessageBox::Yes);
            return;
        }
        DialogModbusMapBlock *dig = new DialogModbusMapBlock(this);
        Qt::WindowFlags    flags=dig->windowFlags();
        dig->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

        int ret=dig->exec();// 以模态方式显示对话框，用户关闭对话框时返回 DialogCode值
        if (ret==QDialog::Accepted)
        { //OK键被按下，获取输入
            QString modMapData, s7PlcData;
            QString mbCMD;
            dig->getMapData(mbCMD);
            int row = ui->tableModbusMap->rowCount();
            QString rowStr = inserRowToMbCmd(row,mbCMD);
            bool ok = QHelpApi::handleMBFile(rowStr,modMapData,s7PlcData);
//            qDebug()<<"new mbCMD "<<mbCMD;
//            qDebug()<<"new cmd rowStr "<<rowStr;
//            qDebug()<<"modMapData"<<modMapData<<"s7PlcData"<<s7PlcData;
            if(ok)
            {
                ui->tableModbusMap->insertRow(row);
                createRowData(row,modMapData,s7PlcData,mbCMD);
            }
        }
        delete dig; //删除对话框
        dig = nullptr;
    }
    else if(p == ui->puB_ModMap_DelMap)//删除一条映射
    {
        QModelIndex curIndex = ui->tableModbusMap->currentIndex();
        if(!curIndex.isValid())//模型无效则返回
        {
            ui->labMessage->setText("请选中数据--删除一条映射");
            return;
        }

        ui->tableModbusMap->removeRow(ui->tableModbusMap->currentRow());
    }
    else if(p == ui->puB_ModMap_EditMap)//编译一条映射，双击也可响应
    {
        QModelIndex curIndex = ui->tableModbusMap->currentIndex();
        if(!curIndex.isValid())//模型无效则返回
        {
            ui->labMessage->setText("请选中数据--编译一条映射");
           return;
        }


        int row = ui->tableModbusMap->currentRow();

        QTableWidgetItem *cellItem;

        cellItem=ui->tableModbusMap->item(row,DialogSiemensSetParameter::colModbusData); //获取单元格的item
        QString cmd = cellItem->data(Qt::UserRole).toString();
        qDebug()<<"edit cmd"<<cmd;

        DialogModbusMapBlock *dig = new DialogModbusMapBlock(this);
        Qt::WindowFlags    flags=dig->windowFlags();
        dig->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小
        cmd = inserRowToMbCmd(0,cmd);
        dig->setMapData(cmd);
        int ret=dig->exec();// 以模态方式显示对话框，用户关闭对话框时返回 DialogCode值
        if (ret==QDialog::Accepted)
        { //OK键被按下，获取输入
            QString modMapData, s7PlcData;
            QString mbCMD;
            dig->getMapData(mbCMD);
            cmd = inserRowToMbCmd(row,mbCMD);
            bool ok = QHelpApi::handleMBFile(cmd,modMapData,s7PlcData);
//            qDebug()<<"modMapData"<<modMapData<<"s7PlcData"<<s7PlcData;
            if(ok)
            {
                createRowData(row,modMapData,s7PlcData,mbCMD);
            }
        }
        delete dig; //删除对话框
        dig = nullptr;
    }
    else if(p == ui->puB_ModMap_ImportModMap)//导入modbus映射表
    {
        QString tempFilePath = QFileDialog::getOpenFileName(this, "open", "./",tr("*.mb"));

        if(false == tempFilePath.isEmpty()) //如果选择文件路径有效
        {
            QFile *sendData = new QFile(tempFilePath);
            if(!sendData->open(QFile::ReadOnly))
            {
                qDebug() << "open file error!";
                return;
            }
            qint64 fileSize = sendData->size();
            QByteArray outBlock = sendData->read(8);
            fileSize -= outBlock.size();
            qDebug()<<"FILE "<<QHelpApi::byteArrayToHexStr(outBlock);
            qint64 loadSize = 12;
            bool needClear = true;
            while (fileSize>0)
            {
                outBlock = sendData->read(qMin(loadSize,fileSize));
                QString modMapData, s7PlcData;
                QString cmd = QHelpApi::byteArrayToHexStr(outBlock);
                bool ok = QHelpApi::handleMBFile(cmd,modMapData,s7PlcData);
//                qDebug()<<QHelpApi::byteArrayToHexStr(outBlock);
                if(ok)
                {
                    if(needClear)
                    {
                       createTableHead();
                       needClear = false;
                    }
                    int row = ui->tableModbusMap->rowCount();
                    ui->tableModbusMap->insertRow(row);
                    cmd = cmd.remove(0,3);//去除前面的行号
//                    qDebug()<<"FILE "<<cmd;
                    createRowData(row,modMapData,s7PlcData,cmd);
                }
                else
                    break;
                fileSize -= outBlock.size();
                outBlock.resize(0);
            }
        }
    }
    else if(p == ui->puB_ModMap_DefaultMap)//默认配置
    {
        createTableHead();
        QString modMapData, s7PlcData;
#if DEBUG
        for(int i = 0; i<32; i++)
        {
            QString cmd = QString("00 00 00 00 FF FF 82 00 00 00 00 00");
            QHelpApi::handleMBFile(cmd,modMapData,s7PlcData);
            int row = ui->tableModbusMap->rowCount();
            ui->tableModbusMap->insertRow(row);
            cmd = cmd.remove(0,3);//去除前面的行号
//            qDebug()<<"remove row "<<cmd;
            createRowData(row,modMapData,s7PlcData,cmd);
        }
#else
        QString cmd = QString("00 00 00 00 FF FF 82 00 00 00 00 00");
        QHelpApi::handleMBFile(cmd,modMapData,s7PlcData);
        int row = ui->tableModbusMap->rowCount();
        ui->tableModbusMap->insertRow(row);
        cmd = cmd.remove(0,3);//去除前面的行号
        createRowData(row,modMapData,s7PlcData,cmd);

        cmd = QString("01 01 00 00 FF FF 81 00 00 00 00 00");
        QHelpApi::handleMBFile(cmd,modMapData,s7PlcData);
        row = ui->tableModbusMap->rowCount();
        ui->tableModbusMap->insertRow(row);
        cmd = cmd.remove(0,3);//去除前面的行号
        createRowData(row,modMapData,s7PlcData,cmd);

        cmd = QString("02 02 00 00 FF FF 83 00 00 00 00 00");
        QHelpApi::handleMBFile(cmd,modMapData,s7PlcData);
        row = ui->tableModbusMap->rowCount();
        ui->tableModbusMap->insertRow(row);
        cmd = cmd.remove(0,3);//去除前面的行号
        createRowData(row,modMapData,s7PlcData,cmd);

        cmd = QString("03 03 00 00 FF FF 84 00 01 00 00 00");
        QHelpApi::handleMBFile(cmd,modMapData,s7PlcData);
        row = ui->tableModbusMap->rowCount();
        ui->tableModbusMap->insertRow(row);
        cmd = cmd.remove(0,3);//去除前面的行号
        createRowData(row,modMapData,s7PlcData,cmd);
#endif
    }
    else if(p == ui->puB_ModMap_FindMap)//映射地址查询
    {
        QModelIndex curIndex = ui->tableModbusMap->currentIndex();
        if(!curIndex.isValid())//模型无效则返回
        {
            ui->labMessage->setText("请选中数据--映射地址查询");
            return;
        }
        int row = ui->tableModbusMap->currentRow();
        QTableWidgetItem    *cellItem;
        cellItem=ui->tableModbusMap->item(row,DialogSiemensSetParameter::colModbusData); //获取单元格的item
        QString cmd = cellItem->data(Qt::UserRole).toString();
        cmd = inserRowToMbCmd(0,cmd);

        DialogMosbusMapCheck *dig = new DialogMosbusMapCheck(this);
        dig->setModMapData(cmd);
        Qt::WindowFlags    flags=dig->windowFlags();
        dig->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

        int ret=dig->exec();// 以模态方式显示对话框，用户关闭对话框时返回 DialogCode值
        if (ret==QDialog::Accepted)
        { //OK键被按下，获取输入

        }
        delete dig; //删除对话框
        dig = nullptr;
    }
    else if(p == ui->puB_ModMap_DistriMap)//自动分配映射地址
    {

    }

    else if(p == ui->puB_ModMap_ExportModMap)//导出modbus映射表
    {
        QString curPath = QDir::currentPath();
        QString dlgTitle = "另存一个文件";
        QString tempFilePath = QFileDialog::getSaveFileName(this, dlgTitle, curPath,tr("*.mb"));

        if(tempFilePath.isEmpty())
            return;
        QFile aFile(tempFilePath);

        if(!aFile.open(QIODevice::WriteOnly))// | QIODevice::Text
        {
            ui->labMessage->setText("文件打开失败");
            return;
        }
        QByteArray fileHead = QHelpApi::hexStrToByteArray("00 FF 01 4C 00 00 53 01");
        aFile.write(fileHead,fileHead.size());
        for(int i = 0; i<ui->tableModbusMap->rowCount(); i++)
        {
            QTableWidgetItem    *cellItem;
            cellItem=ui->tableModbusMap->item(i,DialogSiemensSetParameter::colModbusData); //获取单元格的item
            QString cmd = cellItem->data(Qt::UserRole).toString();
            if(i == 10)
            {
                qDebug()<<"no row "<<cmd;
            }
            cmd = inserRowToMbCmd(i,cmd);

            QByteArray writeData = QHelpApi::hexStrToByteArray(cmd);

            aFile.write(writeData,writeData.size());
        }
        for(int i =0; i<32-ui->tableModbusMap->rowCount();i++)
        {
            QByteArray writeData = QHelpApi::hexStrToByteArray("00 00 00 00 00 00 00 00 00 00 00 00");
            aFile.write(writeData,writeData.size());
        }
        QMessageBox::information(nullptr, "Modbus映射表导出", "导出成功",QMessageBox::Yes);
    }

}
