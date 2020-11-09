#ifndef DIALOGRUNCHECK_H
#define DIALOGRUNCHECK_H
//运行诊断页面
#include <QDialog>

namespace Ui {
class DialogRunCheck;
}

class DialogRunCheck : public QDialog
{
    Q_OBJECT

public:
    explicit DialogRunCheck(QWidget *parent = nullptr);
    ~DialogRunCheck();
    void setLabData(QStringList list);

private:
    Ui::DialogRunCheck *ui;
};

#endif // DIALOGRUNCHECK_H
