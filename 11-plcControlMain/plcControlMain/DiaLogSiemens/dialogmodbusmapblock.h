#ifndef DIALOGMODBUSMAPBLOCK_H
#define DIALOGMODBUSMAPBLOCK_H

#include <QDialog>

#define MODBUS_DATA_REGION  0
#define MODBUS_START_ADDR   2
#define MODBUS_STOP_ADDR    4

#define S7PLC_DATA_REGION   0
#define S7PLC_DB_BLOCK      2
#define S7PLC_BYTE_MOVE     4

namespace Ui {
class DialogModbusMapBlock;
}

class DialogModbusMapBlock : public QDialog
{
    Q_OBJECT

public:
    explicit DialogModbusMapBlock(QWidget *parent = nullptr);
    ~DialogModbusMapBlock();

    void setMapData(QString &mbCmd);
    bool getMapData(QString &mdCMD);

//    static QString plcDataChoose(int modBusStart, int modBusStop, int plcByteMove, QString s7PlcDataRegion);
private slots:


    void on_cBOox_S7Plc_DataRegion_currentIndexChanged(int index);

private:

private:
    Ui::DialogModbusMapBlock *ui;
};

#endif // DIALOGMODBUSMAPBLOCK_H
