#include "update/createnewclient.h"
#include <QHostAddress>
#include <QDebug>

CreateNewClient::CreateNewClient(QObject *parent) : QObject(parent)
{
    sendNum = 0;
    threadSurTime = new QTimer(this);
    connect(threadSurTime, &QTimer::timeout, this, &CreateNewClient::cleanThread);
}

CreateNewClient::~CreateNewClient()
{
    qDebug()<<"~CreateNewClient"<<QThread::currentThread();
//    for(int i = 0; i<listTcpSend.size();i++)
//    {
//        if(listTcpSend.at(i)->isOpen())
//        {
//            listTcpSend.at(i)->closeConnect();
//        }
//        TcpThread * temp = listTcpSend.at(i);
//        delete temp;
//        temp = nullptr;

//    }
//    for(int i = 0; i<listThread.size();i++)
//    {
//        if(listThread.at(i)->isRunning())
//        {
//            listThread.at(i)->quit();
//            listThread.at(i)->wait();
//        }
//    }

    QMapIterator<QThread *,TcpThread *> i(mapThread);
    while (i.hasNext())
    {
        i.next();
//        if(i.key()->isRunning())
//        {
            QThread *tempThread = i.key();
            TcpThread *tempTcp = i.value();
            QMetaObject::Connection disTcp = connect( tempThread, SIGNAL(finished()), tempTcp, SLOT(deleteLater()) );
            QMetaObject::Connection disThread = connect( tempThread, SIGNAL(finished()), tempThread, SLOT(deleteLater()) );
            if(tempThread->isRunning())
            {
                tempThread->quit();
                tempThread->wait();
            }
            disconnect(disTcp);
            disconnect(disThread);

//        }
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
    qDebug()<<"allWriteData";
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
    if(!threadSurTime->isActive())
    {
        qDebug()<<"start";
        threadSurTime->start(100);
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
    if(mapThread.count() == 0)
        threadSurTime->stop();
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

                TcpThread *tempTcp = i.value();
                delete tempTcp;
                tempTcp = nullptr;

                mapThread.remove(i.key());
                qDebug()<<"move";
            }
        }
    }
    qDebug()<<"map"<<mapThread.count();
}
