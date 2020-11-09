#include "update/dlogdatachange.h"
#include "ui_dlogdatachange.h"
#include <QIntValidator>
DLogDataChange::DLogDataChange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DLogDataChange)
{
    ui->setupUi(this);

    ui->liEdUpdatePort->setValidator(new QIntValidator(1,65536,this));//设置最大值和最小值
    ui->liEdIpOne->setValidator(new QIntValidator(1,255,this));//设置最大值和最小值
    ui->liEdIpTwo->setValidator(new QIntValidator(1,255,this));//设置最大值和最小值
    ui->liEdIpThree->setValidator(new QIntValidator(1,255,this));//设置最大值和最小值
    ui->liEdIpFour->setValidator(new QIntValidator(1,255,this));//设置最大值和最小值
}

DLogDataChange::~DLogDataChange()
{
    delete ui;
}

void DLogDataChange::setIpAndPort(int ipOne, int ipTwo, int ipThree, int ipFour,int updatePort)
{
    ui->liEdIpOne->setText(QString::number(ipOne));
    ui->liEdIpTwo->setText(QString::number(ipTwo));
    ui->liEdIpThree->setText(QString::number(ipThree));
    ui->liEdIpFour->setText(QString::number(ipFour));

    ui->liEdUpdatePort->setText(QString::number(updatePort));
}

QString DLogDataChange::getIp()
{
    int ipOne = ui->liEdIpOne->text().toInt();
    int ipTwo = ui->liEdIpTwo->text().toInt();
    int ipThree = ui->liEdIpThree->text().toInt();
    int ipFour = ui->liEdIpFour->text().toInt();

    QString str = QString("%1.%2.%3.%4").arg(ipOne).arg(ipTwo).arg(ipThree).arg(ipFour);
    return str;
}

void DLogDataChange::getPort(int &updatePort)
{
    updatePort = ui->liEdUpdatePort->text().toInt();
}
