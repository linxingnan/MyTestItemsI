#ifndef TCPTHREAD_H
#define TCPTHREAD_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <QTimer>
#include <QFile>
#include <QStandardItem>
class TcpThread : public QObject
{
    Q_OBJECT
public:
    explicit TcpThread(QObject *parent = nullptr);
    ~TcpThread();
    void initTcp();

    bool isOpen();
    void connectToServer(const QString address, quint16 port, int proGressItem, QStandardItemModel *theModel);
    void closeConnect();

    void writeData(QString path);
private:

//    void writeData(QByteArray byteArray);
private slots:
    void getData();
    void time_sendFile(void);
    //写入数量
    void bytesWrittenSum(qint64 bytes);
signals:
    void connectSuccess();
    void disConnect();
    void receData(QByteArray data);
    void writeByteNum(qint64 bytes);
    void fromMainData(QByteArray byteArray);

    void finishDataget();
private:
    QTcpSocket *tcpSocketSend;//发送文件
    QTimer *timer_sendFile; //定时器
    QFile *sendData;
    qint64 fileSize;
    qint64 allSize;
    qint64 loadSize;   //每次发送数据的大小
    qint64 bytesWritten;  //已经发送数据大小

    int sendDataPro;
    QStandardItemModel *modelItem;
    QTimer *updateMainPro;//更新主线程进度条
};

#endif // TCPTHREAD_H
