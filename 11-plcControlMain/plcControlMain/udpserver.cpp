#include "udpserver.h"
#include <QDebug>
#include "helpApi/qhelpapi.h"
#include <QThread>
UdpServer::UdpServer(QObject *parent) : QObject(parent),autoClose(true),sendLocalIpaddr(QHostAddress::AnyIPv4)
{
    initUdpServer();
    timeDisUdp = new QTimer(this);
    timeFindAll = new QTimer(this);
    connect(timeDisUdp, &QTimer::timeout, this,&UdpServer::disConnectUdp);
    connect(timeFindAll, &QTimer::timeout, this,[=]()
    {
        static int i = 0;
        i++;
        if(i<4)
        {
            QString dataUdpSend = "00 ff 00 08 00 00 67 00 ff 01";
            sendData(broadcastIpaddr,defaultPort,dataUdpSend);
        }
        else if(i == 6)
        {
            emit findAllTimeOut();
            disConnectUdp();
            i = 0;
            timeFindAll->stop();

        }
    });

}

UdpServer::~UdpServer()
{
    qDebug()<<"~UdpServer"<<QThread::currentThread();

    if(udpSocket->isOpen())
        udpSocket->abort();
}

void UdpServer::initUdpServer()
{
    udpSocket = new QUdpSocket(this);
    connect(udpSocket, &QUdpSocket::readyRead, this, &UdpServer::readData);
}

void UdpServer::findEqu()
{
    QString dataUdpSend = "00 ff 00 08 00 00 67 00 ff 01";
    defaultSend(dataUdpSend);
}

void UdpServer::findEquAll()
{
    autoClose = false;
    qDebug()<<"findAll";
    if(!findLinkUdp())
    {
        qDebug()<<"Link ERROR";
        return;
    }
    timeFindAll->start(1000);
}

void UdpServer::dataNeedChange(QString ip,quint16 port)
{
    QString dataUdpSend = "00 ff 00 08 00 00 52 00";
    oneSend(dataUdpSend,ip,port);
}

void UdpServer::dataCheck(QString ip,quint16 port)
{
    autoClose = false;

    if(!udpSocket->isOpen())
    {
        qDebug()<<"no open";
        if(!findLinkUdp())
        {
            qDebug()<<"Link ERROR";

            return;
        }
    }
    QString data = "00 ff 00 08 00 00 44 00";
    sendData(ip,port,data);
}

void UdpServer::defaultSend(QString data,QString ipAddr,quint16 port)
{
    if(!findLinkUdp())
    {
        qDebug()<<"Link ERROR";
        return;
    }
    sendData(ipAddr,port,data);
//    haveDataSendToAll(data);
    qDebug()<<"wait";
    timeDisUdp->start(2000);
}

void UdpServer::oneSend(QString data,QString ipAddr,quint16 port)
{
    if(!findLinkUdp())
    {
        qDebug()<<"Link ERROR";
        return;
    }
    sendData(ipAddr,port,data);
    timeDisUdp->start(1500);
}


void UdpServer::sendData(const QString &ip, quint16 port, const QString &data)
{
    QByteArray buffer = QHelpApi::hexStrToByteArray(data);

    udpSocket->writeDatagram(buffer, QHostAddress(ip), port);

    QString str = QString("[%1:%2] %3").arg(ip).arg(port).arg(data);
    qDebug()<<"发送数据"<<str;
}

void UdpServer::readData()
{
    qDebug()<<"readData";
    QHostAddress host;
    quint16 port;
    QByteArray data;
    QString buffer;

    while (udpSocket->hasPendingDatagrams())
    {
        if(autoClose)  //除了设备运行诊断和全局搜索外其他触发都需要自动关闭udp
        {
            if(timeDisUdp->isActive())
                timeDisUdp->stop();
        }
        data.resize(udpSocket->pendingDatagramSize());
        udpSocket->readDatagram(data.data(), data.size(), &host, &port);


        buffer = QHelpApi::byteArrayToHexStr(data);


        QString ip = host.toString();
        if (ip.isEmpty()) {
            continue;
        }

        QString str = QString("[%1:%2] %3").arg(ip).arg(port).arg(buffer);
        emit reData(buffer);
        qDebug()<<"读取数据data  "<<str;
        if(autoClose)
            timeDisUdp->start(1000);
    }
}

void UdpServer::disConnectUdp()
{
    qDebug()<<"link close";
    udpSocket->abort();
    if(timeDisUdp->isActive())
        timeDisUdp->stop();
    qDebug()<<"disConnectUdp"<<QThread::currentThread();
    autoClose = true;
}

void UdpServer::allStop()
{
    qDebug()<<"------------allStop-------------------"<<QThread::currentThread();
    if(timeDisUdp->isActive())
        timeDisUdp->stop();
    if(timeFindAll->isActive())
        timeDisUdp->stop();
    if(udpSocket->isOpen())
        udpSocket->abort();
}

void UdpServer::setLocalIpaddr(QString ipAddr)
{
    qDebug()<<"setLocalIpaddr "<<ipAddr;
    sendLocalIpaddr = QHostAddress(ipAddr);
}

void UdpServer::dataModbusGet(QString ipAddr, quint16 port)
{
    QString data = "00 ff 00 08 00 00 52 01";
    oneSend(data,ipAddr,port);
}

bool UdpServer::findLinkUdp()
{
    udpSocket->abort();
    for(quint16 port = 5000; port<5005;port++)
    {
        if(udpSocket->bind(sendLocalIpaddr, port))
        {
            qDebug()<<"port"<<port;
            return true;
        }

    }
    return false;
}
