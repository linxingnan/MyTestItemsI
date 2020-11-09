#include "maindata.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainData w;
    w.setWindowTitle(QString("串口调试助手1.0 （BY:LIN小兴）"));
    w.show();
    return a.exec();
}
