#include "qhelper.h"
#include <QDebug>
QHelper::QHelper()
{

}

QByteArray QHelper::hexStrToByteArray(const QString &str)
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

char QHelper::convertHexChar(char ch)
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

QString QHelper::byteArrayToHexStr(const QByteArray &data)
{
    QString temp = "";
    QString hex = data.toHex();

    for (int i = 0; i < hex.length(); i = i + 2) {
        temp += hex.mid(i, 2) + " ";
    }

    return temp.trimmed().toUpper();
}

QString QHelper::byteToHex(const QByteArray &data)
{
    QString hex = data.toHex();
    QString ouput = "";
    for(int i = 0; i<hex.length(); i+=2)
    {
        ouput+=hex.mid(i,2)+" ";
    }
    return ouput;
}
//hex :true  noHex:false
bool QHelper::checkHex(const QString &str)
{
    int len = str.length();

    for(int i=0;i<len;i++)
    {
        if(!checkHexChar(str.at(i).toLatin1()))
        {
            return false;
        }
    }
    return true;
}

bool QHelper::checkHexChar(char ch)
{
    if ((ch >= '0') && (ch <= '9')) {
        return true;
    } else if ((ch >= 'A') && (ch <= 'F')) {
        return true;
    } else if ((ch >= 'a') && (ch <= 'f')) {
        return true;
    } else {
        return false;
    }
}

QString QHelper::displayHexStr(const QString &input_data)
{
    input_data.toLatin1().toHex();
}
