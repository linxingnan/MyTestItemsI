#include "helpApi/mycombobox.h"
#include <QDebug>
MycomboBox::MycomboBox(QWidget *parent) : QComboBox(parent)
{

}
void MycomboBox::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        emit MycomboBox::clicked();  //触发clicked信号
    }

    QComboBox::mousePressEvent(event);
}
