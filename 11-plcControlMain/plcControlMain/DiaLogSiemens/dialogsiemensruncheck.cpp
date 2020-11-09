#include "dialogsiemensruncheck.h"
#include "ui_dialogsiemensruncheck.h"

DialogSiemensRunCheck::DialogSiemensRunCheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSiemensRunCheck)
{
    ui->setupUi(this);
}

DialogSiemensRunCheck::~DialogSiemensRunCheck()
{
    delete ui;
}
