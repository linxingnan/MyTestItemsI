#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "dlogdatachange.h"
#include <QTcpSocket>
#include <QTcpServer>
#include <QFile>
#include <QTimer>
#include <QThread>
#include "tcpthread.h"
#include "createnewclient.h"
#include <QTimer>
#include <QLabel>
#include "progressbardelegate.h"
#include "saveconfigthread.h"

#define     FixedColumnCount    3

class CreateNewClient;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void connectServer(const QString address, quint16 port,int proGressItem,QStandardItemModel *theModel);
    void sendToAllUpdate(QString path);
    void needCreateNewServer();

    void getFilePath(QString key);
    void writeConfig(QString key, QString value);
public:
    friend class CreateNewClient;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initModelData();
    void initModelHead();
    void initTestData();

    void initCreateNewTcpLink();
    //保存配置
    void initSaveConfig();  // 保存配置初始化

private slots:
    void on_currentChanged(const QModelIndex &current, const QModelIndex &previous);

    void on_actNew_triggered();

    void on_editModelData(const QModelIndex &index);

    void on_actLink_triggered();

    void on_readSendData();

    void on_createNew();

    void on_continueCreateNew();

    void on_actOpenFile_triggered();

    void on_updateProgress();

    void on_actDel_triggered();

private:
    Ui::MainWindow *ui;
private:
    QStandardItemModel  *theModel;//数据模型
    QItemSelectionModel *theSelection;//Item选择模型

    CreateNewClient *createNewTcpClient;//线程里创建客户端线程
    QThread *newTcpThread;

    QTimer *updatePro;//更新进度条定时器
    int updateTime;

    QString ipAddr;
    quint16 serverPort;

    QVector<QString> ipVec;
    QVector<quint16> portVec;

    QString findPath;//上一次打开文件的路径
    QString filePath;//文件路径

    //用于状态栏的信息显示
    QLabel  *LabCurFile;  //当前文件
    QLabel  *LabCellPos;//是否打开失败

    ProgressBarDelegate *m_progressBarDelegate;//进度条代理
    QVector<int> proGressItem;//保存需要进度条移动的 行数 row

    //保存配置
    SaveConfigThread *saveConfig; //保存配置
    QThread *saveThread;
};
#endif // MAINWINDOW_H
