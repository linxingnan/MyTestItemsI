#ifndef DIALOGFINDALL_H
#define DIALOGFINDALL_H
//用于显示查找全局设备页面
#include <QDialog>

namespace Ui {
class DialogFindAll;
}

class DialogFindAll : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFindAll(QWidget *parent = nullptr);
    ~DialogFindAll();

private:
    Ui::DialogFindAll *ui;
};

#endif // DIALOGFINDALL_H
