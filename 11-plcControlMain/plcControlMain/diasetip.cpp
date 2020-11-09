#include "diasetip.h"
#include "ui_diasetip.h"
#include <QIcon>
DiaSetIp::DiaSetIp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiaSetIp)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/image/icon/xiugai2-copy-copy.png"));
}

DiaSetIp::~DiaSetIp()
{
    delete ui;
}

void DiaSetIp::setData(QString serialNumberStr, QString ipAddr, QString subnetMask, QString gateway)
{
    ui->liEdSerialNum->setText(serialNumberStr);
    ui->liEdIp->setText(ipAddr);
    ui->liEdSubnet->setText(subnetMask);
    ui->lEdGateway->setText(gateway);
}

void DiaSetIp::getData(QStringList &list)
{
    list.clear();
    list.append(ui->liEdSerialNum->text());
    list.append(ui->liEdIp->text());
    list.append(ui->liEdSubnet->text());
    list.append(ui->lEdGateway->text());
}
