#include "handleredata.h"
#include <QDebug>
#include "helpApi/qhelpapi.h"
#include <QThread>

QMap<QString, int> HandleReData::equitMitsubishiStrStart =
{
    {"equitName",24},
    {"serial",60},
    {"date of production",66},
    {"firmware version",78},
    {"remarks",90},
    {"agreement brand",102},
    {"mac addr",105},
    {"ip addr",123},
    {"subnet mask",135},
    {"gateway",147},
    {"account",159},
};

QMap<QString, int> HandleReData::equitSiemensStrStart =
{
    {"equitName",24},
    {"serial",75},
    {"date of production",81},
    {"firmware version",93},
    {"remarks",105},
    {"agreement brand",117},
    {"mac addr",120},
    {"ip addr",138},
    {"subnet mask",150},
    {"gateway",162},
    {"account",174},
};

HandleReData::HandleReData(QObject *parent) : QObject(parent),handleBrandNum(-1)
{
    qRegisterMetaType<QVector<QString>>("HandleReData");
}

void HandleReData::parsingData(QString data)
{
    qDebug()<<"HandleReData::parsingData"<<QThread::currentThread();
    qDebug()<<"handleBrandNum "<<handleBrandNum;
    bool ok;
    QStringList list = data.split(" ");
    if(list.size()<7)
        return;
    if(list.at(6).toInt(&ok,16) == FUN_FIND)
    {
        setUdpData(data);
    }
    else if(list.at(6).toInt(&ok,16) == FUN_CHANGE_IP)
    {
        qDebug()<<"改变IP--返回";
        emit ipChangeOk();
    }
    else if(list.at(6).toInt(&ok,16) == FUN_CHANGE_DATA)
    {
        if(handleBrandNum == 1)
        {
            qDebug()<<"三菱参数";
            setParameterMod(data);
        }
        else if(handleBrandNum == 8)
        {
            qDebug()<<"西门子参数";
            if(list.at(7).toInt(&ok,16) == 00)
                setSieMensPar(data);
            else if(list.at(7).toInt(&ok,16) == 01)
                setSieMensModbusMap(data);
        }

    }
    else if(list.at(6).toInt(&ok,16) == FUN_DOWN_DATA)
    {
        qDebug()<<"下载参数--返回";
        if(handleBrandNum == 1)
            emit dataDownOk();
        else if(handleBrandNum == 8)
        {
            if(list.at(7).toInt(&ok,16) == 01)
                emit dataDownSiemensModbusMap();
            else if(list.at(7).toInt(&ok,16) == 00)
                emit dataDownOk();
        }
    }
    else if(list.at(6).toInt(&ok,16) == FUN_RUN_CHECK)
    {
        qDebug()<<"诊断--返回";
        setCheckData(data);
    }
    else
        return;
}

void HandleReData::dataDownloadToSend(QString ip,QList<int> listCom, QStringList listNetData)
{
    QString com = "";
    for(int i = 0; i<listCom.size(); i++)
    {
        if(listCom.at(i) == -1)
            listCom[i]=255;
        com+=QString::asprintf("%02x",listCom.at(i));
//        com+=QString::number(listCom.at(i),16);
        if(i!=listCom.size()-1)
            com+=" ";
    }
    qDebug()<<"Down com"<<com;
    QString ipAddr = listNetData.at(0);
    QString subNetMask = listNetData.at(1);
    QString gateWay = listNetData.at(2);
    QString port = listNetData.at(3);
    QString modbusLinkNum = listNetData.at(4);

    QStringList tempList = ipAddr.split(".");
    ipAddr = listToSendIp(tempList);

    tempList = subNetMask.split(".");
    subNetMask = listToSendIp(tempList);

    tempList = gateWay.split(".");
    gateWay = listToSendIp(tempList);

    bool ok;
    port = QHelpApi::hexNumToStr(port.toInt(&ok,10),4);

    int tempNum = modbusLinkNum.toInt(&ok,10);
    modbusLinkNum = QString::asprintf("%02x",tempNum);

    QString strSend = QString("00 ff 01 4c 00 00 53 00 %1 %2 %3 %4 %5 %6 fe 01 00 00 00 00 00 00")
            .arg(com).arg(ipAddr).arg(subNetMask).arg(gateWay).arg(port).arg(modbusLinkNum);
//    qDebug()<<strSend;
    emit dataDown(strSend,ip,defaultPort);
}

void HandleReData::dataForSiemensNetData(QList<int> vecInt, QVector<QString> vecStr, QString ipAddr, quint16 port)
{
    QString com = "";
    int allCount = vecInt.size()-2;
    for(int i = 0; i<allCount; i++)
    {
        if(vecInt.at(i) == -1)
            vecInt[i]=255;
        com+=QString::asprintf("%02x",vecInt.at(i));
        if(i!=allCount-1)
            com+=" ";
    }
    qDebug()<<com;

    int chatSyn = vecInt[10];
    QString strChatSyn = QHelpApi::hexStrFlip(chatSyn);

    int timeout = vecInt[11];
    QString strTimeOut = QHelpApi::hexStrFlip(timeout);

    QString ip = vecStr.at(0);
    QString subNetMask = vecStr.at(1);
    QString gateWay = vecStr.at(2);
    QString s7TcpServerPort = vecStr.at(3);
    QString modChatPort = vecStr.at(4);
    QString bcNetS7ChatPort = vecStr.at(5);

    QStringList tempList = ip.split(".");
    ip = listToSendIp(tempList);

    tempList = subNetMask.split(".");
    subNetMask = listToSendIp(tempList);

    tempList = gateWay.split(".");
    gateWay = listToSendIp(tempList);

    bool ok;
    s7TcpServerPort = QHelpApi::hexNumToStr(s7TcpServerPort.toInt(&ok,10),4);
    modChatPort = QHelpApi::hexNumToStr(modChatPort.toInt(&ok,10),4);
    bcNetS7ChatPort = QHelpApi::hexNumToStr(bcNetS7ChatPort.toInt(&ok,10),4);

    //还有数据未明
    QString strSend = QString("00 ff 01 4c 00 00 53 00 %1 ff 00 00 00 00 00 %2 %3 %4 %5 %6 %7"
                              " 00 00 00 00 00 00 00 00 00 00 00 00 "
                              "%8 %9")
            .arg(com).arg(ip).arg(subNetMask).arg(gateWay)
            .arg(s7TcpServerPort).arg(modChatPort).arg(bcNetS7ChatPort)
            .arg(strChatSyn).arg(strTimeOut);

    for(int i = 0; i<274; i++)
    {
        QString str = " 00";
        strSend += str;
    }

    emit dataForSiemensNetDataDown(strSend,ipAddr,port);
}

void HandleReData::setUdpData(QString &data)
{
    QMap<QString, int> strStart;
    int nameCount = 0;
    bool ok;
    int brandData = data.mid(21,2).toInt(&ok,16);
    if(brandData == 0)
    {
        strStart = equitMitsubishiStrStart;
        nameCount = EQUIPMENT_NAME_COUNT_MITSUBISHI;
        qDebug()<<"三菱";
    }
    else if(brandData == 1)
    {
        strStart = equitSiemensStrStart;
        nameCount = EQUIPMENT_NAME_COUNT_SIEMENS;
        qDebug()<<"西门子s7";
    }

    //设备名称
    QString equipmentName = data.mid(strStart.value("equitName"),nameCount);
    qDebug()<<"equipmentName "<<equipmentName;
    QStringList list = equipmentName.split(" ");
    equipmentName.clear();
    for(int i = 0; i<list.size(); i++)
    {
        char ch = QHelpApi::changefromHex_to_ascii(list.at(i));
        equipmentName.append(ch);
    }
    equipmentName.remove(QChar('\0'), Qt::CaseInsensitive);

    //序列号
    QString serialNumberStr = data.mid(strStart.value("serial"),SERIAL_NUMBER_COUNT);
    qDebug()<<"serialNumberStr"<<serialNumberStr;
    int serialNumber = QHelpApi::appendHexStr_to_Int(serialNumberStr);
    serialNumberStr.clear();
    serialNumberStr = QString::number(serialNumber);

    //出厂日期
    QString goAwayDate = data.mid(strStart.value("date of production"),GO_AWAY_DATE_COUNT);
    list = goAwayDate.split(" ");
    int yearH = list.at(0).toInt(&ok,16);
    int yearL = list.at(1).toInt(&ok,16);
    int month = list.at(2).toInt(&ok,16);
    int date = list.at(3).toInt(&ok,16);
    goAwayDate.clear();
    goAwayDate = QString("%1%2.%3.%4").arg(yearH).arg(yearL).arg(month).arg(date);

    //固件版本
    QString firmwareVersion = data.mid(strStart.value("firmware version"),FIRMWARE_VERSION_COUNT);
    list = firmwareVersion.split(" ");
    int one = list.at(0).toInt(&ok,10);
    int two = list.at(1).toInt(&ok,10);
    int three = list.at(2).toInt(&ok,10);
    int four = list.at(3).toInt(&ok,10);
    firmwareVersion = QString("%1.%2.%3.%4").arg(one).arg(two).arg(three).arg(four);

    //设备备注
    QString equipmenRemarks = data.mid(strStart.value("remarks"),EQUIPMENT_REMARKS_COUNT);
    list = equipmenRemarks.split(" ");
    equipmenRemarks.clear();
    for(int i = 0; i<list.size(); i++)
    {
        char ch = QHelpApi::changefromHex_to_ascii(list.at(i));
        equipmenRemarks.append(ch);
    }
    //协议品牌
    QString agreementBrand = data.mid(strStart.value("agreement brand"),AGREEMENT_BRAND_COUNT);

    //mac
    QString macAddr = data.mid(strStart.value("mac addr"),MAC_ADDRESS_COUNT);
    macAddr.replace(QRegExp(" "), ":");

    QString ipAddr = data.mid(strStart.value("ip addr"),IP_ADDRESS_COUNT);
    list = ipAddr.split(" ");
    ipAddr = listToIp(list);

    QString subNetMask = data.mid(strStart.value("subnet mask"),SUBNET_MASK_COUNT);
    list = subNetMask.split(" ");
    subNetMask = listToIp(list);

    QString gateWay = data.mid(strStart.value("gateway"),GATEWAY_COUNT);
    list = gateWay.split(" ");
    gateWay = listToIp(list);

    //登录账户
    QString account = data.mid(strStart.value("account"),ACCOUNT_COUNT);
    list = account.split(" ");
    account.clear();
    for(int i = 0; i<list.size(); i++)
    {
        char ch = QHelpApi::changefromHex_to_ascii(list.at(i));
        account.append(ch);
    }
    account.remove(QChar('\0'), Qt::CaseInsensitive);

    qDebug()<<goAwayDate;
    qDebug()<<firmwareVersion;
    qDebug()<<equipmenRemarks;
    qDebug()<<agreementBrand;
    qDebug()<<macAddr;
    qDebug()<<ipAddr;
    qDebug()<<subNetMask;
    qDebug()<<gateWay;
    qDebug()<<account;

    QStringList sendList;
    sendList.append(equipmentName);
    sendList.append(serialNumberStr);
    sendList.append(goAwayDate);
    sendList.append(firmwareVersion);
    sendList.append(equipmenRemarks);
    sendList.append(agreementBrand);
    sendList.append(macAddr);
    sendList.append(ipAddr);
    sendList.append(subNetMask);
    sendList.append(gateWay);
    sendList.append(account);

    emit findEquMessage(sendList);
}

void HandleReData::changeIp(QStringList list)
{
    bool ok;
    QString serialNumberStr = list.at(0);
    QString ipAddr = list.at(1);
    QString subNetMask = list.at(2);
    QString gateWay = list.at(3);

    serialNumberStr = QString::asprintf("%04x",serialNumberStr.toInt(&ok,10));
//    serialNumberStr = QString::number(serialNumberStr.toInt(&ok,10),16);
//    qDebug()<<"serialNumberStrr"<<serialNumberStr;
    QString temp = "";
    temp.append(serialNumberStr.at(0));
    temp.append(serialNumberStr.at(1));
    temp.append(" ");
    temp.append(serialNumberStr.at(2));
    temp.append(serialNumberStr.at(3));
    serialNumberStr = temp;
//    serialNumberStr = serialNumberStr.toUpper();
//    qDebug()<<serialNumberStr;

    QStringList tempList = ipAddr.split(".");
    ipAddr = listToSendIp(tempList);

    tempList = subNetMask.split(".");
    subNetMask = listToSendIp(tempList);

    tempList = gateWay.split(".");
    gateWay = listToSendIp(tempList);

    QString send = QString("00 ff 00 16 00 00 50 00 00 %1 %2 %3 %4 ff")
            .arg(serialNumberStr)
            .arg(ipAddr)
            .arg(subNetMask)
            .arg(gateWay);
//    qDebug()<<send;
    emit haveIpNeedChange(send);
}

//修改设备参数前  获取设备的参数
void HandleReData::setParameterMod(QString &data)
{
    qDebug()<<"setParameterMod";
    bool ok;
    QStringList list = data.split(" ");

    QList<int> modData;
    modData.append(list.at(8).toInt(&ok,16));//自动识别PLC型号
    modData.append(list.at(9).toInt(&ok,16));//hmi通讯参数自适应
    modData.append(list.at(10).toInt(&ok,16));//系统工作模式
    modData.append(list.at(11).toInt(&ok,16));//通讯重试次数
    modData.append(list.at(12).toInt(&ok,16));//PLC型号
    modData.append(list.at(13).toInt(&ok,16));//PLC波特率
    modData.append(list.at(14).toInt(&ok,16));//HMI波特率

    qDebug()<<"PLC波特率 B"<<list.at(13).toInt(&ok,16);
    qDebug()<<"hmi B"<<list.at(14).toInt(&ok,16);

    QString ipAddr = data.mid(45,IP_ADDRESS_COUNT);
    list = ipAddr.split(" ");
//    qDebug()<<ipAddr;
    ipAddr = listToIp(list);

    QString subNetMask = data.mid(57,SUBNET_MASK_COUNT);
    list = subNetMask.split(" ");
    subNetMask = listToIp(list);

    QString gateWay = data.mid(69,GATEWAY_COUNT);
    list = gateWay.split(" ");
    gateWay = listToIp(list);

    QString port = data.mid(81,PORT_COUNT);
    int serialNumber = QHelpApi::appendHexStr_to_Int(port);
    port.clear();
    port = QString::number(serialNumber);

    QString modBusTcpLink = data.mid(87,2);
    qDebug()<<modBusTcpLink;
    modBusTcpLink = QString::number(modBusTcpLink.toInt(&ok,16));

    QStringList linkData;

    linkData.append(ipAddr);
    linkData.append(subNetMask);
    linkData.append(gateWay);
    linkData.append(port);
    linkData.append(modBusTcpLink);
    qDebug()<<linkData;

    emit getParameterMod(modData,linkData);
}

void HandleReData::setSieMensPar(QString &data)
{
    QStringList list = data.split(" ");
    bool ok;
    QList<int> modData;
    modData.append(list.at(8).toInt(&ok,16));//bcnet站地址
    modData.append(list.at(9).toInt(&ok,16));//s7总线最高地址
    modData.append(list.at(10).toInt(&ok,16));//站点通讯重试次数
    modData.append(list.at(11).toInt(&ok,16));//地址间隔刷新次数
    modData.append(list.at(12).toInt(&ok,16));//默认plc目标地址
    modData.append(list.at(13).toInt(&ok,16));//web开关
    modData.append(list.at(14).toInt(&ok,16));//s7总线通讯协议模式
    modData.append(list.at(15).toInt(&ok,16));//通讯由槽号决定
    modData.append(list.at(16).toInt(&ok,16));//s7总线通讯波特率
    modData.append(list.at(17).toInt(&ok,16));//扩展总线接口波特率
    qDebug()<<"moddata "<<modData;
    QString ipAddr = data.mid(72,IP_ADDRESS_COUNT);
    list = ipAddr.split(" ");
    qDebug()<<ipAddr;
    ipAddr = listToIp(list);

    QString subNetMask = data.mid(84,SUBNET_MASK_COUNT);
    list = subNetMask.split(" ");
    subNetMask = listToIp(list);

    QString gateWay = data.mid(96,GATEWAY_COUNT);
    list = gateWay.split(" ");
    gateWay = listToIp(list);

    QString s7TcpServerPort = data.mid(108,PORT_COUNT);
    int serialNumber = QHelpApi::appendHexStr_to_Int(s7TcpServerPort);
    s7TcpServerPort.clear();
    s7TcpServerPort = QString::number(serialNumber);

    QString modBusTcpPort = data.mid(114,PORT_COUNT);
    int modBusTcpPortNum = QHelpApi::appendHexStr_to_Int(modBusTcpPort);
    modBusTcpPort.clear();
    modBusTcpPort = QString::number(modBusTcpPortNum);

    QString bcNetS7ServerPort = data.mid(120,PORT_COUNT);
    int bcNetS7ServerPortNum = QHelpApi::appendHexStr_to_Int(bcNetS7ServerPort);
    bcNetS7ServerPort.clear();
    bcNetS7ServerPort = QString::number(bcNetS7ServerPortNum);

    QString chatSyn = data.mid(162,5);
//    qDebug()<<"chatSyn"<<chatSyn;
    int chatSynNum = QHelpApi::hexStrFlip(chatSyn);
    modData.append(chatSynNum);
    QString chatTimeout = data.mid(168,5);
//    qDebug()<<"chatTimeout"<<chatTimeout;
    int chatTimeoutNum = QHelpApi::hexStrFlip(chatTimeout);
    modData.append(chatTimeoutNum);

    QStringList linkData;

    linkData.append(ipAddr);
    linkData.append(subNetMask);
    linkData.append(gateWay);
    linkData.append(s7TcpServerPort);
    linkData.append(modBusTcpPort);
    linkData.append(bcNetS7ServerPort);
    qDebug()<<linkData;

    emit getParameterMod(modData,linkData);
}

void HandleReData::setSieMensModbusMap(QString &data)
{
    QVector<QString> vecStr;
    int count = 35;
    int start = 24;
    for(int i = 0; i <32; i++)
    {
        vecStr.append(data.mid(start,count));
        start+=count+1;
    }
    emit getModbusMap(vecStr);
//    for(int i = 0; i<vecStr.size(); i++)
//    {
//        qDebug()<<vecStr.at(i);
//    }
}

void HandleReData::setCheckData(QString &data)
{
    QString workMode = data.mid(CHECK_WORK_MODE, CHECK_WORK_MODE_COUNT);

    if(workMode == "00")
    {
        workMode = "三菱以太网协议";
    }
    else if(workMode == "01")
    {
        workMode = "三菱串行协议";
    }
    qDebug()<<"workMode"<<workMode;
    QString equimentName = data.mid(CHECK_EQUIPMENT_NAME_START, CHECK_EQUIPMENT_NAME_COUNT);
    QStringList list = equimentName.split(" ");
    equimentName.clear();
    for(int i = 0; i<list.size(); i++)
    {
        char ch = QHelpApi::changefromHex_to_ascii(list.at(i));
        equimentName.append(ch);
    }
    equimentName.remove(QChar('\0'), Qt::CaseInsensitive);

    qDebug()<<"equimentName"<<equimentName;

    QString plcChat = data.mid(CHECK_PLC_CHAT_START,CHECK_PLC_CHAT_COUNT);//plc串行参数
    plcChat = serialPortPar(plcChat);
    qDebug()<<"plcChat"<<plcChat;

    QString hmiChat = data.mid(CHECK_HMI_CHAT_START,CHECK_HMI_CHAT_COUNT);//hmi串行参数
    hmiChat = serialPortPar(hmiChat);
    qDebug()<<"hmiChat"<<hmiChat;

    QString plcChatTimes = data.mid(CHECK_PLC_ALL_CHAT_NUM_START,CHECK_PLC_ALL_CHAT_NUM_COUNT);//通讯请求总数
    plcChatTimes = QString::number(QHelpApi::appendHexStr_to_Int(plcChatTimes));
    qDebug()<<"plcChatTimes"<<plcChatTimes;

    QString plcTrueTimes = data.mid(CHECK_PLC_TRUE_CHAT_NUM_START,CHECK_PLC_TRUE_CHAT_NUM_COUNT);//正确次数
    plcTrueTimes = QString::number(QHelpApi::appendHexStr_to_Int(plcTrueTimes));
    qDebug()<<"plcTrueTimes"<<plcTrueTimes;

    QString plcErrTimes = data.mid(CHECK_PLC_ERROR_CHAT_NUM_START,CHECK_PLC_ERROR_CHAT_NUM_COUNT);//错误次数
    plcErrTimes = QString::number(QHelpApi::appendHexStr_to_Int(plcErrTimes));
    qDebug()<<"plcErrTimes"<<plcErrTimes;

    QString hmiChatTimes = data.mid(CHECK_HMI_ALL_CHAT_NUM_START,CHECK_HMI_ALL_CHAT_NUM_COUNT);
    hmiChatTimes = QString::number(QHelpApi::appendHexStr_to_Int(hmiChatTimes));
    qDebug()<<"hmiChatTimes"<<hmiChatTimes;

    QString hmiTrueTimes = data.mid(CHECK_HMI_TRUE_CHAT_NUM_START,CHECK_HMI_TRUE_CHAT_NUM_COUNT);
    hmiTrueTimes = QString::number(QHelpApi::appendHexStr_to_Int(hmiTrueTimes));
    qDebug()<<"hmiTrueTimes"<<hmiTrueTimes;

    QString hmiErrTimes = data.mid(CHECK_HMI_ERROR_CHAT_NUM_START,CHECK_HMI_ERROR_CHAT_NUM_COUNT);
    hmiErrTimes = QString::number(QHelpApi::appendHexStr_to_Int(hmiErrTimes));
    qDebug()<<"hmiErrTimes"<<hmiErrTimes;

    QString tcpPort = data.mid(CHECK_NET_TCP_PORT_START,CHECK_NET_TCP_PORT_COUNT);
    tcpPort = QString::number(QHelpApi::appendHexStr_to_Int(tcpPort));
    qDebug()<<"tcpPort"<<tcpPort;

    QString modbusOpenNums = data.mid(CHECK_MODBUS_OPEN_NUM_START,CHECK_MODBUS_OPEN_NUM_COUNT);
    modbusOpenNums = QString::number(QHelpApi::appendHexStr_to_Int(modbusOpenNums));
    qDebug()<<"modbusOpenNums"<<modbusOpenNums;

    QString netChatTimes = data.mid(CHECK_NET_ALL_CHAT_NUM_START,CHECK_NET_ALL_CHAT_NUM_COUNT);
    netChatTimes = QString::number(QHelpApi::appendHexStr_to_Int(netChatTimes));
    qDebug()<<"netChatTimes"<<netChatTimes;

    QString netTrueTimes = data.mid(CHECK_NET_TRUE_CHAT_NUM_START,CHECK_NET_TRUE_CHAT_NUM_COUNT);
    netTrueTimes = QString::number(QHelpApi::appendHexStr_to_Int(netTrueTimes));
    qDebug()<<"netTrueTimes"<<netTrueTimes;

    QString netErrTimes = data.mid(CHECK_NET_ERROR_CHAT_NUM_START,CHECK_NET_ERROR_CHAT_NUM_COUNT);
    netErrTimes = QString::number(QHelpApi::appendHexStr_to_Int(netErrTimes));
    qDebug()<<"netErrTimes"<<netErrTimes;

    QString tcpLinkNum = data.mid(CHECK_NET_TCP_LINK_NUM_START,CHECK_NET_TCP_LINK_NUM_COUNT);
    tcpLinkNum = QString::number(QHelpApi::appendHexStr_to_Int(tcpLinkNum));
    qDebug()<<"tcpLinkNum"<<tcpLinkNum;

    QString sysRunTime = data.mid(CHECK_SYSTEM_RUN_TIME_START,CHECK_SYSTEM_RUN_TIME_COUNT);
    int day = QHelpApi::appendHexStr_to_Int(sysRunTime.mid(0,5));
    int hour = QHelpApi::appendHexStr_to_Int(sysRunTime.mid(6,2));
    int minute = QHelpApi::appendHexStr_to_Int(sysRunTime.mid(9,2));
    sysRunTime = QString("%1天%2小时%3分").arg(day).arg(hour).arg(minute);
    qDebug()<<"sysRunTime"<<sysRunTime;

    QStringList checkDataList;
    checkDataList.append(workMode);
    checkDataList.append(equimentName);
    checkDataList.append(plcChat);
    checkDataList.append(hmiChat);
    checkDataList.append(plcChatTimes);
    checkDataList.append(plcTrueTimes);
    checkDataList.append(plcErrTimes);
    checkDataList.append(hmiChatTimes);
    checkDataList.append(hmiTrueTimes);
    checkDataList.append(hmiErrTimes);
    checkDataList.append(tcpPort);
    checkDataList.append(modbusOpenNums);
    checkDataList.append(tcpLinkNum);
    checkDataList.append(netChatTimes);
    checkDataList.append(netTrueTimes);
    checkDataList.append(netErrTimes);
    checkDataList.append(sysRunTime);
    emit checkDataHandleOk(checkDataList);
}

QString HandleReData::listToIp(QStringList &list)
{
    bool ok;
    QString str = "";
    for(int i = 0; i<list.size();i++)
    {
        str.append(QString::number(list.at(i).toInt(&ok,16)));
        if(i!=list.size()-1)
            str.append(".");
    }
    return str;
}

QString HandleReData::listToSendIp(QStringList &list)
{
    bool ok;
    QString str = "";
    for(int i = 0; i<list.size();i++)
    {
//        str.append(QString::number(list.at(i).toInt(0,10),16));
        int temp = list.at(i).toInt(&ok,10);
        str.append(QString("%1").arg(temp,2,16,QChar('0')));
        if(i!=list.size()-1)
            str.append(" ");
    }
//    str = str.toUpper();
    return str;
}

QString HandleReData::serialPortPar(QString data)
{
    QStringList list = data.split(" ");
    QString str = "";
    bool ok;
    switch (list.at(0).toInt(&ok,16)) //波特率
    {
    case 0x00: str = "9600";
        break;
    case 0x01: str = "19200";
        break;
    case 0x02: str = "38400";
        break;
    case 0x03: str = "57600";
        break;
    case 0x04: str = "115200";
        break;
    default: str = "??";
        break;
    }
    str += "bps,";
    switch (list.at(1).toInt(&ok,16)) //数据位
    {
    case 0x00: str += "7";
        break;
    case 0x01: str += "8";
        break;
    default: str += "??";
        break;
    }
    str += ",";

    switch(list.at(2).toInt(&ok,16))//奇偶校验
    {
    case 0x00: str += "E";
        break;
    case 0x01: str += "0";
        break;
    case 0x02: str += "N";
        break;
    default: str += "??";
        break;
    }
    str += ",";
    switch(list.at(3).toInt(&ok,16))//停止位
    {
    case 0x00: str += "1";
        break;
    case 0x01: str += "2";
        break;
    default: str += "??";
        break;
    }
    return str;
}
