#ifndef HANDLEREDATA_H
#define HANDLEREDATA_H
//处理数据
#include <QObject>
#include "udpserver.h"
#include <QMap>
//数据功能码
#define FUN_FIND        0x67  //设备搜索
#define FUN_CHANGE_IP   0x50  //修改IP
#define FUN_CHANGE_DATA 0x52  //参数修改
#define FUN_DOWN_DATA   0x53  //下载参数
#define FUN_RUN_CHECK   0x44  //设备运行诊断

//设备搜索-00 数据位置 三菱
//三菱 名称长度
#define EQUIPMENT_NAME_COUNT_MITSUBISHI         35
#define EQUIPMENT_NAME_COUNT_SIEMENS            50

#define SERIAL_NUMBER_COUNT         5
#define GO_AWAY_DATE_COUNT          11
#define FIRMWARE_VERSION_COUNT      11
#define EQUIPMENT_REMARKS_COUNT     11
#define AGREEMENT_BRAND_COUNT       2
#define MAC_ADDRESS_COUNT           17
#define IP_ADDRESS_COUNT            11
#define SUBNET_MASK_COUNT           11
#define GATEWAY_COUNT               11
#define ACCOUNT_COUNT               29

#define PORT_COUNT                  5

//设备搜索-01 数据位置-西门子s7
#define EQUIPMENT_NAME_START_SIEMENS_S7        24
#define EQUIPMENT_NAME_COUNT_SIEMENS_S7        66
#define SERIAL_NUMBER_SIEMENS_S7               60
#define SERIAL_NUMBER_COUNT_SIEMENS_S7         5
#define GO_AWAY_DATE_SIEMENS_S7                66
#define GO_AWAY_DATE_COUNT_SIEMENS_S7          11
#define FIRMWARE_VERSION_SIEMENS_S7            78
#define FIRMWARE_VERSION_COUNT_SIEMENS_S7      11
#define EQUIPMENT_REMARKS_SIEMENS_S7           90
#define EQUIPMENT_REMARKS_COUNT_SIEMENS_S7     11
#define AGREEMENT_BRAND_SIEMENS_S7             102
#define AGREEMENT_BRAND_COUNT_SIEMENS_S7       2
#define MAC_ADDRESS_SIEMENS_S7                 105
#define MAC_ADDRESS_COUNT_SIEMENS_S7           17
#define IP_ADDRESS_SIEMENS_S7                  123
#define IP_ADDRESS_COUNT_SIEMENS_S7            11
#define SUBNET_MASK_SIEMENS_S7                 135
#define SUBNET_MASK_COUNT_SIEMENS_S7           11
#define GATEWAY_SIEMENS_S7                     147
#define GATEWAY_COUNT_SIEMENS_S7               11
#define ACCOUNT_SIEMENS_S7                     159
#define ACCOUNT_COUNT_SIEMENS_S7               29


//设备诊断 数据位置
#define CHECK_WORK_MODE             24
#define CHECK_WORK_MODE_COUNT       2
#define CHECK_EQUIPMENT_NAME_START  27
#define CHECK_EQUIPMENT_NAME_COUNT  38
#define CHECK_PLC_CHAT_START        75
#define CHECK_PLC_CHAT_COUNT        11
#define CHECK_HMI_CHAT_START        87
#define CHECK_HMI_CHAT_COUNT        11
#define CHECK_PLC_ALL_CHAT_NUM_START        99
#define CHECK_PLC_ALL_CHAT_NUM_COUNT        11
#define CHECK_PLC_TRUE_CHAT_NUM_START       111
#define CHECK_PLC_TRUE_CHAT_NUM_COUNT       11
#define CHECK_PLC_ERROR_CHAT_NUM_START      123
#define CHECK_PLC_ERROR_CHAT_NUM_COUNT      2
#define CHECK_HMI_ALL_CHAT_NUM_START        126
#define CHECK_HMI_ALL_CHAT_NUM_COUNT        11
#define CHECK_HMI_TRUE_CHAT_NUM_START       138
#define CHECK_HMI_TRUE_CHAT_NUM_COUNT       11
#define CHECK_HMI_ERROR_CHAT_NUM_START      150
#define CHECK_HMI_ERROR_CHAT_NUM_COUNT      2
#define CHECK_NET_TCP_PORT_START            153
#define CHECK_NET_TCP_PORT_COUNT            5
#define CHECK_MODBUS_OPEN_NUM_START         159
#define CHECK_MODBUS_OPEN_NUM_COUNT         2
#define CHECK_NET_ALL_CHAT_NUM_START        162
#define CHECK_NET_ALL_CHAT_NUM_COUNT        11
#define CHECK_NET_TRUE_CHAT_NUM_START       174
#define CHECK_NET_TRUE_CHAT_NUM_COUNT       11
#define CHECK_NET_ERROR_CHAT_NUM_START      186
#define CHECK_NET_ERROR_CHAT_NUM_COUNT      2
#define CHECK_NET_TCP_LINK_NUM_START        189
#define CHECK_NET_TCP_LINK_NUM_COUNT        2
#define CHECK_SYSTEM_RUN_TIME_START         192
#define CHECK_SYSTEM_RUN_TIME_COUNT         11


class HandleReData : public QObject
{
    Q_OBJECT
public:
    int handleBrandNum;
private:
    //map<开始位置，字符长度>
    static QMap<int , int > equitMitsubishi;//三菱 搜索设备字符串对应位置
    static QMap<int , int > equitSiemens;//西门子 搜索设备字符串对应位置

    static QMap<QString, int> equitMitsubishiStrStart;
    static QMap<QString, int> equitSiemensStrStart;
public:
    explicit HandleReData(QObject *parent = nullptr);

    void changeIp(QStringList list);
    void parsingData(QString data);
    void dataDownloadToSend(QString ip, QList<int> listCom, QStringList listNetData);
    void dataForSiemensNetData(QList<int> vecInt, QVector<QString> vecStr, QString ipAddr, quint16 port);
signals:
    void findEquMessage(QStringList list);
    void haveIpNeedChange(QString data,QString ipAddr = broadcastIpaddr,quint16 port = defaultPort);
    void getParameterMod(QList<int> listComBox, QStringList netData);
    void dataDown(QString str,QString ip,quint16 port);
    void checkDataHandleOk(QStringList dataList);

    void ipChangeOk();
    void dataDownOk();
    void dataDownSiemensModbusMap();

    void getModbusMap(QVector<QString> vecStr);
    void dataForSiemensNetDataDown(QString data, QString ip, quint16 port);
private:
    void setUdpData(QString &data);
    void setParameterMod(QString &data);//三菱参数
    void setSieMensPar(QString &data);//西门子参数
    void setSieMensModbusMap(QString &data);
    void setCheckData(QString &data);

    QString listToIp(QStringList &list);
    QString listToSendIp(QStringList &list);

    QString serialPortPar(QString data);


};

#endif // HANDLEREDATA_H
