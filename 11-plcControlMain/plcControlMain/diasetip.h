#ifndef DIASETIP_H
#define DIASETIP_H
//修改IP页面
#include <QDialog>

namespace Ui {
class DiaSetIp;
}

class DiaSetIp : public QDialog
{
    Q_OBJECT

public:
    explicit DiaSetIp(QWidget *parent = nullptr);
    ~DiaSetIp();
    void setData(QString serialNumberStr, QString ipAddr, QString subnetMask, QString gateway);
    void getData(QStringList &list);
private:
    Ui::DiaSetIp *ui;
};

#endif // DIASETIP_H
