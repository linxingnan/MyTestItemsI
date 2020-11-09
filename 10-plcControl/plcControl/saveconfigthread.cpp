#include "saveconfigthread.h"
#include <QThread>
#include <QDebug>
SaveConfigThread::SaveConfigThread(QObject *parent) : QObject(parent)
{
    QString path = "config.ini";

    //创建配置文件操作对象
    saveConfig = new QSettings(path, QSettings::IniFormat);
}

SaveConfigThread::~SaveConfigThread()
{
    if(saveConfig!=nullptr)
    {
        delete saveConfig;
    }
}

void SaveConfigThread::WriteInit(const QString &key, const QString &value)
{
    QString path = "config.ini";

    //将信息写入配置文件
    saveConfig->beginGroup("config");
    saveConfig->setValue(key, value);
    saveConfig->endGroup();

}

void SaveConfigThread::ReadInit(QString key)
{
    QString value = QString("");

    //读取配置信息
    value = saveConfig->value(QString("config/") + key).toString();

    emit getConfig(value);
}

