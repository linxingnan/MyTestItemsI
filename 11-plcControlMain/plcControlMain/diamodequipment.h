#ifndef DIAMODEQUIPMENT_H
#define DIAMODEQUIPMENT_H
//修改设备参数页面
#include <QDialog>

namespace Ui {
class DiaModEquipment;
}

class DiaModEquipment : public QDialog
{
    Q_OBJECT

public:
    explicit DiaModEquipment(QWidget *parent = nullptr);
    ~DiaModEquipment();
    void setBaseData(QStringList list);
    void setComBoxData(QList<int> &list);
    void setNetData(QStringList &list);

    void getModData(QList<int> &listCom,QStringList &listNetData);
private slots:
    void on_puBDown_clicked();
signals:
    void downClicked();
private:
    Ui::DiaModEquipment *ui;
};

#endif // DIAMODEQUIPMENT_H
