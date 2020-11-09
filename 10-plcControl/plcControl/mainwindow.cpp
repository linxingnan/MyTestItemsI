#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    findPath = "../";
    ui->actLink->setEnabled(false);
    //创建状态栏组件
    LabCurFile = new QLabel("当前文件：",this);
    LabCurFile->setMinimumWidth(300);
    ui->statusbar->addWidget(LabCurFile);

    LabCellPos = new QLabel("打开文件后即可开始更新",this);
    LabCellPos->setMinimumWidth(180);
    LabCellPos->setAlignment(Qt::AlignHCenter);

    ui->statusbar->addWidget(LabCellPos);

    initCreateNewTcpLink();
    initModelData();
    initModelHead();
    initTestData();

    initSaveConfig();
    updatePro = new QTimer(this);
    connect(updatePro, &QTimer::timeout, this, &MainWindow::on_updateProgress);
}

MainWindow::~MainWindow()
{
    delete ui;
    if(newTcpThread->isRunning())
    {
        newTcpThread->quit();
        newTcpThread->wait();
    }
    if(saveThread->isRunning())
    {
        saveThread->quit();
        saveThread->wait();
    }
    if(createNewTcpClient!=nullptr)
        delete createNewTcpClient;
    if(saveConfig != nullptr)
        delete saveConfig;
    if(updatePro!=nullptr)
        delete updatePro;
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

//    connect(theSelection,&QStandardItemModel::)
    connect(ui->tableView,&QTableView::doubleClicked,this,&MainWindow::on_editModelData);


}

void MainWindow::initModelHead()
{
    QString header,aLineText;
    QStringList headerList;

    header = "ip地址 连接端口号 更新端口号 启用 进度";
    headerList=header.split(QRegExp("\\s+"),QString::SkipEmptyParts);//一个或多个空格、TAB等分隔符隔开的字符串
    theModel->setHorizontalHeaderLabels(headerList); //设置表头文字

    m_progressBarDelegate = new ProgressBarDelegate(this);
    ui->tableView->setItemDelegateForColumn(4,m_progressBarDelegate);
    emit theModel->layoutChanged();


}

void MainWindow::initTestData()
{
    QList<QStandardItem *> list;
    QStandardItem *aItem;
    QString aLineText;
    QStringList tmpList;

    aLineText = QString("%1 %2 %3").arg("192.168.1.103").arg(1234).arg(7777);
    tmpList=aLineText.split(QRegExp("\\s+"),QString::SkipEmptyParts);

    for (int j=0;j<FixedColumnCount;j++)
    {
        aItem=new QStandardItem(tmpList.at(j));//创建item
        list.append(aItem);
    }
    theModel->insertRow(theModel->rowCount(),list);
    aItem=new QStandardItem("");//最后一列是Checkable,设置
    aItem->setCheckable(true);
    aItem->setCheckState(Qt::Unchecked);
    theModel->setItem(0,3,aItem); //为模型的某个行列位置设置Item

    list.clear();

    aLineText = QString("%1 %2 %3").arg("192.168.1.103").arg(1234).arg(8888);
    tmpList=aLineText.split(QRegExp("\\s+"),QString::SkipEmptyParts);

    for (int j=0;j<FixedColumnCount;j++)
    {
        aItem=new QStandardItem(tmpList.at(j));//创建item
        list.append(aItem);
    }
    theModel->insertRow(theModel->rowCount(),list);
    aItem=new QStandardItem("");//最后一列是Checkable,设置
    aItem->setCheckable(true);
    aItem->setCheckState(Qt::Unchecked);
    theModel->setItem(1,3,aItem); //为模型的某个行列位置设置Item

    aItem=new QStandardItem("20");//进度条,设置
    theModel->setItem(1,4,aItem); //为模型的某个行列位置设置Item

    aItem=new QStandardItem("50");
    theModel->setItem(0,4,aItem);
}

void MainWindow::initCreateNewTcpLink()
{
    createNewTcpClient = new CreateNewClient();
    newTcpThread = new QThread(this);

    createNewTcpClient->moveToThread(newTcpThread);
    newTcpThread->start();

    connect(this, &MainWindow::connectServer, createNewTcpClient, &CreateNewClient::newClient);
    connect(this, &MainWindow::sendToAllUpdate, createNewTcpClient, &CreateNewClient::allWriteData);
    connect(createNewTcpClient, &CreateNewClient::connectSave, this, &MainWindow::on_continueCreateNew);

    connect(this, &MainWindow::needCreateNewServer, this, &MainWindow::on_createNew);
}

void MainWindow::initSaveConfig()
{
    saveConfig = new SaveConfigThread;
    saveThread = new QThread(this);

    saveConfig->moveToThread(saveThread);
    saveThread->start();
    connect(this, &MainWindow::getFilePath, saveConfig, &SaveConfigThread::ReadInit);//发出获取配置
    connect(saveConfig, &SaveConfigThread::getConfig, this, [=](QString value)
    {
        findPath = value;
    });//得到配置
    connect(this, &MainWindow::writeConfig,saveConfig,&SaveConfigThread::WriteInit);//写入配置

    emit getFilePath("FilePath");
}

void MainWindow::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous)
    if (current.isValid())
    {
        QStandardItem *aItem;
        aItem=theModel->itemFromIndex(current); //从模型索引获得Item
    }
}

void MainWindow::on_actNew_triggered()
{
    DLogDataChange *dlg = new DLogDataChange(this);
    Qt::WindowFlags    flags=dlg->windowFlags();
    dlg->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

    int ret=dlg->exec();// 以模态方式显示对话框，用户关闭对话框时返回 DialogCode值
    if (ret==QDialog::Accepted) //OK键被按下,对话框关闭，若设置了setAttribute(Qt::WA_DeleteOnClose)，对话框被释放，无法获得返回值
    { //OK键被按下，获取输入
        QString aLineText;
        QStandardItem *aItem;
        QList<QStandardItem *> list;
        QStringList tmpList;

        QString ipAddr=dlg->getIp();
        int port,updatePort;
        dlg->getPort(port,updatePort);
        aLineText = QString("%1 %2 %3").arg(ipAddr).arg(port).arg(updatePort);
        tmpList=aLineText.split(QRegExp("\\s+"),QString::SkipEmptyParts);//一个或多个空格、TAB等分隔符隔开的字符串分解为多个字符串
        for (int j=0;j<FixedColumnCount;j++)
        {
            aItem=new QStandardItem(tmpList.at(j));//创建item
            list.append(aItem);
        }
        theModel->insertRow(theModel->rowCount(),list);
        aItem=new QStandardItem("");//最后一列是Checkable,设置
        aItem->setCheckable(true);
        aItem->setCheckState(Qt::Unchecked);
        theModel->setItem(theModel->rowCount()-1,3,aItem); //为模型的某个行列位置设置Item
        QModelIndex curIndex = theModel->index(theModel->rowCount()-1,1);
        theSelection->clearSelection();
        theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    }
    delete dlg; //删除对话框
}

void MainWindow::on_editModelData(const QModelIndex &index)
{
    int row = index.row();

    QString ip = theModel->item(row,0)->text();
    int port = theModel->item(row,1)->text().toInt();
    int updatePort = theModel->item(row,2)->text().toInt();
    DLogDataChange *dlg = new DLogDataChange(this);

    QStringList tmpList = ip.split(".");
    dlg->setIpAndPort(tmpList.at(0).toInt(),tmpList.at(1).toInt(),tmpList.at(2).toInt(),tmpList.at(3).toInt(),port,updatePort);

    Qt::WindowFlags    flags=dlg->windowFlags();
    dlg->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

    int ret=dlg->exec();// 以模态方式显示对话框，用户关闭对话框时返回 DialogCode值
    if (ret==QDialog::Accepted) //OK键被按下,对话框关闭，若设置了setAttribute(Qt::WA_DeleteOnClose)，对话框被释放，无法获得返回值
    { //OK键被按下，获取输入
        QString aLineText;
        QStandardItem *aItem;
        QStringList tmpList;

        QString ipAddr=dlg->getIp();
        int port,updatePort;
        dlg->getPort(port,updatePort);
        aLineText = QString("%1 %2 %3").arg(ipAddr).arg(port).arg(updatePort);
        tmpList=aLineText.split(QRegExp("\\s+"),QString::SkipEmptyParts);//一个或多个空格、TAB等分隔符隔开的字符串分解为多个字符串
        for (int j=0;j<FixedColumnCount;j++)
        {
            aItem=new QStandardItem(tmpList.at(j));//创建item
            theModel->setItem(row,j,aItem);
        }
        aItem=new QStandardItem("");//最后一列是Checkable,设置
        aItem->setCheckable(true);
        aItem->setCheckState(Qt::Unchecked);
        theModel->setItem(theModel->rowCount()-1,3,aItem); //为模型的某个行列位置设置Item

    }
    delete dlg; //删除对话框
}

void MainWindow::on_actLink_triggered()
{
//    qDebug() << "on_actLink_triggered " <<"threadID : "<<QThread::currentThread();
    for(int j = 0; j<theModel->rowCount(); j++)
    {
        QStandardItem *aItem;
        aItem = theModel->item(j,3);
        if(aItem->checkState() == Qt::Checked)
        {
            ipAddr = theModel->item(j,0)->text();
            serverPort = theModel->item(j,2)->text().toInt();//端口号  updatePort
            ipVec.append(ipAddr);
            portVec.append(serverPort);
            proGressItem.append(j);
        }
    }
    if(!updatePro->isActive())
    {
      updatePro->start(200);
    }
    updateTime = 0;
    on_continueCreateNew();
}

void MainWindow::on_readSendData()
{
    emit sendToAllUpdate(filePath);
}

void MainWindow::on_createNew()
{
    qDebug()<<"on_createNew";
    emit connectServer(ipVec.takeFirst(),portVec.takeFirst(),proGressItem.takeFirst(),theModel);
}

void MainWindow::on_continueCreateNew()
{
    if(ipVec.size()!=0 && portVec.size()!=0)
        emit needCreateNewServer();
    else
        on_readSendData();
}

void MainWindow::on_actOpenFile_triggered()
{
    QString tempFilePath = QFileDialog::getOpenFileName(this, "open", findPath);


    if(false == tempFilePath.isEmpty()) //如果选择文件路径有效
    {
        QFileInfo info(tempFilePath);
        QString fileName = info.fileName();

        fileName.prepend("/");
        findPath = tempFilePath;
        findPath.chop(fileName.size());

        emit writeConfig("FilePath",findPath);
        LabCurFile->setText(tempFilePath);
        filePath = tempFilePath;
        ui->actLink->setEnabled(true);
    }
    else
    {
        return;
    }
}

void MainWindow::on_updateProgress()
{
    emit theModel->layoutChanged();
    if(++updateTime == 5000)
    {
        updatePro->stop();
        updateTime = 0;
    }

}

void MainWindow::on_actDel_triggered()
{
    QModelIndexList modelIndexList = ui->tableView->selectionModel()->selectedIndexes();

//    foreach(QModelIndex modelIndex, modelIndexList)
//    {
//        qDebug()<<modelIndex.row();
//        theModel->removeRow(modelIndex.row());

//    }
    theModel->removeRows(modelIndexList.first().row(), modelIndexList.size());
//    ui->tableView->model()->submit();
//    theModel->submitAll();

}
