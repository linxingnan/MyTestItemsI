#include "diafinddef.h"
#include "ui_diafinddef.h"

DiaFindDef::DiaFindDef(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiaFindDef)
{
    ui->setupUi(this);
}

DiaFindDef::~DiaFindDef()
{
    delete ui;
}
