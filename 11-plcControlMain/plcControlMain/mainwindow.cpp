#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "diasetip.h"
#include <QMessageBox>
#include <QHostInfo>
#include <QNetworkInterface>
#include <QDesktopServices>
#include <QUrl>
#include "helpApi/qhelpapi.h"
#include "windowupdate.h"
#include <QNetworkInterface>
#include <QFileInfo>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),digModData(nullptr),haveDataMod(false),delayNum(0),digCheck(nullptr)
{//测试修改
    setMinimumSize(1200,600);
    ui->setupUi(this);

//    qRegisterMetaType<QVector<int>>("MainWindow");
    initAction();
    AddDropDownToolbox();

    initUdpChat();
    initHandleData();
    initModelData();
    initModelHead();

    connect(&timeParameterMod,&QTimer::timeout, this, &MainWindow::on_parModTimeout);//设备参数
    connect(&timeCheck, &QTimer::timeout, this, &MainWindow::on_checkTimeOut);//设备运行诊断

    qDebug()<<"main"<<QThread::currentThread();
}

MainWindow::~MainWindow()
{
    qDebug()<<"~MainWindow"<<QThread::currentThread();
    if(threadUdp->isRunning())
    {
        threadUdp->quit();
        threadUdp->wait();
    }
    if(threadHandleData->isRunning())
    {
        threadHandleData->quit();
        threadHandleData->wait();
    }

    delete handleData;
    delete ui;
}

void MainWindow::initAction()
{
    ui->toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    actFindFast.setText("快速搜索");
    actFindAll.setText("全局搜索");
    actFindDef.setText("指定设备");

    actSetIp.setText("设置ip地址");
    actSetIp.setIcon(QIcon(":/image/icon/xiugai2-copy-copy.png"));

    actSetEquData.setText("修改设备参数");
    actSetEquData.setIcon(QIcon(":/image/icon/weibiaoti-.png"));
    //
    actCheckEqu.setText("设备运行诊断");
    actCheckEqu.setIcon(QIcon(":/image/icon/zhenduan.png"));
    //
    actSetMainPage.setText("设备配置主页");
    actSetMainPage.setIcon(QIcon(":/image/icon/zhuye.png"));
    //
    actChat.setText("通讯测试");
    actChat.setIcon(QIcon(":/image/icon/ceshi.png"));

    actUpdate.setText("固件更新");
    actUpdate.setIcon(QIcon(":/image/icon/update.png"));

//    actTest.setText("对话框界面测试");

}

void MainWindow::AddDropDownToolbox()
{
    chooseNet = new MyCombox(this);
    chooseNet->addItems(getLocalNetIp());
    ui->toolBar->addWidget(chooseNet);
    //对齐其他按钮
    QWidget *  searchWidget  =   new  QWidget( this );
    ui->toolBar -> addWidget(searchWidget);
    QHBoxLayout *  searchLayout  =   new  QHBoxLayout(searchWidget);
    QSpacerItem *  spacer  =   new  QSpacerItem( 5 , 5 ,QSizePolicy::Preferred,QSizePolicy::Minimum);
    searchLayout -> addItem(spacer);

    QMenu* menu=new QMenu(this);
    menu->addAction(&actFindFast);
    menu->addAction(&actFindAll);
    menu->addAction(&actFindDef);
    actFindDef.setVisible(false);//指定设备用不着

    findButton=new QToolButton(this);
    findButton->setMenu(menu);
    findButton->setPopupMode(QToolButton::InstantPopup);
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/image/icon/sousuo.png"), QSize(50,50), QIcon::Normal, QIcon::Off);
    findButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    findButton->setText("搜索设备");
    findButton->setIcon(icon);
//    ui->toolBar->addWidget(findButton);
    findButton->setMinimumSize(QSize(50,50));
    findButton->setIconSize(QSize(50,50));
    searchLayout -> addWidget(findButton);

    ui->toolBar->addAction(&actSetIp);
    ui->toolBar->addAction(&actSetEquData);
    ui->toolBar->addAction(&actCheckEqu);
    ui->toolBar->addAction(&actSetMainPage);
    ui->toolBar->addAction(&actChat);
    ui->toolBar->addAction(&actUpdate);
//    ui->toolBar->addAction(&actTest);

    connect(&actFindFast, &QAction::triggered, this, &MainWindow::on_actionTriggered);
    connect(&actFindAll, &QAction::triggered, this, &MainWindow::on_actionTriggered);
//    connect(&actFindDef, &QAction::triggered, this, &MainWindow::on_actionTriggered);

    connect(&actSetIp, &QAction::triggered, this, &MainWindow::on_actionTriggered);
    connect(&actSetEquData, &QAction::triggered, this, &MainWindow::on_actionTriggered);
    connect(&actCheckEqu, &QAction::triggered, this, &MainWindow::on_actionTriggered);
    connect(&actSetMainPage, &QAction::triggered, this, &MainWindow::on_actionTriggered);
    connect(&actChat, &QAction::triggered, this, &MainWindow::on_actionTriggered);
    connect(&actUpdate, &QAction::triggered, this, &MainWindow::on_actionTriggered);

//    connect(&actTest, &QAction::triggered, this, &MainWindow::on_actionTriggered);

    connect(chooseNet, &MyCombox::clicked, this, [=]()
    {
        qDebug()<<"网卡更新";
        chooseNet->clear();
        chooseNet->addItems(getLocalNetIp());
    });


    actSetIp.setEnabled(false);
    actSetEquData.setEnabled(false);
    actCheckEqu.setEnabled(false);
    actSetMainPage.setEnabled(false);
}

void MainWindow::initUdpChat()
{
    udpChat = new UdpServer();
    threadUdp = new QThread(this);

    udpChat->moveToThread(threadUdp);
    threadUdp->start();

    connect(this, &MainWindow::findEquSend, udpChat, &UdpServer::findEqu);
    connect(this, &MainWindow::findEquAllSend, udpChat, &UdpServer::findEquAll);
    connect(this, &MainWindow::dataNeedToChange, udpChat, &UdpServer::dataNeedChange);
    connect(this, &MainWindow::dataNeedCheck, udpChat, &UdpServer::dataCheck);
    connect(this, &MainWindow::dataDnotCheck, udpChat, &UdpServer::disConnectUdp);

    connect( udpChat, &UdpServer::findAllTimeOut, this, [=]()
    {
        delete digFindAll;
    });

    connect( threadUdp, SIGNAL(finished()), udpChat, SLOT(deleteLater()) );
    connect( threadUdp, SIGNAL(finished()), threadUdp, SLOT(deleteLater()) );

    //下拉框更改网卡
    connect(chooseNet, &MyCombox::currentTextChanged, udpChat, &UdpServer::setLocalIpaddr);
    if(chooseNet->count()!=0)
    {
      emit chooseNet->currentTextChanged(chooseNet->currentText());
    }

    connect(this, &MainWindow::getModbusMapData, udpChat, &UdpServer::dataModbusGet);

    //西门子下载modbusMap映射表
    connect(this, &MainWindow::modbusMapDataSend, udpChat, &UdpServer::oneSend);
}

void MainWindow::initHandleData()
{
    handleData = new HandleReData();
    threadHandleData = new QThread(this);

    handleData->moveToThread(threadHandleData);
    threadHandleData->start();

    connect(udpChat, &UdpServer::reData, handleData, &HandleReData::parsingData);//udp接收到的数据进入分析
    //设备的IP需要修改  从界面获取数据  udp发送
    connect(this, &MainWindow::changeIpDataHandle, handleData, &HandleReData::changeIp);
    connect(handleData, &HandleReData::haveIpNeedChange, udpChat, &UdpServer::defaultSend);
    //修改ip成功
    connect(handleData, &HandleReData::ipChangeOk, this, [=]()
    {
        QMessageBox::information(this, "修改ip","修改ip成功");
    });
    //参数-修改 从udp接收数据 参数修改界面显示
    qRegisterMetaType<QList<int>>("QList<int>");
    connect(handleData, &HandleReData::getParameterMod, this, &MainWindow::on_parameterMod);
    //参数-修改-下载 主界面获取 handle处理 udp发送
    connect(this, &MainWindow::dataDownload, handleData, &HandleReData::dataDownloadToSend);
    connect(handleData, &HandleReData::dataDown, udpChat,&UdpServer::oneSend);
    //西门子第二个参数下载
    connect(this, &MainWindow::siemensNetDataNeedDown, handleData, &HandleReData::dataForSiemensNetData);
    connect(handleData, &HandleReData::dataForSiemensNetDataDown, udpChat,&UdpServer::oneSend);
    //参数下载成功
    connect(handleData, &HandleReData::dataDownOk, this, [=]()
    {
        QMessageBox::information(this, "下载参数","下载参数成功");
    });
    //设备诊断数据处理完成
    connect(handleData, &HandleReData::checkDataHandleOk, this, &MainWindow::on_checkDataHandleOk);

    //西门子第二个参数下载
    connect(handleData, &HandleReData::dataDownSiemensModbusMap, this, [=]()
    {
        qDebug()<<"send siemens net data";
        QList<int> vecInt;
        QVector<QString> vecStr;
        digSieModData->downConfig_netData(vecInt,vecStr);
        QString ip = digSieModData->getIp();
        emit siemensNetDataNeedDown(vecInt,vecStr,ip,siemensPort);
    });
}

void MainWindow::initModelData()
{
    theModel = new QStandardItemModel(this); //创建数据模型
    theSelection = new QItemSelectionModel(theModel);//Item选择模型

    connect(theSelection,SIGNAL(currentChanged(QModelIndex,QModelIndex)),
            this,SLOT(on_currentChanged(QModelIndex,QModelIndex)));
    //为tableView设置数据模型
    ui->tableView->setModel(theModel); //设置数据模型
    ui->tableView->setSelectionModel(theSelection);//设置选择模型
    //不允许双击编辑
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //插入新数据
    connect(handleData, &HandleReData::findEquMessage, this, &MainWindow::on_addEquMessage);
#if DEBUG
    QStringList sendList;
    sendList.append("test");
    sendList.append("43870");
    sendList.append("2020.4.14");
    sendList.append("8.2.4.5");
    sendList.append("----");
    sendList.append("08");
    sendList.append("E0:79:5E:00:AB:5E");
    sendList.append("192.168.1.104");
    sendList.append("255.255.255.0");
    sendList.append("192.168.1.1");
    sendList.append("admin");
    on_addEquMessage(sendList);
#else
    emit actFindFast.triggered();
#endif
}

void MainWindow::initModelHead()
{
    QString header,aLineText;
    QStringList headerList;

    header = "设备名称 序列号 出厂日期 固件版本 设备备注 协议品牌 MAC地址 IP地址 子网掩码 网关 用户名";
    headerList=header.split(QRegExp("\\s+"),QString::SkipEmptyParts);//一个或多个空格、TAB等分隔符隔开的字符串
    theModel->setHorizontalHeaderLabels(headerList); //设置表头文字

    ui->tableView->setAlternatingRowColors(true); //设置交替行背景颜色 2020/10/15
    for(int i = 0; i<5;i++)
    {
        ui->tableView->setColumnWidth(i,80);
    }
    ui->tableView->setColumnWidth(5,110);
    ui->tableView->setColumnWidth(6,140);
    ui->tableView->setColumnWidth(7,130);
    ui->tableView->setColumnWidth(8,130);
    ui->tableView->setColumnWidth(9,130);

    ui->tableView->hideColumn(10);
}

QStringList MainWindow::getLocalNetIp()
{
//    //网卡信息获取
//    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();
//    for(int i = 0; i<list.size(); i++)
//    {
//        qDebug()<<"ip "<<"name "<<list.at(i).type();
//    }

    QString localHostName=QHostInfo::localHostName();
//    qDebug()<<localHostName;
    QHostInfo info=QHostInfo::fromName(localHostName);
//    qDebug()<<"IP Address:"<<info.addresses();
//    qDebug()<<"-----------------";
    QStringList ipList;
    foreach(QHostAddress address,info.addresses()){
        if(address.protocol()==QAbstractSocket::IPv4Protocol){
            ipList.append(address.toString());
//            qDebug()<<address.toString();
        }
    }
//    qDebug()<<"-------------";

    return ipList;
}

void MainWindow::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous)
    if (current.isValid())
    {
        actSetIp.setEnabled(true);
        actSetEquData.setEnabled(true);
        actCheckEqu.setEnabled(true);
        actSetMainPage.setEnabled(true);
    }
    else
    {
        actSetIp.setEnabled(false);
        actSetEquData.setEnabled(false);
        actCheckEqu.setEnabled(false);
        actSetMainPage.setEnabled(false);
    }
}

void MainWindow::on_actionTriggered()
{
    //获取信号接收者
    QObject * mySender = sender();
    //转换为按钮类型
    QAction *p = qobject_cast<QAction *>(mySender);
    if(p == &actFindFast)
    {
        qDebug()<<"快速搜索";
        theModel->clear();
        initModelHead();
        emit findEquSend();
    }
    else if(p == &actFindAll)
    {
        emit dataDnotCheck();
        theModel->clear();
        initModelHead();
        digFindAll = new DialogFindAll(this);
        Qt::WindowFlags flags=digFindAll->windowFlags();
        digFindAll->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

        /*int ret=*/digFindAll->show();
        emit findEquAllSend();
    }
//    else if(p == &actFindDef)
//    {

//    }
    else if(p == &actSetIp)//设置ip
    {
        qDebug()<<"setIP";
        QModelIndex curIndex = theSelection->currentIndex();
        if(!curIndex.isValid())//模型无效则返回
            return;
        emit dataDnotCheck();
        int row = curIndex.row();

        QString serialNum = theModel->item(row,1)->text();
        QString ip = theModel->item(row,7)->text();
        QString subnetMask = theModel->item(row,8)->text();
        QString gateway = theModel->item(row,9)->text();

        DiaSetIp *dig = new DiaSetIp(this);
        Qt::WindowFlags    flags=dig->windowFlags();
        dig->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小
        dig->setData(serialNum,ip,subnetMask,gateway);

        int ret=dig->exec();// 以模态方式显示对话框，用户关闭对话框时返回 DialogCode值
        if (ret==QDialog::Accepted)
        { //OK键被按下，获取输入
            QStringList list;
            dig->getData(list);
//            qDebug()<<list;
            emit changeIpDataHandle(list);
        }
        delete dig; //删除对话框
    }
    else if(p == &actSetEquData)//修改设备参数
    {
        qDebug()<<"actSetEquData";

        QModelIndex curIndex = theSelection->currentIndex();
        if(!curIndex.isValid())//模型无效则返回
            return;
        emit dataDnotCheck();//关闭之前的连接
        timeParameterMod.start(100);
        haveDataMod = false;
        int row = curIndex.row();

        QString ip = theModel->item(row,7)->text();


        QStringList list;
        for(int i =0 ; i<theModel->columnCount(); i++)
        {
            list.append(theModel->item(row,i)->text());
        }

        brandNum = QHelpApi::bandName.key(theModel->item(row,5)->text());
        handleData->handleBrandNum = brandNum;
        if(brandNum == 1)
        {
            emit dataNeedToChange(ip,defaultPort);
            qDebug()<<"三菱";
            digModData = new DiaModEquipment(this);
            Qt::WindowFlags    flags=digModData->windowFlags();
            digModData->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小
            digModData->setBaseData(list);

            QMetaObject::Connection dis = connect(digModData, &DiaModEquipment::downClicked, this, [=]()
            {
                qDebug()<<"下载";
                QList<int> listCom;
                QStringList listNetData;

                digModData->getModData(listCom, listNetData);
                emit dataDownload(ip,listCom, listNetData);
            });

            int ret=digModData->exec();

            if (ret==QDialog::Accepted)
            { //OK键被按下，获取输入
                qDebug()<<"下载";
                QList<int> listCom;
                QStringList listNetData;

                digModData->getModData(listCom, listNetData);
                emit dataDownload(ip,listCom, listNetData);
            }
            else if(ret==QDialog::Rejected)
            {
                disconnect(dis);
                delete digModData;
                digModData = nullptr;
            }
        }
        else if(brandNum == 8)
        {
            emit dataNeedToChange(ip,siemensPort);
            qDebug()<<"西门子";
            digSieModData = new DialogSiemensSetParameter(this);
            digSieModData->setViewData(list.at(7));//ip地址

            QMetaObject::Connection dis1 =
            connect(handleData,&HandleReData::getModbusMap,digSieModData,&DialogSiemensSetParameter::setModbusMapData);

            QMetaObject::Connection dis2 =
            connect(digSieModData,&DialogSiemensSetParameter::upConfig,this,[=]()
            {
               emit dataNeedToChange(ip,siemensPort);
            });

            QMetaObject::Connection dis3 =
            connect(digSieModData,&DialogSiemensSetParameter::downConfig,this,[=]()
            {
                QString list;
               digSieModData->downConfig_ModbusMap(list);

               emit modbusMapDataSend(list,ip,siemensPort);
            });

            int ret=digSieModData->exec();

            if(ret == QDialog::Rejected)
            {
                disconnect(dis1);
                disconnect(dis2);
                disconnect(dis3);
                delete digSieModData;
                digSieModData = nullptr;
            }

        }
    }
    else if(p == &actCheckEqu)//
    {
        qDebug()<<"诊断";
        QModelIndex curIndex = theSelection->currentIndex();
        if(!curIndex.isValid())//模型无效则返回
            return;
        int row = curIndex.row();
        checkIpAddr = theModel->item(row,7)->text();

        timeCheck.start(200);//定时器循环发送信号

        digCheck = new DialogRunCheck(this);
        Qt::WindowFlags flags=digCheck->windowFlags();

        digCheck->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

        int ret=digCheck->exec();
        if (ret==QDialog::Rejected)
        {
            qDebug()<<"close check";
            timeCheck.stop();
            emit dataDnotCheck();
        }

        delete digCheck;
        digCheck = nullptr;
    }
    else if(p == &actSetMainPage)//打开页面
    {
        QModelIndex curIndex = theSelection->currentIndex();
        if(!curIndex.isValid())//模型无效则返回
            return;
        int row = curIndex.row();
        checkIpAddr = theModel->item(row,7)->text();
        QString openNet = QString("http://%1/").arg(checkIpAddr);
        QDesktopServices::openUrl(QUrl(openNet));
    }
    else if(p == &actChat)//通讯测试
    {
        qDebug()<<"通讯测试";
        QStringList chatTestData;

        QModelIndex curIndex = theSelection->currentIndex();
        if(!curIndex.isValid())//模型无效则返回
        {
            chatTestData.append("192.168.1.104");
            chatTestData.append("三菱FX");
        }
        else
        {
            int row = curIndex.row();

            chatTestData.append(theModel->item(row,7)->text());//ip
            chatTestData.append(theModel->item(row,5)->text());//品牌
        }

        DiaTestChat *digTestChat = new DiaTestChat(this);

        digTestChat->setAttribute(Qt::WA_DeleteOnClose);

        Qt::WindowFlags flags=digTestChat->windowFlags();
        digTestChat->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

        digTestChat->setEquData(chatTestData);
        digTestChat->show();
    }
    else if(p == &actUpdate)
    {
        qDebug()<<"固件更新";
        QStringList list;
        for(int i = 0; i<theModel->rowCount();i++)
        {
            list.append(theModel->item(theModel->rowCount()-1,7)->text());
        }
        WindowUpdate *updateWindow = new WindowUpdate(this);

        if(!list.isEmpty())
        {
            updateWindow->setEquIp(list);
        }

        updateWindow->setAttribute(Qt::WA_DeleteOnClose);

        Qt::WindowFlags flags=updateWindow->windowFlags();
        updateWindow->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

        updateWindow->show();

    }

//    else if(p == &actTest)
//    {
//        DialogSiemensSetParameter *test = new DialogSiemensSetParameter(this);
//        test->setViewData("192.168.1.104");
//        test->exec();

//        delete test;
//        test = nullptr;
//    }
}

void MainWindow::on_addEquMessage(QStringList list)
{
    for(int i = 0; i<theModel->rowCount(); i++)
    {
        QString temp = theModel->item(i,1)->text();
        if(list.at(1) == temp)
        {
           return;
        }
    }
    QList<QStandardItem *> insertList;
    for(int i = 0; i<list.size(); i++)
    {
        if(i == 5)
        {
            bool ok;
            int num = list.at(i).toInt(&ok,16);
            QMap<int, QString>::const_iterator tempMap = QHelpApi::bandName.find(num);
            if(tempMap != QHelpApi::bandName.end())
                list[i] = tempMap.value();
            else
                list[i] = "未知";
//                list[i] =QHelpApi::getBandName(list.at(i));
        }
       QStandardItem *aItem = new QStandardItem(list.at(i));
       insertList.append(aItem);
    }
    theModel->insertRow(theModel->rowCount(),insertList);
    QModelIndex curIndex = theModel->index(theModel->rowCount()-1,1);
    theSelection->clearSelection();
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);


}
//参数修改有返回  更改界面信息
void MainWindow::on_parameterMod(QList<int> list,QStringList netData)
{
    haveDataMod = true;
    delayNum = 0;
    timeParameterMod.stop();
    if(brandNum == 1)
    {
        if(digModData!=nullptr)
        {
            digModData->setComBoxData(list);
            digModData->setNetData(netData);
        }
    }
    else if(brandNum == 8)
    {
        if(digSieModData != nullptr)
        {
            digSieModData->setModData(list);
            digSieModData->setNetData(netData);
            QModelIndex curIndex = theSelection->currentIndex();
            if(!curIndex.isValid())//模型无效则返回
                return;
            int row = curIndex.row();

            QString ip = theModel->item(row,7)->text();
            emit getModbusMapData(ip,siemensPort);
        }
    }

}
//参数修改若没有返回 提醒
void MainWindow::on_parModTimeout()
{
    delayNum++;
    if(delayNum >= 10 && !haveDataMod)
    {
        delayNum=0;
        timeParameterMod.stop();
        QMessageBox::warning(this, "警告","没有参数，请重新搜索");
    }
}

void MainWindow::on_checkTimeOut()
{
    emit dataNeedCheck(checkIpAddr,defaultPort);
}

void MainWindow::on_checkDataHandleOk(QStringList dataList)
{
    if(digCheck == nullptr)
        return;

    digCheck->setLabData(dataList);
}

