#include "diamodequipment.h"
#include "ui_diamodequipment.h"

DiaModEquipment::DiaModEquipment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DiaModEquipment)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/image/icon/weibiaoti-.png"));
    ui->liPort->setValidator(new QIntValidator(0, 65535, this));
    ui->liEdModbusLinkNum->setValidator(new QIntValidator(0, 4, this));
}

DiaModEquipment::~DiaModEquipment()
{
    delete ui;
}

void DiaModEquipment::setBaseData(QStringList list)
{
    ui->labEquName->setText(list.at(0));
    ui->labserialNum->setText(list.at(1));
    ui->labGoDate->setText(list.at(2));
    ui->labFirmVer->setText(list.at(3));
    ui->labReamrks->setText(list.at(4));
    ui->labBrand->setText(list.at(5));
    ui->labIpAddr->setText(list.at(7));
    ui->labMacAddr->setText(list.at(6));
}

void DiaModEquipment::setComBoxData(QList<int> &list)
{
    ui->cBoxAutoPlcModel->setCurrentIndex(list.at(0));
    ui->cBoxHmiSelfAda->setCurrentIndex(list.at(1));
    ui->cBoxWorkMode->setCurrentIndex(list.at(2));
    ui->cBoxReTry->setCurrentIndex(list.at(3));
//    ui->liEdReTry->setText(QString::number(list.at(3)));
    ui->cBoxPlcModel->setCurrentIndex(list.at(4));
    ui->cBoxPlcBaudRate->setCurrentIndex(list.at(5));
    ui->cBoxHmiBaudRate->setCurrentIndex(list.at(6));
}

void DiaModEquipment::setNetData(QStringList &list)
{
    ui->liEdIpAddr->setText(list.at(0));
    ui->liedSubnetMask->setText(list.at(1));
    ui->liGateway->setText(list.at(2));
    ui->liPort->setText(list.at(3));
    ui->liEdModbusLinkNum->setText(list.at(4));
}

void DiaModEquipment::getModData(QList<int> &listCom, QStringList &listNetData)
{
    listCom.clear();
    listCom.append(ui->cBoxAutoPlcModel->currentIndex());
    listCom.append(ui->cBoxHmiSelfAda->currentIndex());
    listCom.append(ui->cBoxWorkMode->currentIndex());
    listCom.append(ui->cBoxReTry->currentIndex());
//    ui->liEdReTry->currentIndex();
    listCom.append(ui->cBoxPlcModel->currentIndex());
    listCom.append(ui->cBoxPlcBaudRate->currentIndex());
    listCom.append(ui->cBoxHmiBaudRate->currentIndex());

    listNetData.clear();
    listNetData.append(ui->liEdIpAddr->text());
    listNetData.append(ui->liedSubnetMask->text());
    listNetData.append(ui->liGateway->text());
    listNetData.append(ui->liPort->text());
    listNetData.append(ui->liEdModbusLinkNum->text());
}

void DiaModEquipment::on_puBDown_clicked()
{
    emit downClicked();
}
