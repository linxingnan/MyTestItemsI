#include "dialogruncheck.h"
#include "ui_dialogruncheck.h"
#include <QIcon>
DialogRunCheck::DialogRunCheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogRunCheck)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/image/icon/zhenduan.png"));
}

DialogRunCheck::~DialogRunCheck()
{
    delete ui;
}

void DialogRunCheck::setLabData(QStringList list)
{
    ui->labWorkMode->setText(list.at(0));
    ui->labPlcMode->setText(list.at(1));
    ui->labPlcSerialData->setText(list.at(2));
    ui->labHmiSerialData->setText(list.at(3));

    ui->labPlcSerialChatCount->setText(list.at(4));
    ui->labPlcSerislCorReCount->setText(list.at(5));
    ui->labPlcSerialErCount->setText(list.at(6));

    ui->labHmiChatCount->setText(list.at(7));
    ui->labHmiSerislCorReCount->setText(list.at(8));
    ui->labHmiSerialErCount->setText(list.at(9));

    ui->labTcpPort->setText(list.at(10));
    ui->labModbusOpenNum->setText(list.at(11));
    ui->labTcpLinkNum->setText(list.at(12));

    ui->labNetChatCount->setText(list.at(13));
    ui->labNetCorReCount->setText(list.at(14));
    ui->labNetErCount->setText(list.at(15));

    ui->labSysRunTime->setText(list.at(16));
}
