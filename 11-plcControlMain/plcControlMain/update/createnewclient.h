#ifndef CREATENEWCLIENT_H
#define CREATENEWCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QThread>
#include <QIODevice>
#include "tcpthread.h"
#include <QStandardItem>
class TcpThread;
class CreateNewClient : public QObject
{
    Q_OBJECT
public:
    friend class TcpThread;
    explicit CreateNewClient(QObject *parent = nullptr);
    ~CreateNewClient();
    void newClient(QString ipAddr, quint16 port, int proGressItem, QStandardItemModel *theModel);
    void allWriteData(QString path);
private slots:
    void connectSuccess(TcpThread *socket);
//    void delConnectTcp();
    void cleanThread();
private:

    QList<TcpThread *> listTcpSend;
    QList<QThread *> listThread;
    QMap<QThread *,TcpThread *> mapThread;

    QMetaObject::Connection dis1, dis2,dis3,dis4;
    QByteArray slotData;
    int sendNum;

    QTimer *threadSurTime;
signals:
    void newTcp(QString address, quint16 port,int proGressItem,QStandardItemModel *theModel);
    void connectSave(TcpThread *socket);
    void haveDataWrite(QString path);
    void delConnect();
};

#endif // CREATENEWCLIENT_H
