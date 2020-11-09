#include "serialthread.h"
#include <QDebug>
#include <QThread>
SerialThread::SerialThread(QObject *parent) : QObject(parent)
{
    initSerial();
}

SerialThread::~SerialThread()
{
    if(m_serial!=nullptr)
    {
        delete m_serial;
    }
}

void SerialThread::initSerial()
{
    m_serial = new QSerialPort(/*this*/);

    getPortNum();

//    connect(m_serial, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error), this, &SerialThread::handleSerialError);
    connect(m_serial, &QSerialPort::readyRead, this, &SerialThread::receiveData);
}

bool SerialThread::isOpenPort()
{
    if(m_serial->isOpen())
        return true;
    else
        return false;
}

void SerialThread::closePort()
{
    m_serial->close();
}

void SerialThread::getPortNum()
{
    if(!CommPortList.isEmpty())
        CommPortList.clear();
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        CommPortList.append(info.portName());
    }
    emit getcomPortList(CommPortList);
}

void SerialThread::handleSerialError(QSerialPort::SerialPortError error)
{
    if(error == QSerialPort::ResourceError)
    {
        emit linkError(error);
    }
}

bool SerialThread::openSerial(QString strPortNum, int nBaudRate, int nParityType, int nDataBits, int nStopBits, int nFlowCtrl)
{
    m_serial->setPortName(strPortNum);

    m_serial->setBaudRate(nBaudRate);

    switch (nParityType)
    {
    case 0:
        m_serial->setParity(QSerialPort::NoParity);
        break;
    case 1:
        m_serial->setParity(QSerialPort::OddParity);
        break;
    case 2:
        m_serial->setParity(QSerialPort::EvenParity);
        break;
    case 3:
        m_serial->setParity(QSerialPort::MarkParity);
        break;
    case 4:
        m_serial->setParity(QSerialPort::SpaceParity);
        break;
    default:
        m_serial->setParity(QSerialPort::UnknownParity);
        break;
    }

    switch (nDataBits)
    {
    case 5:
        m_serial->setDataBits(QSerialPort::Data5);
        break;
    case 6:
        m_serial->setDataBits(QSerialPort::Data6);
        break;
    case 7:
        m_serial->setDataBits(QSerialPort::Data7);
        break;
    case 8:
        m_serial->setDataBits(QSerialPort::Data8);
        break;
    default:
        m_serial->setDataBits(QSerialPort::UnknownDataBits);
        break;
    }

    switch (nStopBits)
    {
    case 0:
        m_serial->setStopBits(QSerialPort::OneStop);
        break;
    case 1:
        m_serial->setStopBits(QSerialPort::OneAndHalfStop);
        break;
    case 2:
        m_serial->setStopBits(QSerialPort::TwoStop);
        break;
    default:
        m_serial->setStopBits(QSerialPort::UnknownStopBits);
        break;
    }

    switch (nFlowCtrl)
    {
    case 0:
        m_serial->setFlowControl(QSerialPort::NoFlowControl);
        break;
    case 1:
        m_serial->setFlowControl(QSerialPort::HardwareControl);
        break;
    case 2:
        m_serial->setFlowControl(QSerialPort::SoftwareControl);
        break;
    default:
        m_serial->setFlowControl(QSerialPort::UnknownFlowControl);
        break;
    }

    if( !m_serial->open((QIODevice::ReadWrite)) )//打开失败
    {
        return false;
    }

    m_serial->setReadBufferSize(SERIAL_READ_BUFF);
    return true;
}

void SerialThread::receiveData()
{
    m_serial->waitForReadyRead(10);
    QByteArray bytes = m_serial->readAll();

    emit receData(bytes,bytes.length());
}

void SerialThread::writeData(QByteArray byteArray)
{
    m_serial->write(byteArray);
}

