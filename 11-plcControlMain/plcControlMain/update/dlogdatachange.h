#ifndef DLOGDATACHANGE_H
#define DLOGDATACHANGE_H

#include <QDialog>

namespace Ui {
class DLogDataChange;
}

class DLogDataChange : public QDialog
{
    Q_OBJECT

public:
    explicit DLogDataChange(QWidget *parent = nullptr);
    ~DLogDataChange();
    void setIpAndPort(int ipOne, int ipTwo, int ipThree, int ipFour,int updatePort);

    QString getIp();
    void getPort(int &updatePort);
private:
    Ui::DLogDataChange *ui;
};

#endif // DLOGDATACHANGE_H
