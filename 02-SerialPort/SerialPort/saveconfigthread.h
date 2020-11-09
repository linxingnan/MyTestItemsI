#ifndef SAVECONFIGTHREAD_H
#define SAVECONFIGTHREAD_H

#include <QObject>
#include <QSettings>
class SaveConfigThread : public QObject
{
    Q_OBJECT
public:
    explicit SaveConfigThread(QObject *parent = nullptr);
    ~SaveConfigThread();
    void WriteInit(QString key, QString value);
    void ReadInit(QString key, QString &value);
signals:
private:
    QSettings *saveConfig;
};

#endif // SAVECONFIGTHREAD_H
