#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H

#include <QWidget>

#include <QComboBox>
#include <QMouseEvent>

class MycomboBox : public QComboBox
{
    Q_OBJECT
public:
    explicit MycomboBox(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event);
signals:
    void clicked();
public slots:
};

#endif // MYCOMBOBOX_H
