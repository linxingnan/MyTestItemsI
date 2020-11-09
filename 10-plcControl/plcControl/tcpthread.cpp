#include "tcpthread.h"
#include <QThread>
TcpThread::TcpThread(QObject *parent) : QObject(parent)
{
    loadSize = 1046;
    bytesWritten = 0;
    initTcp();
}

TcpThread::~TcpThread()
{
    if(tcpSocketSend!=nullptr)
        delete tcpSocketSend;
}

void TcpThread::initTcp()
{
    tcpSocketSend = new QTcpSocket(this);
    timer_sendFile = new QTimer(this);
    connect(tcpSocketSend, &QTcpSocket::connected, this, [=]()
    {
        emit connectSuccess();
    });
    connect(tcpSocketSend, &QTcpSocket::readyRead, this, &TcpThread::getData);
    connect(tcpSocketSend, &QTcpSocket::disconnected, this, [=]()
    {
        emit disConnect();
    });
    connect(tcpSocketSend, static_cast<void (QTcpSocket::*)(qint64)>(&QTcpSocket::bytesWritten) , this, [=](qint64 byteNum)
    {
        emit writeByteNum(byteNum);
    });

    connect(timer_sendFile, &QTimer::timeout, this, &TcpThread::time_sendFile);
    connect(tcpSocketSend, &QTcpSocket::bytesWritten, this, &TcpThread::bytesWrittenSum);
}


void TcpThread::writeData(QString path)
{   
    qDebug()<<"peerPort"<<tcpSocketSend->peerPort();

    sendData = new QFile(path);
    if(!sendData->open(QFile::ReadOnly))
    {
        qDebug() << "open file error!";
        return;
    }
    fileSize = sendData->size();
    allSize = sendData->size();
    QString str = QString("%1").arg(fileSize,8,16,QLatin1Char('0'));
    qDebug()<<str;
    tcpSocketSend->write(str.toUtf8());//发送文件的大小  包头

    timer_sendFile->start(100);

}

//只做延时发送文件
void TcpThread::time_sendFile(void)
{
    qDebug()<<"in  fileSize  "<<allSize;
    if(fileSize>0)
    {
        QByteArray outBlock = sendData->read(qMin(fileSize,loadSize));//数据缓冲区，即存放每次要发送的数据
        qDebug()<<"outBlock "<<outBlock.size();
        if(outBlock.size() == 0)
        {
            timer_sendFile->stop();
            sendData->close(); //如果没有发送任何数据，则关闭文件
            tcpSocketSend->disconnectFromHost();
        }
        fileSize -= (int)tcpSocketSend->write(outBlock);
//        sendDataPro->setText(QString("%1").arg(outBlock.size()/(100.0/allSize)));
        outBlock.resize(0);
    }
    else
    {
        timer_sendFile->stop();
        sendData->close(); //如果没有发送任何数据，则关闭文件
        tcpSocketSend->disconnectFromHost();
    }
}

void TcpThread::bytesWrittenSum(qint64 bytes)
{
    bytesWritten += (int)bytes;
    if(fileSize>0)
    {
//        qDebug()<<bytesWritten;
        int num = bytesWritten*(100.0/allSize);
        QStandardItem *aItem;
        aItem = new QStandardItem(QString("%1").arg(num));
        qDebug()<<"update "<<num<<" sendDataPro "<<sendDataPro;
        modelItem->setItem(sendDataPro,4,aItem);

    }
    else
    {
        QStandardItem *aItem;
        aItem = new QStandardItem(QString("%1").arg(100));
        modelItem->setItem(sendDataPro,4,aItem);
        qDebug()<<"send data ok";
    }
//    emit modelItem->layoutChanged();
}

bool TcpThread::isOpen()
{
    return tcpSocketSend->isOpen();
}

void TcpThread::connectToServer(const QString address, quint16 port,int proGressItem,QStandardItemModel *theModel)
{
    qDebug() << "connectToServer " <<"threadID : "<<QThread::currentThread();
    qDebug()<<address<<" "<<port;
    tcpSocketSend->abort();
    tcpSocketSend->connectToHost(QHostAddress(address),port);
    sendDataPro = proGressItem;
    modelItem = theModel;
}

void TcpThread::closeConnect()
{
    tcpSocketSend->disconnectFromHost();

}

void TcpThread::getData()
{
    QByteArray data = tcpSocketSend->readAll();
    emit receData(data);
}
