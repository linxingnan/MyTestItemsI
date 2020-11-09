#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QToolButton>
#include <QComboBox>
#include "udpserver.h"
#include <QThread>
#include "handleredata.h"
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "diamodequipment.h"
#include "dialogruncheck.h"
#include "diatestchat.h"
#include "dialogfindall.h"
#include <QMap>
#include "DiaLogSiemens/dialogsiemenssetparameter.h"
#include "DiaLogSiemens/dialogsiemensruncheck.h"
#include "helpApi/mycombox.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initAction();
    void AddDropDownToolbox();//主界面 工具栏添加下拉按钮

    void initUdpChat();

    void initHandleData();

    void initModelData();
    void initModelHead();

    QStringList getLocalNetIp();
signals:
    void finishAll();
    void findEquSend();//寻找设备
    void findEquAllSend();
    void changeIpDataHandle(QStringList list);//ip修改
    void dataNeedToChange(QString ipAddr,quint16 port);//数据修改前置发送
    void dataDownload(QString ip,QList<int> listCom, QStringList listNetData);
    void dataNeedCheck(QString ipAddr,quint16 port);
    void dataDnotCheck();

    void getModbusMapData(QString ipAddr, quint16 port);

    void modbusMapDataSend(QString list,QString ipAddr, quint16 port);
    void siemensNetDataNeedDown(QList<int> vecInt, QVector<QString> vecStr,QString ipAddr, quint16 port);
private slots:

    void on_currentChanged(const QModelIndex &current, const QModelIndex &previous);
    void on_actionTriggered();
    void on_addEquMessage(QStringList list);
    void on_parameterMod(QList<int> list,QStringList netData);
    void on_parModTimeout();
    void on_checkTimeOut();
    void on_checkDataHandleOk(QStringList dataList);

private:
    Ui::MainWindow *ui;
private:
//    //品牌名称保存
//    QMap<int, QString> bandName;
    //工具栏
    //网卡选择
    MyCombox *chooseNet;
    //搜索设备
    QAction actFindFast;
    QAction actFindAll;
    QAction actFindDef;

    DialogFindAll *digFindAll = nullptr;

    QToolButton *findButton;

    //设置ip地址
    QAction actSetIp;
    //修改设备参数
    QAction actSetEquData;
    //设备运行诊断
    QAction actCheckEqu;
    //设备配置主页
    QAction actSetMainPage;
    //通讯测试
    QAction actChat;
    //更新
    QAction actUpdate;

    //udp通信线程
    UdpServer *udpChat;
    QThread *threadUdp;

    //处理数据
    HandleReData *handleData;
    QThread *threadHandleData;

    //tabview上显示的数据
    QStandardItemModel  *theModel;//数据模型
    QItemSelectionModel *theSelection;//Item选择模型

    //修改参数界面-三菱
    DiaModEquipment *digModData;
    bool haveDataMod;

    QTimer timeParameterMod;
    uint8_t delayNum;

    //运行诊断-三菱
    DialogRunCheck *digCheck;
    QString checkIpAddr;
    QTimer timeCheck;

    //测试按钮
    QAction actTest;

    //修改设备参数-西门子
    DialogSiemensSetParameter *digSieModData;

    int brandNum;
};
#endif // MAINWINDOW_H
