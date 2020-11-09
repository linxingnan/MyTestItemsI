#include "dialogmodbusmapblock.h"
#include "ui_dialogmodbusmapblock.h"
#include <QDebug>
#include "helpApi/qhelpapi.h"
DialogModbusMapBlock::DialogModbusMapBlock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogModbusMapBlock)
{
    ui->setupUi(this);
    ui->spBox_S7Plc_DBBlock->setEnabled(false);
}

DialogModbusMapBlock::~DialogModbusMapBlock()
{
    delete ui;
}

void DialogModbusMapBlock::setMapData(QString &mbCmd)
{
    QVector<int> vecData;
    QHelpApi::handleMBFileToVector(mbCmd,vecData);
    int fun = vecData.at(0);
    int modbusStartAddr = vecData.at(1);
    int modbusStoptAddr = vecData.at(2);

    ui->cBOox_Modbus_DataRegion->setCurrentIndex(fun);
    ui->spBox_Mosbus_startsAddr->setValue(modbusStartAddr);
    ui->spBox_Mosbus_stopAddr->setValue(modbusStoptAddr);

    int plcRegion = vecData.at(3);
    QHelpApi::sets7PlcRegionCombox(ui->cBOox_S7Plc_DataRegion,plcRegion);

    int plcByteMove = vecData.at(5);
    int plcDbBlock = vecData.at(4);
    ui->spBox_S7Plc_DBBlock->setValue(plcDbBlock);
    ui->spBox_S7Plc_byteMove->setValue(plcByteMove);
}

bool DialogModbusMapBlock::getMapData(QString &mbCMD)
{
    QString modbusDataRegion = ui->cBOox_Modbus_DataRegion->currentText();
    if(modbusDataRegion.isEmpty())
        return false;
    QString s7PlcDataRegion = ui->cBOox_S7Plc_DataRegion->currentText();
    if(s7PlcDataRegion.isEmpty())
        return false;

    mbCMD = QHelpApi::modbusDataMapping(ui->cBOox_Modbus_DataRegion->currentIndex(),ui->spBox_Mosbus_startsAddr->value(),ui->spBox_Mosbus_stopAddr->value(),
                                ui->cBOox_S7Plc_DataRegion->currentText(),ui->spBox_S7Plc_DBBlock->value(),ui->spBox_S7Plc_byteMove->value());

//    modbusData = QString("%1 : %2 ~ %3").arg(modbusDataRegion).arg(modbusStartAddr).arg(modbusStoptAddr);
//    plcData = QHelpApi::plcDataChoose(ui->cBOox_Modbus_DataRegion->currentIndex(),ui->spBox_Mosbus_startsAddr->value(),ui->spBox_Mosbus_stopAddr->value(),
//                            ui->spBox_S7Plc_byteMove->value(),ui->cBOox_S7Plc_DataRegion->currentText(),ui->spBox_S7Plc_DBBlock->value());

    return true;
}

void DialogModbusMapBlock::on_cBOox_S7Plc_DataRegion_currentIndexChanged(int index)
{
    if(index == 3)
        ui->spBox_S7Plc_DBBlock->setEnabled(true);
    else
        ui->spBox_S7Plc_DBBlock->setEnabled(false);
}
