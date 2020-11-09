#ifndef DIATESTCHAT_H
#define DIATESTCHAT_H
//通讯测试页面
#include <QDialog>
#include <QSpinBox>
#include <QThread>
#include "update/tcpthread.h"
#include <QTime>
#include <QElapsedTimer>
namespace Ui {
class DiaTestChat;
}

class DiaTestChat : public QDialog
{
    Q_OBJECT

public:
    explicit DiaTestChat(QWidget *parent = nullptr);
    ~DiaTestChat();
    QString getIPString();

    void setEquData(QStringList data);

private slots:
    void onLinkModbus();
    void on_cBoxPlcName_currentIndexChanged(int index);

    void on_puBSend_clicked();

    void on_spBoxStart_valueChanged(int arg1);

    void on_puBPositioning_clicked();

//    void on_cBoxLoopSend_stateChanged(int arg1);

private:
    Ui::DiaTestChat *ui;
    QList<QSpinBox *> ipSpinBox;



    struct sendData
    {
        int sendTimes;
        int table;
        int startAddr;
        int numberOfEntries;
    };

    struct sendData readData;

    int isReset = 0;

    TcpThread *tcpSocket;
    QThread *threadTcp;

    QElapsedTimer timeCount;

    QString checkSendStr;
    QString checkReStr;

private:
    void initUi();
    void initModbusTcpClient();

    void viewSendData();

    void cBoxDataChange();
protected:
    bool eventFilter(QObject *object, QEvent *event);
signals:
    void newTcp(QString address, quint16 port, int num = 0, QStandardItemModel *theModel = nullptr);
    void disconnectTcp();
    void sendData(QString data);

};

#endif // DIATESTCHAT_H
