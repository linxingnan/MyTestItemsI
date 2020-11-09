#ifndef QHELPER_H
#define QHELPER_H

#include <QString>
class QHelper
{
public:
    QHelper();
public:
    static QByteArray hexStrToByteArray(const QString &str);

    static char convertHexChar(char ch);

    static QString byteArrayToHexStr(const QByteArray &data);

    static QString byteToHex(const QByteArray &data);
    static bool checkHex(const QString &str);
    static bool checkHexChar(char ch);

    static QString displayHexStr(const QString &input_data);
};

#endif // QHELPER_H
