#include "createnewclient.h"
#include <QHostAddress>
#include <QDebug>

CreateNewClient::CreateNewClient(QObject *parent) : QObject(parent)
{
    sendNum = 0;
    threadSurTime.start(1000);
    connect(&threadSurTime, &QTimer::timeout, this, &CreateNewClient::cleanThread);
}

CreateNewClient::~CreateNewClient()
{
    for(int i = 0; i<listTcpSend.size();i++)
    {
        if(listTcpSend.at(i)->isOpen())
        {
            listTcpSend.at(i)->closeConnect();
        }
    }
    for(int i = 0; i<listThread.size();i++)
    {
        if(listThread.at(i)->isRunning())
        {
            listThread.at(i)->quit();
            listThread.at(i)->wait();
        }
    }
}

void CreateNewClient::newClient(QString ipAddr, quint16 port,int proGressItem,QStandardItemModel *theModel)
{
//    qDebug() << "newClient " <<"threadID : "<<QThread::currentThread();

    TcpThread *tcpSocket = new TcpThread();
    QThread *sendThread = new QThread(this);

    listThread.append(sendThread);

    tcpSocket->moveToThread(sendThread);
    sendThread->start();
    mapThread.insert(sendThread,tcpSocket);

    dis1 = connect(this, &CreateNewClient::newTcp, tcpSocket, &TcpThread::connectToServer);
    dis2 = connect(tcpSocket, &TcpThread::connectSuccess, this, [=]()
    {
        emit connectSave(tcpSocket);
    });
    dis3 = connect(this, &CreateNewClient::connectSave, this, &CreateNewClient::connectSuccess);
//    connect(this, &CreateNewClient::haveDataWrite, tcpSocket, &TcpThread::serverWrite);
    emit newTcp(ipAddr,port,proGressItem,theModel);
}

void CreateNewClient::allWriteData(QString path)
{  
//    if(listTcpSend.size()!=0)
//    {
//        QMetaObject::Connection dis =connect(this, &CreateNewClient::haveDataWrite, listTcpSend.first(), &TcpThread::writeData);
//        emit haveDataWrite(str,fileSize);
//        disconnect(dis);

////        dis4 = connect(listTcpSend.at(0), &TcpThread::finishDataget, this,&CreateNewClient::delConnectTcp);
//    }


//    for(int i = 0; i<listTcpSend.size(); i++)
//    {
//        QMetaObject::Connection dis =connect(this, &CreateNewClient::haveDataWrite, listTcpSend.at(i), &TcpThread::writeData);
//        emit haveDataWrite(path);
//        disconnect(dis);
//    }
    QMapIterator<QThread *,TcpThread *> i(mapThread);
    while (i.hasNext())
    {
        i.next();
        if(i.key()->isRunning())
        {
            if(i.value()->isOpen() == true)
            {
                QMetaObject::Connection dis =connect(this, &CreateNewClient::haveDataWrite, i.value(), &TcpThread::writeData);
                emit haveDataWrite(path);
                disconnect(dis);
            }
        }
    }

}

void CreateNewClient::connectSuccess(TcpThread *socket)
{
//    qDebug()<<"connectSuccess";
    listTcpSend.append(socket);
    disconnect(dis1);
    disconnect(dis2);
    disconnect(dis3);
}

void CreateNewClient::cleanThread()
{
    QMapIterator<QThread *,TcpThread *> i(mapThread);
//    QMap<QThread *,TcpThread *>::const_iterator i = mapThread.constBegin();
    while (i.hasNext())
    {
        i.next();
        if(i.key()->isRunning())
        {
            if(i.value()->isOpen() == false)
            {
                i.key()->quit();
                i.key()->wait();
                mapThread.remove(i.key());
            }
        }
    }
}

//void CreateNewClient::delConnectTcp()//删除第一个tcp
//{
//    disconnect(dis4);
//    QMetaObject::Connection dis =connect(this, &CreateNewClient::delConnect, listTcpSend.takeFirst(), &TcpThread::closeConnect);
//    emit delConnect();
//    disconnect(dis);
//    if(listTcpSend.size()!=0)
//    {
//        allWriteData(slotData);
//    }

////    if(listThread.first()->isRunning())
////    {
////        listThread.first()->quit();
////        listThread.first()->wait();
////        listThread.removeFirst();
////    }
//}
