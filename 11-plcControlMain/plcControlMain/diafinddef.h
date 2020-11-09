#ifndef DIAFINDDEF_H
#define DIAFINDDEF_H
//查找指定设备页面   没有使用
#include <QDialog>

namespace Ui {
class DiaFindDef;
}

class DiaFindDef : public QDialog
{
    Q_OBJECT

public:
    explicit DiaFindDef(QWidget *parent = nullptr);
    ~DiaFindDef();

private:
    Ui::DiaFindDef *ui;
};

#endif // DIAFINDDEF_H
