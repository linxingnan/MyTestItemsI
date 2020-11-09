/********************************************************************************
** Form generated from reading UI file 'dialogmosbusmapcheck.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMOSBUSMAPCHECK_H
#define UI_DIALOGMOSBUSMAPCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogMosbusMapCheck
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *cBOox_Modbus_DataRegion;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QComboBox *cBOox_S7Plc_DataRegion;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QSpinBox *spBoxByteMove;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spBoxBitMove;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QSpinBox *spBoxDBBlock;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *labMessage2;
    QSpacerItem *verticalSpacer;
    QLabel *labNumAddr;
    QSpacerItem *verticalSpacer_3;
    QLabel *labMessage;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogMosbusMapCheck)
    {
        if (DialogMosbusMapCheck->objectName().isEmpty())
            DialogMosbusMapCheck->setObjectName(QString::fromUtf8("DialogMosbusMapCheck"));
        DialogMosbusMapCheck->resize(711, 398);
        gridLayout = new QGridLayout(DialogMosbusMapCheck);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(DialogMosbusMapCheck);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(50, 0));
        label_3->setMaximumSize(QSize(300, 16777215));

        horizontalLayout->addWidget(label_3);

        cBOox_Modbus_DataRegion = new QComboBox(DialogMosbusMapCheck);
        cBOox_Modbus_DataRegion->addItem(QString());
        cBOox_Modbus_DataRegion->addItem(QString());
        cBOox_Modbus_DataRegion->addItem(QString());
        cBOox_Modbus_DataRegion->addItem(QString());
        cBOox_Modbus_DataRegion->setObjectName(QString::fromUtf8("cBOox_Modbus_DataRegion"));
        cBOox_Modbus_DataRegion->setMinimumSize(QSize(200, 0));
        cBOox_Modbus_DataRegion->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(cBOox_Modbus_DataRegion);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(DialogMosbusMapCheck);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(50, 0));
        label_6->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_2->addWidget(label_6);

        cBOox_S7Plc_DataRegion = new QComboBox(DialogMosbusMapCheck);
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
        cBOox_S7Plc_DataRegion->setMinimumSize(QSize(200, 0));
        cBOox_S7Plc_DataRegion->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(cBOox_S7Plc_DataRegion);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(DialogMosbusMapCheck);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(50, 0));
        label_8->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_3->addWidget(label_8);

        spBoxByteMove = new QSpinBox(DialogMosbusMapCheck);
        spBoxByteMove->setObjectName(QString::fromUtf8("spBoxByteMove"));
        spBoxByteMove->setMinimumSize(QSize(200, 0));
        spBoxByteMove->setMaximumSize(QSize(200, 16777215));
        spBoxByteMove->setMaximum(65535);

        horizontalLayout_3->addWidget(spBoxByteMove);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(DialogMosbusMapCheck);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(50, 0));
        label_4->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_4->addWidget(label_4);

        spBoxBitMove = new QSpinBox(DialogMosbusMapCheck);
        spBoxBitMove->setObjectName(QString::fromUtf8("spBoxBitMove"));
        spBoxBitMove->setMinimumSize(QSize(200, 0));
        spBoxBitMove->setMaximumSize(QSize(200, 16777215));
        spBoxBitMove->setMaximum(27);

        horizontalLayout_4->addWidget(spBoxBitMove);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(DialogMosbusMapCheck);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(50, 0));
        label_7->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_5->addWidget(label_7);

        spBoxDBBlock = new QSpinBox(DialogMosbusMapCheck);
        spBoxDBBlock->setObjectName(QString::fromUtf8("spBoxDBBlock"));
        spBoxDBBlock->setEnabled(false);
        spBoxDBBlock->setMinimumSize(QSize(200, 0));
        spBoxDBBlock->setMaximumSize(QSize(200, 16777215));
        spBoxDBBlock->setMaximum(65535);

        horizontalLayout_5->addWidget(spBoxDBBlock);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout);

        label = new QLabel(DialogMosbusMapCheck);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(30, 30));
        label->setMaximumSize(QSize(60, 60));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/icon/shuangxiangjiantou.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        labMessage2 = new QLabel(DialogMosbusMapCheck);
        labMessage2->setObjectName(QString::fromUtf8("labMessage2"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labMessage2->setFont(font);
        labMessage2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labMessage2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        labNumAddr = new QLabel(DialogMosbusMapCheck);
        labNumAddr->setObjectName(QString::fromUtf8("labNumAddr"));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        labNumAddr->setFont(font1);
        labNumAddr->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labNumAddr);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_6->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 3);

        labMessage = new QLabel(DialogMosbusMapCheck);
        labMessage->setObjectName(QString::fromUtf8("labMessage"));

        gridLayout->addWidget(labMessage, 1, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(283, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButton = new QPushButton(DialogMosbusMapCheck);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(150, 40));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(242, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);


        retranslateUi(DialogMosbusMapCheck);

        cBOox_S7Plc_DataRegion->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogMosbusMapCheck);
    } // setupUi

    void retranslateUi(QDialog *DialogMosbusMapCheck)
    {
        DialogMosbusMapCheck->setWindowTitle(QCoreApplication::translate("DialogMosbusMapCheck", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("DialogMosbusMapCheck", "\346\230\240\345\260\204\345\214\272\345\237\237\357\274\232", nullptr));
        cBOox_Modbus_DataRegion->setItemText(0, QCoreApplication::translate("DialogMosbusMapCheck", "Coil\357\274\2100\345\214\272\357\274\211", nullptr));
        cBOox_Modbus_DataRegion->setItemText(1, QCoreApplication::translate("DialogMosbusMapCheck", "InputCoil\357\274\2101\345\214\272\357\274\211", nullptr));
        cBOox_Modbus_DataRegion->setItemText(2, QCoreApplication::translate("DialogMosbusMapCheck", "InputRegsiter\357\274\2103\345\214\272\357\274\211", nullptr));
        cBOox_Modbus_DataRegion->setItemText(3, QCoreApplication::translate("DialogMosbusMapCheck", "HoldingRegsiter\357\274\2104\345\214\272\357\274\211", nullptr));

        label_6->setText(QCoreApplication::translate("DialogMosbusMapCheck", "s7\346\225\260\346\215\256\345\214\272\357\274\232", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(0, QCoreApplication::translate("DialogMosbusMapCheck", "I", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(1, QCoreApplication::translate("DialogMosbusMapCheck", "Q", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(2, QCoreApplication::translate("DialogMosbusMapCheck", "M", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(3, QCoreApplication::translate("DialogMosbusMapCheck", "DB", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(4, QCoreApplication::translate("DialogMosbusMapCheck", "S7200-S", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(5, QCoreApplication::translate("DialogMosbusMapCheck", "S7200-SM", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(6, QCoreApplication::translate("DialogMosbusMapCheck", "S7200-AI", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(7, QCoreApplication::translate("DialogMosbusMapCheck", "S7200-AQ", nullptr));
        cBOox_S7Plc_DataRegion->setItemText(8, QCoreApplication::translate("DialogMosbusMapCheck", "S7300-PW", nullptr));

        label_8->setText(QCoreApplication::translate("DialogMosbusMapCheck", "\345\255\227\350\212\202\345\201\217\347\247\273\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("DialogMosbusMapCheck", "\344\275\215\345\201\217\347\247\273\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("DialogMosbusMapCheck", "DB\345\235\227\345\217\267\357\274\232", nullptr));
        label->setText(QString());
        labMessage2->setText(QCoreApplication::translate("DialogMosbusMapCheck", "\345\257\271\345\272\224\347\232\204Modbus\346\230\240\345\260\204\345\234\260\345\235\200", nullptr));
        labNumAddr->setText(QCoreApplication::translate("DialogMosbusMapCheck", "XXXXXXX", nullptr));
        labMessage->setText(QCoreApplication::translate("DialogMosbusMapCheck", "\346\263\250\346\204\217\357\274\232\345\257\271\344\272\216S7-200PLC\350\200\214\350\250\200,V\345\214\272\345\257\271\345\272\224DB1\343\200\202\345\201\217\347\247\273\345\234\260\345\235\200\344\273\245\345\255\227\350\212\202\344\270\272\345\215\225\344\275\215\343\200\202", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogMosbusMapCheck", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogMosbusMapCheck: public Ui_DialogMosbusMapCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMOSBUSMAPCHECK_H
