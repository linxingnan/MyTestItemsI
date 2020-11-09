#ifndef WINDOWUPDATE_H
#define WINDOWUPDATE_H
//更新固件页面
#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "update/dlogdatachange.h"
#include "update/progressbardelegate.h"
#include "update/createnewclient.h"
#include <QLabel>
#include "update/saveconfigthread.h"
#define     FixedColumnCount    2

namespace Ui {
class WindowUpdate;
}

class WindowUpdate : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowUpdate(QWidget *parent = nullptr);
    ~WindowUpdate();

    void setEquIp(QStringList list);

private:
    Ui::WindowUpdate *ui;

    QStandardItemModel  *theModel;//数据模型
    QItemSelectionModel *theSelection;//Item选择模型

    ProgressBarDelegate *m_progressBarDelegate;//进度条代理
    QVector<int> proGressItem;//保存需要进度条移动的 行数 row

    CreateNewClient *createNewTcpClient;//线程里创建客户端线程
    QThread *newTcpThread;

    QVector<QString> ipVec;
    QVector<quint16> portVec;

    QString filePath;//文件路径
    QString findPath;//上一次打开文件的路径
    //用于状态栏的信息显示
    QLabel  *LabCurFile;  //当前文件
    QLabel  *LabCellPos;//是否打开失败

    QTimer *updatePro;//更新进度条定时器
    int updateTime;

    //保存配置
    SaveConfigThread *saveConfig; //保存配置
    QThread *saveThread;

    QString ipAddr;
    quint16 serverPort;

private:
    void initModelData();
    void initModelHead();
    void initTestData();

    void initCreateNewTcpLink();

    //保存配置
    void initSaveConfig();  // 保存配置初始化
private slots:
    void on_editModelData(const QModelIndex &index);

    void on_currentChanged(const QModelIndex &current, const QModelIndex &previous);

    void on_actNew_triggered();

    void on_readSendData();

    void on_createNew();

    void on_continueCreateNew();

    void on_actOpenFile_triggered();

    void on_updateProgress();

    void on_actDel_triggered();

    void on_actLink_triggered();

signals:
    void connectServer(const QString address, quint16 port,int proGressItem,QStandardItemModel *theModel);
    void sendToAllUpdate(QString path);
    void needCreateNewServer();

    void getFilePath(QString key);
    void writeConfig(QString key, QString value);
};

#endif // WINDOWUPDATE_H
