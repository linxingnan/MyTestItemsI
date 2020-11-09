#include "windowupdate.h"
#include "ui_windowupdate.h"
#include <QFileDialog>
#include "helpApi/qhelpapi.h"
WindowUpdate::WindowUpdate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowUpdate)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/image/icon/update.png"));
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
#if DEBUG
    initTestData();
#endif
    initSaveConfig();
    updatePro = new QTimer(this);
    connect(updatePro, &QTimer::timeout, this, &WindowUpdate::on_updateProgress);
}

WindowUpdate::~WindowUpdate()
{
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
//    if(createNewTcpClient!=nullptr)
//        delete createNewTcpClient;
    if(saveConfig != nullptr)
        delete saveConfig;
    if(updatePro!=nullptr)
        delete updatePro;

    delete ui;
}

void WindowUpdate::setEquIp(QStringList list)
{
    QStandardItem *aItem;
    QList<QStandardItem *> itemList;
    for(int i = 0; i<list.size(); i++)
    {
        QString aLineText = QString("%1 %2").arg(list.at(i)).arg(8888);

        QStringList tmpList=aLineText.split(QRegExp("\\s+"),QString::SkipEmptyParts);

        for (int j=0;j<FixedColumnCount;j++)
        {
            aItem=new QStandardItem(tmpList.at(j));//创建item
            itemList.append(aItem);
        }
        theModel->insertRow(theModel->rowCount(),itemList);

        aItem=new QStandardItem("");//最后一列是Checkable,设置
        aItem->setCheckable(true);
        aItem->setCheckState(Qt::Unchecked);
        theModel->setItem(theModel->rowCount()-1,2,aItem); //为模型的某个行列位置设置Item

        aItem=new QStandardItem("0");
        theModel->setItem(theModel->rowCount()-1,3,aItem);

        itemList.clear();
    }

    QModelIndex curIndex = theModel->index(theModel->rowCount()-1,1);
    theSelection->clearSelection();
    theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}

void WindowUpdate::initModelData()
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

    connect(ui->tableView,&QTableView::doubleClicked,this,&WindowUpdate::on_editModelData);
}

void WindowUpdate::initModelHead()
{
    QString header,aLineText;
    QStringList headerList;

    header = "ip地址 更新端口号 启用 进度";
    headerList=header.split(QRegExp("\\s+"),QString::SkipEmptyParts);//一个或多个空格、TAB等分隔符隔开的字符串
    theModel->setHorizontalHeaderLabels(headerList); //设置表头文字

    m_progressBarDelegate = new ProgressBarDelegate(this);
    ui->tableView->setItemDelegateForColumn(3,m_progressBarDelegate);
    emit theModel->layoutChanged();
}

void WindowUpdate::initTestData()
{
    QList<QStandardItem *> list;
    QStandardItem *aItem;
    QString aLineText;
    QStringList tmpList;

    aLineText = QString("%1 %2").arg("192.168.1.104").arg(7777);
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
    theModel->setItem(0,2,aItem); //为模型的某个行列位置设置Item

    list.clear();

    aLineText = QString("%1 %2").arg("192.168.1.104").arg(8888);
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
    theModel->setItem(1,2,aItem); //为模型的某个行列位置设置Item

    aItem=new QStandardItem("20");//进度条,设置
    theModel->setItem(1,3,aItem); //为模型的某个行列位置设置Item

    aItem=new QStandardItem("50");
    theModel->setItem(0,3,aItem);
}

void WindowUpdate::initCreateNewTcpLink()
{
    createNewTcpClient = new CreateNewClient();
    newTcpThread = new QThread(this);

    createNewTcpClient->moveToThread(newTcpThread);
    newTcpThread->start();

    connect(this, &WindowUpdate::connectServer, createNewTcpClient, &CreateNewClient::newClient);
    connect(this, &WindowUpdate::sendToAllUpdate, createNewTcpClient, &CreateNewClient::allWriteData);
    connect(createNewTcpClient, &CreateNewClient::connectSave, this, &WindowUpdate::on_continueCreateNew);

    connect(this, &WindowUpdate::needCreateNewServer, this, &WindowUpdate::on_createNew);

    connect( newTcpThread, SIGNAL(finished()), createNewTcpClient, SLOT(deleteLater()) );
    connect( newTcpThread, SIGNAL(finished()), newTcpThread, SLOT(deleteLater()) );
}

void WindowUpdate::initSaveConfig()
{
    saveConfig = new SaveConfigThread;
    saveThread = new QThread(this);

    saveConfig->moveToThread(saveThread);
    saveThread->start();
    connect(this, &WindowUpdate::getFilePath, saveConfig, &SaveConfigThread::ReadInit);//发出获取配置
    connect(saveConfig, &SaveConfigThread::getConfig, this, [=](QString value)
    {
        findPath = value;
    });//得到配置
    connect(this, &WindowUpdate::writeConfig,saveConfig,&SaveConfigThread::WriteInit);//写入配置

    emit getFilePath("FilePath");
}

void WindowUpdate::on_editModelData(const QModelIndex &index)
{
    int row = index.row();

    QString ip = theModel->item(row,0)->text();
    int port = theModel->item(row,1)->text().toInt();
    DLogDataChange *dlg = new DLogDataChange(this);

    QStringList tmpList = ip.split(".");
    dlg->setIpAndPort(tmpList.at(0).toInt(),tmpList.at(1).toInt(),tmpList.at(2).toInt(),tmpList.at(3).toInt(),port);

    Qt::WindowFlags    flags=dlg->windowFlags();
    dlg->setWindowFlags(flags | Qt::MSWindowsFixedSizeDialogHint); //设置对话框固定大小

    int ret=dlg->exec();// 以模态方式显示对话框，用户关闭对话框时返回 DialogCode值
    if (ret==QDialog::Accepted) //OK键被按下,对话框关闭，若设置了setAttribute(Qt::WA_DeleteOnClose)，对话框被释放，无法获得返回值
    { //OK键被按下，获取输入
        QString aLineText;
        QStandardItem *aItem;
        QStringList tmpList;

        QString ipAddr=dlg->getIp();
        int port;
        dlg->getPort(port);
        aLineText = QString("%1 %2").arg(ipAddr).arg(port);
        tmpList=aLineText.split(QRegExp("\\s+"),QString::SkipEmptyParts);//一个或多个空格、TAB等分隔符隔开的字符串分解为多个字符串
        for (int j=0;j<FixedColumnCount;j++)
        {
            aItem=new QStandardItem(tmpList.at(j));//创建item
            theModel->setItem(row,j,aItem);
        }
        aItem=new QStandardItem("");//最后一列是Checkable,设置
        aItem->setCheckable(true);
        aItem->setCheckState(Qt::Unchecked);
        theModel->setItem(theModel->rowCount()-1,2,aItem); //为模型的某个行列位置设置Item

    }
    delete dlg; //删除对话框
}

void WindowUpdate::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous)
    if (current.isValid())
    {
        QStandardItem *aItem;
        aItem=theModel->itemFromIndex(current); //从模型索引获得Item
        Q_UNUSED(aItem)
    }
}

void WindowUpdate::on_actNew_triggered()
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
        int port;
        dlg->getPort(port);
        aLineText = QString("%1 %2").arg(ipAddr).arg(port);
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
        theModel->setItem(theModel->rowCount()-1,2,aItem); //为模型的某个行列位置设置Item
        QModelIndex curIndex = theModel->index(theModel->rowCount()-1,1);
        theSelection->clearSelection();
        theSelection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    }
    delete dlg; //删除对话框
}

void WindowUpdate::on_readSendData()
{
    emit sendToAllUpdate(filePath);
}

void WindowUpdate::on_createNew()
{
    qDebug()<<"on_createNew";
    emit connectServer(ipVec.takeFirst(),portVec.takeFirst(),proGressItem.takeFirst(),theModel);
}

void WindowUpdate::on_continueCreateNew()
{
    if(ipVec.size()!=0 && portVec.size()!=0)
        emit needCreateNewServer();
    else
        on_readSendData();
}

void WindowUpdate::on_actOpenFile_triggered()
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

void WindowUpdate::on_updateProgress()
{
    emit theModel->layoutChanged();
    if(++updateTime == 5000)
    {
        updatePro->stop();
        updateTime = 0;
    }
}

void WindowUpdate::on_actDel_triggered()
{
    QModelIndexList modelIndexList = ui->tableView->selectionModel()->selectedIndexes();

    theModel->removeRows(modelIndexList.first().row(), modelIndexList.size());
}

void WindowUpdate::on_actLink_triggered()
{
    //    qDebug() << "on_actLink_triggered " <<"threadID : "<<QThread::currentThread();
        for(int j = 0; j<theModel->rowCount(); j++)
        {
            QStandardItem *aItem;
            aItem = theModel->item(j,2);
            if(aItem->checkState() == Qt::Checked)
            {
                ipAddr = theModel->item(j,0)->text();
                serverPort = static_cast<quint16>(theModel->item(j,1)->text().toInt()) ;//端口号  updatePort
                ipVec.append(ipAddr);
                portVec.append(serverPort);
                proGressItem.append(j);
                qDebug() << "need link "<<ipAddr<<" "<<serverPort;
            }
        }
        if(!updatePro->isActive())
        {
          updatePro->start(250);
        }
        updateTime = 0;
        on_continueCreateNew();
}
