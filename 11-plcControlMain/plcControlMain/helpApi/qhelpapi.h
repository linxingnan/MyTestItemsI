#ifndef QHELPAPI_H
#define QHELPAPI_H

#include <QObject>
#include <QComboBox>
#define DEBUG 0
//mb文件指令 字符串 位置
#define MB_ROW_START                0
#define MB_ROW_COUNT                2
#define MB_FUN_START                3
#define MB_FUN_COUNT                2
#define MB_START_ADDR_START         6
#define MB_START_ADDR_COUNT         5
#define MB_STOP_ADDR_START          12
#define MB_STOP_ADDR_COUNT          5
#define MB_PLC_REGION_START         18
#define MB_PLC_REGION_COUNT         2
#define MB_PLC_DB_START             21
#define MB_PLC_DB_COUNT             5
#define MB_PLC_BYTE_MOVE_START      30
#define MB_PLC_BYTE_MOVE_COUNT      5


class QHelpApi : public QObject
{
    Q_OBJECT
public:
    explicit QHelpApi(QObject *parent = nullptr);

    //16进制字符串转字节数组
    static QByteArray hexStrToByteArray(const QString &str);
    static char convertHexChar(char ch);

    //字节数组转16进制字符串
    static QString byteArrayToHexStr(const QByteArray &data);

    //字节数组转Ascii字符串
    static QString byteArrayToAsciiStr(const QByteArray &data);

    //10进制转16进制字符串,补零.
    static QString decimalToStrHex(int decimal);

    //十六进制转为对应的ascii
    static char changefromHex_to_ascii(QString str);

    //拼接16进制字符串为数字
    static int appendHexStr_to_Int(QString str);

    //将16进制数字翻转过来
    static int hexStrFlip(QString str);

    static QString hexStrFlip(int num);

    //保留小数点后几位
    static double saveDecimalPointNum(double num, int saveNum = 1);

    //生成一条modbus读取指令  发送次数 设备地址 功能码 开始地址 读取位数
    static QString buildModbusDataRead(int sendTimes, int equAddr, int table,
                                       int startAddr, int numberOfEntries);
    static QString buildModbusDataWrite(int sendTimes,int equAddr, int table,
                                        int startAddr, int numberOfEntries,QString writeData);

    //将数字转换为指定长度的十六进制字符，每两个以空格分隔
    static QString hexNumToStr(int num,int length = 2);

    //检查modbus发送的指令和返回的指令 头部相同 = true 不同 = false
    static bool checkModbusData(QString checkSendstr, QString checkReStr);

    //.mb文件,单独指令处理，有行号
    static bool handleMBFile(QString str, QString &modbusData, QString &s7PlcData);

    //把指令里的数据拆分为 QVector<int>
    static bool handleMBFileToVector(QString &str, QVector<int> &vecData);

    //modbus数据映射表中的plc数据生成
    static QString plcDataChoose(int modBusFun, int modBusStart, int modBusStop,
                                 int plcByteMove, QString s7PlcDataRegion,int DbBlock);

    //生成mb文件指令 无行号
    static QString modbusDataMapping(int modBusFun, int modBusStart, int modBusStop,
                                     QString s7PlcDataRegion,int DbBlock,int plcByteMove);

    //设置combox的plc选择区域
    static void sets7PlcRegionCombox(QComboBox *comBox, int plcRegion);
signals:
public:
    static QMap<int, QString> bandName;//静态成员变量要在类外初始化
    static QMap<int, QString> s7PlcRegionName;
};

#endif // QHELPAPI_H
