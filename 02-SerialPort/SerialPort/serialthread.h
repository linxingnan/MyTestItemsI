#ifndef SERIALTHREAD_H
#define SERIALTHREAD_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

const int SERIAL_READ_BUFF = 1200;
class SerialThread : public QObject
{
    Q_OBJECT
public:
    explicit SerialThread(QObject *parent = nullptr);
    ~SerialThread();

    void initSerial();
    bool isOpenPort();
    void closePort();
    void getPortNum();
    void handleSerialError(QSerialPort::SerialPortError error);
    bool openSerial(QString strPortNum, int nBaudRate,int nParityType,int nDataBits,int nStopBits,int nFlowCtrl);
    void receiveData();
    void writeData(QByteArray byteArray);
private:
    QSerialPort *m_serial;        // 串口通信类对象
    QStringList CommPortList;     //串口号字符串
signals:
    void getcomPortList(QStringList CommPortList);
    void linkError(QSerialPort::SerialPortError error);
    void receData(QByteArray data,int length);
};

#endif // SERIALTHREAD_H
