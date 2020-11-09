#ifndef DIALOGMOSBUSMAPCHECK_H
#define DIALOGMOSBUSMAPCHECK_H

#include <QDialog>

namespace Ui {
class DialogMosbusMapCheck;
}

class DialogMosbusMapCheck : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMosbusMapCheck(QWidget *parent = nullptr);
    ~DialogMosbusMapCheck();

    void setModMapData(QString &str);
signals:
    void needCheck(QString str);
private slots:
    void on_buttonClicked();
private:
    Ui::DialogMosbusMapCheck *ui;
    QVector<int> vecData;
};

#endif // DIALOGMOSBUSMAPCHECK_H
