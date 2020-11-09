#ifndef MAINDATA_H
#define MAINDATA_H

#include <QMainWindow>
#include <QThread>
#include <QLabel>
#include "serialthread.h"
#include "helpApi/mycombobox.h"
#include "helpApi/qhelper.h"
#include <QTextEdit>
#include "saveconfigthread.h"
QT_BEGIN_NAMESPACE
namespace Ui { class mainData; }
QT_END_NAMESPACE

#define SERIAL_NUM_LEN 4
#define INPUT_MAX_LEN  2

class mainData : public QMainWindow
{
    Q_OBJECT

public:
    mainData(QWidget *parent = nullptr);
    ~mainData();

    void InitStatusBar();   // 初始化状态栏
    void initSaveConfig();  // 保存配置初始化
    void closeSvaeThread(); //关闭保存数据线程
    void updTxDataLength(uint TxLength); //接收字符长度显示
    void updRxDataLength(uint RxLength); //发送字符长度显示

    void clearButton();//两个清除按钮

    void updateComPort(QStringList CommPortList);   //更新combox串口号
    void initSerialPort();  //初始化串口
    void checkStateChange();    //checkbox变更  16进制显示和数据对比
    void closeSerialThread();   //关闭串口线程

    void openSerialPortParam();//串口打开
    void closeSerialPort(); //关闭串口

    void handleReData(QByteArray data, int length); //处理接收数据
    void sendData();    //发送数据


private:
    Ui::mainData *ui;

    SerialThread *serialPort;   //串口
    QThread *serialThread;

    SaveConfigThread *saveConfig; //保存配置
    QThread *saveThread;
    /* 状态栏控件 */
//    QLabel *m_SerStateLbl;        // 串口状态
    QLabel *m_RecvNumLbl;         // 接收字节数
    QLabel *m_SendNumLbl;         // 发送字节数

    uint m_nRecvNum;              // 接收字节数
    uint m_nSendNum;              // 发送字节数

    QTextEdit *vewReData;         //显示数据窗口
};
#endif // MAINDATA_H
