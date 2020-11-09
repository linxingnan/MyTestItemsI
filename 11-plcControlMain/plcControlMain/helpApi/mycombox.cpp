﻿#include "mycombox.h"

MyCombox::MyCombox(QWidget *parent):QComboBox(parent)
{

}

MyCombox::~MyCombox()
{

}

void MyCombox::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
        {
            emit clicked();  //触发clicked信号
        }

        QComboBox::mousePressEvent(event);  //将该事件传给父类处理，这句话很重要，如果没有，父类无法处理本来的点击事件
}
