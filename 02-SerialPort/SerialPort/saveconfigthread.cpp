#include "saveconfigthread.h"

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

void SaveConfigThread::WriteInit(QString key, QString value)
{
    QString path = "config.ini";

    //将信息写入配置文件
    saveConfig->beginGroup("config");
    saveConfig->setValue(key, value);
    saveConfig->endGroup();
}

void SaveConfigThread::ReadInit(QString key, QString &value)
{
    value = QString("");

    //读取配置信息
    value = saveConfig->value(QString("config/") + key).toString();
}
