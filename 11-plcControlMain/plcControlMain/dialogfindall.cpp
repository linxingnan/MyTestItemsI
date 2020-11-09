#include "dialogfindall.h"
#include "ui_dialogfindall.h"

DialogFindAll::DialogFindAll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFindAll)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    this->setGeometry(QRect(200, 200, 570, 300));//可设置窗口显示的方位与大小
}

DialogFindAll::~DialogFindAll()
{
    delete ui;
}
