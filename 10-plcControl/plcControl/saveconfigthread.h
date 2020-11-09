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
    void WriteInit(const QString &key, const QString &value);
    void ReadInit(QString key);

signals:
    void getConfig(QString value);

private:
    QSettings *saveConfig;
};

#endif // SAVECONFIGTHREAD_H
