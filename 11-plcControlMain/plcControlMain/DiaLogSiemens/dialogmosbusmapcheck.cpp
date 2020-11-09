#include "dialogmosbusmapcheck.h"
#include "ui_dialogmosbusmapcheck.h"
#include "helpApi/qhelpapi.h"
DialogMosbusMapCheck::DialogMosbusMapCheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMosbusMapCheck)
{
    ui->setupUi(this);
    connect(ui->cBOox_S7Plc_DataRegion, QOverload<int>::of(&QComboBox::currentIndexChanged),[=](int index)
    {
        if(index == 3)
            ui->spBoxDBBlock->setEnabled(true);
        else
            ui->spBoxDBBlock->setEnabled(false);
    });

    connect(ui->cBOox_Modbus_DataRegion, QOverload<int>::of(&QComboBox::currentIndexChanged),[=](int index)
    {
        if(index == 0 || index == 1)
            ui->spBoxBitMove->setEnabled(true);
        else
            ui->spBoxBitMove->setEnabled(false);
    });

    connect(ui->pushButton, &QPushButton::clicked, this, &DialogMosbusMapCheck::on_buttonClicked);
}

DialogMosbusMapCheck::~DialogMosbusMapCheck()
{
    delete ui;
}

void DialogMosbusMapCheck::setModMapData(QString &str)
{
    QHelpApi::handleMBFileToVector(str,vecData);
    ui->cBOox_Modbus_DataRegion->setCurrentIndex(vecData.at(0));
    QHelpApi::sets7PlcRegionCombox(ui->cBOox_S7Plc_DataRegion,vecData.at(3));
    ui->spBoxByteMove->setValue(vecData.at(5));
    ui->spBoxDBBlock->setValue(vecData.at(4));

    ui->cBOox_Modbus_DataRegion->setEnabled(false);
    ui->cBOox_S7Plc_DataRegion->setEnabled(false);

    ui->spBoxByteMove->setMinimum(vecData.at(5));
    ui->spBoxDBBlock->setMinimum(vecData.at(4));
    ui->spBoxDBBlock->setEnabled(false);
}

void DialogMosbusMapCheck::on_buttonClicked()
{
    int addr = 0;
    if(ui->cBOox_Modbus_DataRegion->currentIndex() == 0)
    {
        addr = 1+vecData.at(1)+(ui->spBoxByteMove->value()-vecData.at(5))*8+ui->spBoxBitMove->value();
    }
    else if(ui->cBOox_Modbus_DataRegion->currentIndex() == 1)
    {
        addr = 100001+vecData.at(1)+(ui->spBoxByteMove->value()-vecData.at(5))*8+ui->spBoxBitMove->value();
    }
    else if(ui->cBOox_Modbus_DataRegion->currentIndex() == 2)
    {
        addr = 300001+vecData.at(1)+(ui->spBoxByteMove->value()-vecData.at(5))/2+ui->spBoxBitMove->value();
    }
    else if(ui->cBOox_Modbus_DataRegion->currentIndex() == 3)
    {
        addr = 400001+vecData.at(1)+(ui->spBoxByteMove->value()-vecData.at(5))/2+ui->spBoxBitMove->value();
    }
    ui->labNumAddr->setText(QString::asprintf("%06d",addr));
}
