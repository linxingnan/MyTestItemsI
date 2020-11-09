/********************************************************************************
** Form generated from reading UI file 'dialogmodbusmapblock.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODBUSMAPBLOCK_H
#define UI_DIALOGMODBUSMAPBLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogModbusMapBlock
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *cBOox_Modbus_DataRegion;
    QLabel *label_4;
    QSpinBox *spBox_Mosbus_startsAddr;
    QLabel *label_5;
    QSpinBox *spBox_Mosbus_stopAddr;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QComboBox *cBOox_S7Plc_DataRegion;
    QLabel *label_7;
    QSpinBox *spBox_S7Plc_DBBlock;
    QLabel *label_8;
    QSpinBox *spBox_S7Plc_byteMove;
    QPushButton *puBCheck;
    QLabel *label_2;
    QPushButton *puBTrue;

    void setupUi(QDialog *DialogModbusMapBlock)
    {
        if (DialogModbusMapBlock->objectName().isEmpty())
            DialogModbusMapBlock->setObjectName(QString::fromUtf8("DialogModbusMapBlock"));
        DialogModbusMapBlock->resize(650, 584);
        gridLayout_3 = new QGridLayout(DialogModbusMapBlock);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_9 = new QLabel(DialogModbusMapBlock);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 150));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);
        label_9->setWordWrap(true);

        gridLayout_3->addWidget(label_9, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(DialogModbusMapBlock);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        cBOox_Modbus_DataRegion = new QComboBox(groupBox);
        cBOox_Modbus_DataRegion->addItem(QString());
        cBOox_Modbus_DataRegion->addItem(QString());
        cBOox_Modbus_DataRegion->addItem(QString());
        cBOox_Modbus_DataRegion->addItem(QString());
        cBOox_Modbus_DataRegion->setObjectName(QString::fromUtf8("cBOox_Modbus_DataRegion"));

        gridLayout->addWidget(cBOox_Modbus_DataRegion, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        spBox_Mosbus_startsAddr = new QSpinBox(groupBox);
        spBox_Mosbus_startsAddr->setObjectName(QString::fromUtf8("spBox_Mosbus_startsAddr"));
        spBox_Mosbus_startsAddr->setMaximum(65535);

        gridLayout->addWidget(spBox_Mosbus_startsAddr, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        spBox_Mosbus_stopAddr = new QSpinBox(groupBox);
        spBox_Mosbus_stopAddr->setObjectName(QString::fromUtf8("spBox_Mosbus_stopAddr"));
        spBox_Mosbus_stopAddr->setMaximum(65535);
        spBox_Mosbus_stopAddr->setValue(65535);

        gridLayout->addWidget(spBox_Mosbus_stopAddr, 2, 1, 1, 1);


        horizontalLayout->addWidget(groupBox);

        label = new QLabel(DialogModbusMapBlock);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(30, 30));
        label->setMaximumSize(QSize(60, 60));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/icon/shuangxiangjiantou.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        groupBox_2 = new QGroupBox(DialogModbusMapBlock);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        cBOox_S7Plc_DataRegion = new QComboBox(groupBox_2);
        cBOox_S7Plc_DataRegion->addItem(QString());
        cBOox_S7Plc_DataRegion->addItem(QString());
        cBOox_S7Plc_DataRegion->addItem(QString());
        cBOox_S7Plc_DataRegion->addItem(QString());
        cBOox_S7Plc_DataRegion->addItem(QString());
        cBOox_S7Plc_DataRegion->addItem(QString());
        cBOox_S7Plc_DataRegion->addItem(QString());
        cBOox_S7Plc_DataRegion->addItem(QString());
        cBOox_S7Plc_DataRegion->addItem(QString());
        cBOox_S7Plc_DataRegion->setObjectName(QString::fromUtf8("cBOox_S7Plc_DataRegion"));

        gridLayout_2->addWidget(cBOox_S7Plc_DataRegion, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        spBox_S7Plc_DBBlock = new QSpinBox(groupBox_2);
        spBox_S7Plc_DBBlock->setObjectName(QString::fromUtf8("spBox_S7Plc_DBBlock"));
        spBox_S7Plc_DBBlock->setEnabled(true);
        spBox_S7Plc_DBBlock->setMaximum(65535);

        gridLayout_2->addWidget(spBox_S7Plc_DBBlock, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        spBox_S7Plc_byteMove = new QSpinBox(groupBox_2);
        spBox_S7Plc_byteMove->setObjectName(QString::fromUtf8("spBox_S7Plc_byteMove"));
        spBox_S7Plc_byteMove->setMaximum(65535);

        gridLayout_2->addWidget(spBox_S7Plc_byteMove, 2, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_2);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 2);

        puBCheck = new QPushButton(DialogModbusMapBlock);
        puBCheck->setObjectName(QString::fromUtf8("puBCheck"));
        puBCheck->setMinimumSize(QSize(60, 40));
        puBCheck->setMaximumSize(QSize(90, 70));

        gridLayout_3->addWidget(puBCheck, 1, 0, 1, 1);

        label_2 = new QLabel(DialogModbusMapBlock);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_2->setWordWrap(false);

        gridLayout_3->addWidget(label_2, 2, 0, 1, 2);

        puBTrue = new QPushButton(DialogModbusMapBlock);
        puBTrue->setObjectName(QString::fromUtf8("puBTrue"));
        puBTrue->setMinimumSize(QSize(60, 40));
        puBTrue->setMaximumSize(QSize(90, 70));

        gridLayout_3->addWidget(puBTrue, 1, 1, 1, 1);


        retranslateUi(DialogModbusMapBlock);
        QObject::connect(puBTrue, SIGNAL(clicked()), DialogModbusMapBlock, SLOT(accept()));

        cBOox_S7Plc_DataRegion->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogModbusMapBlock);
    } // setupUi

    void retranslateUi(QDialog *DialogModbusMapBlock)
    {
        DialogModbusMapBlock->setWindowTitle(QCoreApplication::translate("DialogModbusMapBlock", "Dialog", nullptr));
        label_9->setText(QCoreApplication::translate("DialogModbusMapBlock", "\350\247\204\345\210\231\357\274\232\n"
"1\343\200\201\345\257\271\344\272\216\345\255\227\346\230\240\345\260\204(3\345\214\272\345\222\2144\345\214\272)\357\274\214\345\277\205\351\241\273\344\273\245125\344\270\252\345\255\227\344\270\272\345\215\225\344\275\215\357\274\214\350\277\233\350\241\214\345\235\227\346\230\240\345\260\204\357\274\233\n"
"2\343\200\201\345\257\271\344\272\216\344\275\215\346\230\240\345\260\204(0\345\214\272\345\222\2141\345\214\272)\357\274\214\345\277\205\351\241\273\344\273\2452000\344\270\252\344\275\215\344\270\272\345\215\225\344\275\215\357\274\214\350\277\233\350\241\214\345\235\227\346\230\240\345\260\204\357\274\233\n"
"3\343\200\201\350\246\201\345\205\205\345\210\206\350\200\203\350\231\221\347\233\270\350\277\236\347\273\255\347\232\204\344\270\244\344\270\252\346\230\240\345\260\204\345\235\227\344\271\213\351\227\260\347\232\204\350\267\250\345\214\272\351\227\256\351\242\230\357\274\214\346\211\200\344\273\245\345\277\205\351\241\273\344\277\235\350\257\201\344\270"
                        "\244\344\270\252\350\277\236\347\273\255\347\232\204\346\230\240\345\260\204\345\235\227\344\271\213\345\255\230\345\234\250\344\270\200\344\270\252\346\230\240\345\260\204\345\235\227\345\244\247\345\260\217\347\232\204\347\251\272\351\227\264\357\274\214\351\230\262\346\255\242\350\267\250\345\214\272\357\274\233\n"
"4\343\200\201\351\222\210\345\257\271\344\270\212\350\277\260\351\227\256\351\242\230,\345\217\257\344\273\245\351\207\207\347\224\250\342\200\234\350\207\252\345\212\250\345\210\206\351\205\215\346\230\240\345\260\204\345\234\260\345\235\200\342\200\235\347\232\204\346\226\271\346\263\225,\350\277\233\350\241\214\350\247\204\351\201\277\357\274\233", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogModbusMapBlock", "Modbus\345\234\260\345\235\200\345\214\272", nullptr));
        label_3->setText(QCoreApplication::translate("DialogModbusMapBlock", "\346\225\260\346\215\256\345\214\272\345\237\237\357\274\232", nullptr));
        cBOox_Modbus_DataRegion->setItemText(0, QCoreApplication::translate("DialogModbusMapBlock", "Coil", nullptr));
        cBOox_Modbus_DataRegion->setItemText(1, QCoreApplication::translate("DialogModbusMapBlock", "InputCoil", nullptr));
        cBOox_Modbus_DataRegion->setItemText(2, QCoreApplication::translate("DialogModbusMapBlock", "InputRegsiter", nullptr));
        cBOox_Modbus_DataRegion->setItemText(3, QCoreApplication::translate("DialogModbusMapBlock", "HoldingRegsiter", nullptr));

        label_4->setText(QCoreApplication::translate("DialogModbusMapBlock", "\350\265\267\345\247\213\345\234\260\345\235\200\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("DialogModbusMapBlock", "\347\273\210\346\255\242\345\234\260\345\235\200\357\274\232", nullptr));
        label->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("DialogModbusMapBlock", "S7PLC\345\234\260\345\235\200\345\214\272", nullptr));
        label_6->setText(QCoreApplication::translate("DialogModbusMapBlock", "\346\225\260\346\215\256\345\214\272\345\237\237\357\274\232", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(0, QCoreApplication::translate("DialogModbusMapBlock", "I", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(1, QCoreApplication::translate("DialogModbusMapBlock", "Q", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(2, QCoreApplication::translate("DialogModbusMapBlock", "M", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(3, QCoreApplication::translate("DialogModbusMapBlock", "DB", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(4, QCoreApplication::translate("DialogModbusMapBlock", "S7200-S", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(5, QCoreApplication::translate("DialogModbusMapBlock", "S7200-SM", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(6, QCoreApplication::translate("DialogModbusMapBlock", "S7200-AI", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(7, QCoreApplication::translate("DialogModbusMapBlock", "S7200-AQ", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(8, QCoreApplication::translate("DialogModbusMapBlock", "S7300-PW", nullptr));

        label_7->setText(QCoreApplication::translate("DialogModbusMapBlock", "DB\345\235\227\345\217\267\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("DialogModbusMapBlock", "\345\255\227\350\212\202\345\201\217\347\247\273\357\274\232", nullptr));
        puBCheck->setText(QCoreApplication::translate("DialogModbusMapBlock", "\346\243\200\346\237\245", nullptr));
        label_2->setText(QCoreApplication::translate("DialogModbusMapBlock", "\346\263\250\346\204\217\357\274\232\345\257\271\344\272\216S7-200PLC\350\200\214\350\250\200\357\274\214V\345\214\272\345\257\271\345\272\224DB1\343\200\202\345\201\217\347\247\273\345\234\260\345\235\200\344\273\245\345\255\227\350\212\202\344\270\272\345\215\225\344\275\215\343\200\202", nullptr));
        puBTrue->setText(QCoreApplication::translate("DialogModbusMapBlock", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogModbusMapBlock: public Ui_DialogModbusMapBlock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODBUSMAPBLOCK_H
