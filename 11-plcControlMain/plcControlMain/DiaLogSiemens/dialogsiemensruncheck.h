#ifndef DIALOGSIEMENSRUNCHECK_H
#define DIALOGSIEMENSRUNCHECK_H

#include <QDialog>

namespace Ui {
class DialogSiemensRunCheck;
}

class DialogSiemensRunCheck : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSiemensRunCheck(QWidget *parent = nullptr);
    ~DialogSiemensRunCheck();

private:
    Ui::DialogSiemensRunCheck *ui;
};

#endif // DIALOGSIEMENSRUNCHECK_H
