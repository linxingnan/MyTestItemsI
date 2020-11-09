#include "helpApi/qhelpapi.h"
#include <QDebug>

QMap<int, QString> QHelpApi::bandName =
{
    {0,"松下FP系列"},
    {1,"三菱FX系列"},
    {2,"台达DVP系列"},
    {3,"欧姆龙CP系列"},
    {4,"欧姆龙CJ系列"},
    {5,"三菱Q系列"},
    {6,"Modbus网关"},
    {7,"施耐德PLC系列"},
    {8,"西门子S7系列"},
    {9,"信捷XC系列"},
    {10,"基恩士KV系列"},
};

QMap<int, QString> QHelpApi::s7PlcRegionName =
{
    {0x81,"I"},
    {0x82,"Q"},
    {0x83,"M"},
    {0x84,"DB"},
    {0x04,"S7200-S"},
    {0x05,"S7200-SM"},
    {0x06,"S7200-AI"},
    {0x07,"S7200-AQ"},
    {0x80,"S7300-PW"},
};

QHelpApi::QHelpApi(QObject *parent) : QObject(parent)
{

}

QByteArray QHelpApi::hexStrToByteArray(const QString &str)
{
    QByteArray senddata;
    int hexdata, lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    senddata.resize(len / 2);
    char lstr, hstr;

    for (int i = 0; i < len;) {
        hstr = str.at(i).toLatin1();

        if (hstr == ' ') {
            i++;
            continue;
        }

        i++;

        if (i >= len) {
            break;
        }

        lstr = str.at(i).toLatin1();
        hexdata = convertHexChar(hstr);
        lowhexdata = convertHexChar(lstr);

        if ((hexdata == 16) || (lowhexdata == 16)) {
            break;
        } else {
            hexdata = hexdata * 16 + lowhexdata;
        }

        i++;
        senddata[hexdatalen] = (char)hexdata;
        hexdatalen++;
    }

    senddata.resize(hexdatalen);
    return senddata;
}

char QHelpApi::convertHexChar(char ch)
{
    if ((ch >= '0') && (ch <= '9')) {
        return ch - 0x30;
    } else if ((ch >= 'A') && (ch <= 'F')) {
        return ch - 'A' + 10;
    } else if ((ch >= 'a') && (ch <= 'f')) {
        return ch - 'a' + 10;
    } else {
        return (-1);
    }
}

QString QHelpApi::byteArrayToHexStr(const QByteArray &data)
{
    QString temp = "";
    QString hex = data.toHex();

    for (int i = 0; i < hex.length(); i = i + 2) {
        temp += hex.mid(i, 2) + " ";
    }

    return temp.trimmed().toUpper();
}

QString QHelpApi::byteArrayToAsciiStr(const QByteArray &data)
{
    QString temp;
    int len = data.size();

    for (int i = 0; i < len; i++) {
        //0x20为空格,空格以下都是不可见字符
        char b = data.at(i);

        if (0x00 == b) {
            temp += QString("\\NUL");
        } else if (0x01 == b) {
            temp += QString("\\SOH");
        } else if (0x02 == b) {
            temp += QString("\\STX");
        } else if (0x03 == b) {
            temp += QString("\\ETX");
        } else if (0x04 == b) {
            temp += QString("\\EOT");
        } else if (0x05 == b) {
            temp += QString("\\ENQ");
        } else if (0x06 == b) {
            temp += QString("\\ACK");
        } else if (0x07 == b) {
            temp += QString("\\BEL");
        } else if (0x08 == b) {
            temp += QString("\\BS");
        } else if (0x09 == b) {
            temp += QString("\\HT");
        } else if (0x0A == b) {
            temp += QString("\\LF");
        } else if (0x0B == b) {
            temp += QString("\\VT");
        } else if (0x0C == b) {
            temp += QString("\\FF");
        } else if (0x0D == b) {
            temp += QString("\\CR");
        } else if (0x0E == b) {
            temp += QString("\\SO");
        } else if (0x0F == b) {
            temp += QString("\\SI");
        } else if (0x10 == b) {
            temp += QString("\\DLE");
        } else if (0x11 == b) {
            temp += QString("\\DC1");
        } else if (0x12 == b) {
            temp += QString("\\DC2");
        } else if (0x13 == b) {
            temp += QString("\\DC3");
        } else if (0x14 == b) {
            temp += QString("\\DC4");
        } else if (0x15 == b) {
            temp += QString("\\NAK");
        } else if (0x16 == b) {
            temp += QString("\\SYN");
        } else if (0x17 == b) {
            temp += QString("\\ETB");
        } else if (0x18 == b) {
            temp += QString("\\CAN");
        } else if (0x19 == b) {
            temp += QString("\\EM");
        } else if (0x1A == b) {
            temp += QString("\\SUB");
        } else if (0x1B == b) {
            temp += QString("\\ESC");
        } else if (0x1C == b) {
            temp += QString("\\FS");
        } else if (0x1D == b) {
            temp += QString("\\GS");
        } else if (0x1E == b) {
            temp += QString("\\RS");
        } else if (0x1F == b) {
            temp += QString("\\US");
        } else if (0x7F == b) {
            temp += QString("\\x7F");
        } else if (0x5C == b) {
            temp += QString("\\x5C");
        } else if (0x20 >= b) {
            temp += QString("\\x%1").arg(decimalToStrHex((quint8)b));
        } else {
            temp += QString("%1").arg(b);
        }
    }

    return temp.trimmed();
}

QString QHelpApi::decimalToStrHex(int decimal)
{
    QString temp = QString::number(decimal, 16);

    if (temp.length() == 1) {
        temp = "0" + temp;
    }

    return temp;
}

//返回16进制数的ascii码值
char QHelpApi::changefromHex_to_ascii(QString str)
{
    QString str_hex = str;                  //获取十六进制数
    bool ok;
    int dec = str_hex.toInt(&ok,16);          //十六进制转十进制
    char st = (char)dec;                          //十进制数用char类型表示--->必须有此步直接转化不可行
    return st;
}

int QHelpApi::appendHexStr_to_Int(QString str)
{
    str.remove(QChar(' '), Qt::CaseInsensitive);
    bool ok;
    return str.toInt(&ok,16);
}

int QHelpApi::hexStrFlip(QString str)
{
    QStringList list = str.split(" ");
    QString temp = "";
    for(int i = list.size()-1; i>=0; i--)
    {
        temp+= list.at(i);
    }

    int ret = QHelpApi::appendHexStr_to_Int(temp);

    return ret;
}

QString QHelpApi::hexStrFlip(int num)
{
    QString str = hexNumToStr(num,4);

    QStringList list = str.split(" ");
    str = "";
    for(int i = list.size()-1; i>=0; i--)
    {
        str+= list.at(i);
    }

    return str;
}

double QHelpApi::saveDecimalPointNum(double num, int saveNum)
{
    double mult = 1;
    for(int i = 0; i<saveNum; i++)
        mult *= 10;

    int tempNum = static_cast<int>(num*mult);

    double original = tempNum/mult;

    return original;
}

QString QHelpApi::buildModbusDataRead(int sendTimes,int equAddr, int table, int startAddr, int numberOfEntries)
{
    QString str = "";
    str+=hexNumToStr(sendTimes,4);
    str+= " ";
    str+= "00 00 ";
//    QString str = "00 00 00 00 ";//事务处理标识00 00 协议标识符00 00

    QString temp = "";
    temp += hexNumToStr(equAddr);
    temp += " ";
    temp += hexNumToStr(table);
    temp += " ";
    temp += hexNumToStr(startAddr,4);
    temp += " ";
    temp += hexNumToStr(numberOfEntries,4);
    QStringList list = temp.split(" ");

    temp.insert(0,hexNumToStr(list.size(),4)+" ");

    str.append(temp);
//    qDebug()<<str;
    return str;
}

QString QHelpApi::buildModbusDataWrite(int sendTimes,int equAddr, int table, int startAddr, int numberOfEntries, QString writeData)
{
    QString str = buildModbusDataRead(sendTimes,equAddr,table,startAddr,numberOfEntries);
    str+= " ";
    str += hexNumToStr(numberOfEntries*2);
    str+= " ";

    QStringList list = writeData.split(" ");

    if(numberOfEntries*2>list.size())
    {
        for(int i = 0; i<list.size(); i++)
        {
            str+= list.at(i);
            if(i!= list.size()-1)
                str+=" ";
        }
        for(int i = 0; i<numberOfEntries*2-list.size();i++)
        {
            str+=" ";
            str += "00";
        }
    }
    else if(numberOfEntries*2==list.size())
    {
        for(int i = 0; i<list.size(); i++)
        {
            str+= list.at(i);
            if(i!= list.size()-1)
                str+=" ";
        }
    }
    else if(numberOfEntries*2<list.size())
    {
        for(int i = 0; i<numberOfEntries*2; i++)
        {
            str+= list.at(i);
            if(i!= list.size()-1)
                str+=" ";
        }
    }

    return str;
}
//单个数字 如01 长度4  -> 00 01
QString QHelpApi::hexNumToStr(int num, int length)
{
    QString str = QString("%1").arg(num, length, 16, QLatin1Char('0'));

    if(str.size()>2)
    {
        QString temp = "";
        for(int i = 0; i<str.size(); i++)
        {
            temp +=str.at(i);
            if(i%2 != 0 && i!=str.size()-1)
                temp+=" ";
        }
        return temp;
    }

    return str;
}

bool QHelpApi::checkModbusData(QString checkSendstr, QString checkReStr)
{
    QStringList sendList = checkSendstr.split(" ");
    QStringList reList = checkReStr.split(" ");

    for(int i = 0; i<4; i++)//事务处理标识  协议标识 00 00
    {
        if(sendList.at(i) != reList.at(i))
            return false;
    }

    for(int i = 6; i<8; i++)
    {
        if(sendList.at(i) != reList.at(i))
            return false;
    }

    return true;
}

QString QHelpApi::plcDataChoose(int modBusFun,int modBusStart, int modBusStop,
                                int plcByteMove, QString s7PlcDataRegion, int DbBlock)
{
    QString str;
    //公式 x = 65535-stop;  y = 65535-(x+start);
    //商数 x1 = y/8; 余数 x2 = y%8;
    //result = x1+(x2 * 0.1) + plcByteMove;
    if(modBusFun == 0 || modBusFun ==1)
    {
        int quotient1 = (modBusStop-modBusStart)/8;

//        qDebug()<<"quotient1"<<quotient1;

        int quotient2 = (modBusStop-modBusStart)%8;

//        qDebug()<<"quotient2"<<quotient2;
        double s7PlcByteMove = quotient1+(quotient2*0.1)+plcByteMove;
//        qDebug()<<"s7PlcByteMove"<<s7PlcByteMove;

        if(s7PlcDataRegion != "DB")
            str = QString("%1 : %2.0 ~ %3").arg(s7PlcDataRegion).arg(plcByteMove).arg(s7PlcByteMove);
        else
            str = QString("%1%2 : DBX%3.0 ~ %4").arg(s7PlcDataRegion).arg(DbBlock).arg(plcByteMove).arg(s7PlcByteMove);
    }
    else if(modBusFun == 2 || modBusFun == 3)//这部分计算目前无问题
    {
        int move = (modBusStop - modBusStart)*2;

        move += plcByteMove;
        if(s7PlcDataRegion != "DB")
            str = QString("%1W : %2.0 ~ %3").arg(s7PlcDataRegion).arg(plcByteMove).arg(move);
        else
            str = QString("%1%2 : DBW%3.0 ~ %4").arg(s7PlcDataRegion).arg(DbBlock).arg(plcByteMove).arg(move);
    }

    return str;
}
//生成mb文件指令 无行号
QString QHelpApi::modbusDataMapping(int modBusFun, int modBusStart, int modBusStop, QString s7PlcDataRegion, int DbBlock,
                                    int plcByteMove)
{
    QString str;
    str.append(hexNumToStr(modBusFun,2));//功能码
    str.append(" ");
    str.append(hexNumToStr(modBusStart,4));//开始地址
    str.append(" ");
    str.append(hexNumToStr(modBusStop,4));//终止地址
    str.append(" ");
    str.append(hexNumToStr(s7PlcRegionName.key(s7PlcDataRegion),2));//数据区域
    str.append(" ");
    str.append(hexNumToStr(DbBlock,4));//db块号
    str.append(" 00 ");
    str.append(hexNumToStr(plcByteMove,4));//字节偏移
    return str;
}

void QHelpApi::sets7PlcRegionCombox(QComboBox *comBox, int plcRegion)
{
    switch (plcRegion)
    {
    case 0x81:
            comBox->setCurrentIndex(0);
            break;
    case 0x82:
            comBox->setCurrentIndex(1);
            break;
    case 0x83:
            comBox->setCurrentIndex(2);
            break;
    case 0x84:
            comBox->setCurrentIndex(3);
            break;
    case 0x04:
            comBox->setCurrentIndex(4);
            break;
    case 0x05:
            comBox->setCurrentIndex(5);
            break;
    case 0x06:
            comBox->setCurrentIndex(6);
            break;
    case 0x07:
            comBox->setCurrentIndex(7);
            break;
    case 0x80:
            comBox->setCurrentIndex(8);
            break;
    }
}

bool QHelpApi::handleMBFile(QString str, QString &modbusData, QString &s7PlcData)
{
    QVector<int> vecData;
    if(!handleMBFileToVector(str,vecData))
        return false;

    int fun = vecData.at(0);
    QString funName = "";
    switch(fun)
    {
    case 0:
        funName = "Coil";
        break;
    case 1:
        funName = "InputCoil";
        break;
    case 2:
        funName = "InputRegsiter";
        break;
    case 3:
        funName = "HoldingRegsiter";
        break;
    }
    int modbusStartAddr = vecData.at(1);
    int modbusStoptAddr = vecData.at(2);

    modbusData = QString("%1 : %2 ~ %3").arg(funName).arg(modbusStartAddr).arg(modbusStoptAddr);

    int plcRegion = vecData.at(3);

    QString plcRegionName = "";
    QMap<int, QString>::const_iterator tempMap = s7PlcRegionName.find(plcRegion);
    if(tempMap!= s7PlcRegionName.end())
        plcRegionName = tempMap.value();

    int plcByteMove = vecData.at(5);
    int plcDbBlock = vecData.at(4);

//    qDebug()<<"plcByteMove "<<plcByteMove;

    s7PlcData = plcDataChoose(fun,modbusStartAddr,modbusStoptAddr,plcByteMove,plcRegionName,plcDbBlock);
    return true;
}

bool QHelpApi::handleMBFileToVector(QString &str, QVector<int> &vecData)
{
    QStringList list = str.split(" ");
    int j = 0;
    for(int i = 0; i<list.size(); i++)
    {
        if(list.at(i) == "00")
        {
            j++;
        }
    }
    if(j == list.size())
        return false;

    int fun = appendHexStr_to_Int(str.mid(MB_FUN_START,MB_FUN_COUNT));
    int modbusStartAddr = appendHexStr_to_Int(str.mid(MB_START_ADDR_START,MB_START_ADDR_COUNT));
    int modbusStoptAddr = appendHexStr_to_Int(str.mid(MB_STOP_ADDR_START,MB_STOP_ADDR_COUNT));

    int plcRegion = appendHexStr_to_Int(str.mid(MB_PLC_REGION_START,MB_PLC_REGION_COUNT));
    int plcByteMove = appendHexStr_to_Int(str.mid(MB_PLC_BYTE_MOVE_START,MB_PLC_BYTE_MOVE_COUNT));
    int plcDbBlock = appendHexStr_to_Int(str.mid(MB_PLC_DB_START,MB_PLC_DB_COUNT));

    vecData.clear();

    vecData.append(fun);
    vecData.append(modbusStartAddr);
    vecData.append(modbusStoptAddr);
    vecData.append(plcRegion);
    vecData.append(plcDbBlock);
    vecData.append(plcByteMove);


    return true;
}
