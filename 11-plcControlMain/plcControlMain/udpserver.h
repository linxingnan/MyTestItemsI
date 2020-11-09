#ifndef UDPSERVER_H
#define UDPSERVER_H
//udp通信
#include <QObject>
#include <QUdpSocket>
#include <QTimer>

#define UDP_SEND_PORT 25388
const QString broadcastIpaddr = "255.255.255.255";
const quint16 defaultPort = 25388;
const quint16 siemensPort = 25385;

class UdpServer : public QObject
{
    Q_OBJECT
public:
    explicit UdpServer(QObject *parent = nullptr);
    ~UdpServer();
    void initUdpServer();
    void findEqu();
    void findEquAll();
    void dataNeedChange(QString ip, quint16 port);
    void dataCheck(QString ip, quint16 port);

    void defaultSend(QString data,QString ipAddr = broadcastIpaddr,quint16 port = defaultPort);
    void oneSend(QString data,QString ipAddr,quint16 port);
//    void haveDataSendToAll(QString &data,QString ipAddr = broadcastIpaddr,quint16 port = defaultPort);
//    void haveDataSendToOne(QString &data,QString &ipAddr, quint16 port = 25388);
    void sendData(const QString &ip, quint16 port, const QString &data);

    void disConnectUdp();
    void allStop();

    void setLocalIpaddr(QString ipAddr);

    void dataModbusGet(QString ipAddr,quint16 port);

signals:
    void reData(QString buffer);
    void findAllTimeOut();
    void clearThread();
private slots:
    void readData();
private:
    bool findLinkUdp();
private:
    QUdpSocket *udpSocket;
    QTimer *timeDisUdp;
    bool autoClose;

    QTimer *timeFindAll;

    QHostAddress sendLocalIpaddr;

};

#endif // UDPSERVER_H
