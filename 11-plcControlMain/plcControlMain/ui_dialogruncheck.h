/********************************************************************************
** Form generated from reading UI file 'dialogruncheck.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGRUNCHECK_H
#define UI_DIALOGRUNCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogRunCheck
{
public:
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLabel *labPlcSerialData;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLabel *labPlcSerialChatCount;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLabel *labPlcSerislCorReCount;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QLabel *labPlcSerialErCount;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QLabel *labHmiSerialData;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QLabel *labHmiChatCount;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_19;
    QLabel *labHmiSerislCorReCount;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_21;
    QLabel *labHmiSerialErCount;
    QLabel *label_3;
    QLabel *label;
    QLabel *labWorkMode;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labPlcMode;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_27;
    QLabel *labTcpPort;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_29;
    QLabel *labModbusOpenNum;
    QWidget *widget_3;
    QGridLayout *gridLayout_5;
    QLabel *label_39;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_40;
    QLabel *labTcpLinkNum;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_42;
    QLabel *labNetChatCount;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_44;
    QLabel *labNetCorReCount;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_46;
    QLabel *labNetErCount;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_23;
    QLabel *labSysRunTime;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_25;
    QLabel *label_26;

    void setupUi(QDialog *DialogRunCheck)
    {
        if (DialogRunCheck->objectName().isEmpty())
            DialogRunCheck->setObjectName(QString::fromUtf8("DialogRunCheck"));
        DialogRunCheck->resize(820, 595);
        DialogRunCheck->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout_7 = new QGridLayout(DialogRunCheck);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox = new QGroupBox(DialogRunCheck);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        labPlcSerialData = new QLabel(groupBox);
        labPlcSerialData->setObjectName(QString::fromUtf8("labPlcSerialData"));
        labPlcSerialData->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labPlcSerialData);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        labPlcSerialChatCount = new QLabel(groupBox);
        labPlcSerialChatCount->setObjectName(QString::fromUtf8("labPlcSerialChatCount"));
        labPlcSerialChatCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labPlcSerialChatCount);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_3->addWidget(label_10);

        labPlcSerislCorReCount = new QLabel(groupBox);
        labPlcSerislCorReCount->setObjectName(QString::fromUtf8("labPlcSerislCorReCount"));
        labPlcSerislCorReCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labPlcSerislCorReCount);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_4->addWidget(label_12);

        labPlcSerialErCount = new QLabel(groupBox);
        labPlcSerialErCount->setObjectName(QString::fromUtf8("labPlcSerialErCount"));
        labPlcSerialErCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(labPlcSerialErCount);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_3->addLayout(verticalLayout, 3, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_5->addWidget(label_15);

        labHmiSerialData = new QLabel(groupBox);
        labHmiSerialData->setObjectName(QString::fromUtf8("labHmiSerialData"));
        labHmiSerialData->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(labHmiSerialData);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_6->addWidget(label_17);

        labHmiChatCount = new QLabel(groupBox);
        labHmiChatCount->setObjectName(QString::fromUtf8("labHmiChatCount"));
        labHmiChatCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(labHmiChatCount);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_7->addWidget(label_19);

        labHmiSerislCorReCount = new QLabel(groupBox);
        labHmiSerislCorReCount->setObjectName(QString::fromUtf8("labHmiSerislCorReCount"));
        labHmiSerislCorReCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(labHmiSerislCorReCount);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_8->addWidget(label_21);

        labHmiSerialErCount = new QLabel(groupBox);
        labHmiSerialErCount->setObjectName(QString::fromUtf8("labHmiSerialErCount"));
        labHmiSerialErCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(labHmiSerialErCount);


        verticalLayout_2->addLayout(horizontalLayout_8);


        gridLayout_3->addLayout(verticalLayout_2, 5, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        labWorkMode = new QLabel(groupBox);
        labWorkMode->setObjectName(QString::fromUtf8("labWorkMode"));
        labWorkMode->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labWorkMode, 0, 1, 1, 1);

        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(139, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget, 2, 0, 1, 2);

        labPlcMode = new QLabel(groupBox);
        labPlcMode->setObjectName(QString::fromUtf8("labPlcMode"));
        labPlcMode->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labPlcMode, 1, 1, 1, 1);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_14 = new QLabel(widget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget_2, 4, 0, 1, 2);


        gridLayout_7->addWidget(groupBox, 0, 0, 2, 1);

        groupBox_2 = new QGroupBox(DialogRunCheck);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_11->addWidget(label_27);

        labTcpPort = new QLabel(groupBox_2);
        labTcpPort->setObjectName(QString::fromUtf8("labTcpPort"));

        horizontalLayout_11->addWidget(labTcpPort);


        gridLayout_6->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_12->addWidget(label_29);

        labModbusOpenNum = new QLabel(groupBox_2);
        labModbusOpenNum->setObjectName(QString::fromUtf8("labModbusOpenNum"));

        horizontalLayout_12->addWidget(labModbusOpenNum);


        gridLayout_6->addLayout(horizontalLayout_12, 1, 0, 1, 1);

        widget_3 = new QWidget(groupBox_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(widget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_39 = new QLabel(widget_3);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_5->addWidget(label_39, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(465, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 1, 1, 1);


        gridLayout_6->addWidget(widget_3, 2, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_40 = new QLabel(groupBox_2);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_17->addWidget(label_40);

        labTcpLinkNum = new QLabel(groupBox_2);
        labTcpLinkNum->setObjectName(QString::fromUtf8("labTcpLinkNum"));
        labTcpLinkNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(labTcpLinkNum);


        verticalLayout_3->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_42 = new QLabel(groupBox_2);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        horizontalLayout_18->addWidget(label_42);

        labNetChatCount = new QLabel(groupBox_2);
        labNetChatCount->setObjectName(QString::fromUtf8("labNetChatCount"));
        labNetChatCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(labNetChatCount);


        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_44 = new QLabel(groupBox_2);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        horizontalLayout_19->addWidget(label_44);

        labNetCorReCount = new QLabel(groupBox_2);
        labNetCorReCount->setObjectName(QString::fromUtf8("labNetCorReCount"));
        labNetCorReCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(labNetCorReCount);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_46 = new QLabel(groupBox_2);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        horizontalLayout_20->addWidget(label_46);

        labNetErCount = new QLabel(groupBox_2);
        labNetErCount->setObjectName(QString::fromUtf8("labNetErCount"));
        labNetErCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(labNetErCount);


        verticalLayout_3->addLayout(horizontalLayout_20);


        gridLayout_6->addLayout(verticalLayout_3, 3, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(DialogRunCheck);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_9->addWidget(label_23);

        labSysRunTime = new QLabel(groupBox_3);
        labSysRunTime->setObjectName(QString::fromUtf8("labSysRunTime"));

        horizontalLayout_9->addWidget(labSysRunTime);


        gridLayout_4->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_10->addWidget(label_25);

        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_10->addWidget(label_26);


        gridLayout_4->addLayout(horizontalLayout_10, 1, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 1, 1, 1, 1);


        retranslateUi(DialogRunCheck);

        QMetaObject::connectSlotsByName(DialogRunCheck);
    } // setupUi

    void retranslateUi(QDialog *DialogRunCheck)
    {
        DialogRunCheck->setWindowTitle(QCoreApplication::translate("DialogRunCheck", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogRunCheck", "\344\270\262\350\241\214\346\200\273\347\272\277\346\216\245\345\217\243\344\277\241\346\201\257", nullptr));
        label_6->setText(QCoreApplication::translate("DialogRunCheck", "\344\270\262\350\241\214\351\200\232\344\277\241\345\217\202\346\225\260\357\274\232", nullptr));
        labPlcSerialData->setText(QCoreApplication::translate("DialogRunCheck", "\344\270\262\350\241\214\351\200\232\344\277\241\345\217\202\346\225\260", nullptr));
        label_8->setText(QCoreApplication::translate("DialogRunCheck", "\351\200\232\350\256\257\350\257\267\346\261\202\346\200\273\346\225\260\357\274\232", nullptr));
        labPlcSerialChatCount->setText(QCoreApplication::translate("DialogRunCheck", "0", nullptr));
        label_10->setText(QCoreApplication::translate("DialogRunCheck", "\346\255\243\347\241\256\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        labPlcSerislCorReCount->setText(QCoreApplication::translate("DialogRunCheck", "0", nullptr));
        label_12->setText(QCoreApplication::translate("DialogRunCheck", "\351\224\231\350\257\257\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        labPlcSerialErCount->setText(QCoreApplication::translate("DialogRunCheck", "0", nullptr));
        label_15->setText(QCoreApplication::translate("DialogRunCheck", "\344\270\262\350\241\214\351\200\232\344\277\241\345\217\202\346\225\260\357\274\232", nullptr));
        labHmiSerialData->setText(QCoreApplication::translate("DialogRunCheck", "\344\270\262\350\241\214\351\200\232\344\277\241\345\217\202\346\225\260", nullptr));
        label_17->setText(QCoreApplication::translate("DialogRunCheck", "\351\200\232\350\256\257\350\257\267\346\261\202\346\200\273\346\225\260\357\274\232", nullptr));
        labHmiChatCount->setText(QCoreApplication::translate("DialogRunCheck", "0", nullptr));
        label_19->setText(QCoreApplication::translate("DialogRunCheck", "\346\255\243\347\241\256\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        labHmiSerislCorReCount->setText(QCoreApplication::translate("DialogRunCheck", "0", nullptr));
        label_21->setText(QCoreApplication::translate("DialogRunCheck", "\351\224\231\350\257\257\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        labHmiSerialErCount->setText(QCoreApplication::translate("DialogRunCheck", "0", nullptr));
        label_3->setText(QCoreApplication::translate("DialogRunCheck", "PLC\345\236\213\345\217\267\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("DialogRunCheck", "\347\263\273\347\273\237\346\250\241\345\274\217\357\274\232", nullptr));
        labWorkMode->setText(QCoreApplication::translate("DialogRunCheck", "--\345\215\217\350\256\256", nullptr));
        label_5->setText(QCoreApplication::translate("DialogRunCheck", "PLC\347\253\257", nullptr));
        labPlcMode->setText(QCoreApplication::translate("DialogRunCheck", "PLC\345\236\213\345\217\267\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("DialogRunCheck", "HMI\347\253\257", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DialogRunCheck", "\344\273\245\345\244\252\347\275\221\346\216\245\345\217\243\344\277\241\346\201\257", nullptr));
        label_27->setText(QCoreApplication::translate("DialogRunCheck", "\350\256\276\345\244\207TCP\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        labTcpPort->setText(QCoreApplication::translate("DialogRunCheck", "TextLabel", nullptr));
        label_29->setText(QCoreApplication::translate("DialogRunCheck", "ModbusTcp\345\274\200\346\224\276\346\225\260\357\274\232", nullptr));
        labModbusOpenNum->setText(QCoreApplication::translate("DialogRunCheck", "TextLabel", nullptr));
        label_39->setText(QCoreApplication::translate("DialogRunCheck", "\344\273\245\345\244\252\347\275\221\351\200\232\350\256\257\357\274\210TCP/UDP\357\274\211", nullptr));
        label_40->setText(QCoreApplication::translate("DialogRunCheck", "TCP\350\277\236\346\216\245\346\225\260\357\274\232", nullptr));
        labTcpLinkNum->setText(QCoreApplication::translate("DialogRunCheck", "TCP\350\277\236\346\216\245\346\225\260", nullptr));
        label_42->setText(QCoreApplication::translate("DialogRunCheck", "\351\200\232\350\256\257\350\257\267\346\261\202\346\200\273\346\225\260\357\274\232", nullptr));
        labNetChatCount->setText(QCoreApplication::translate("DialogRunCheck", "0", nullptr));
        label_44->setText(QCoreApplication::translate("DialogRunCheck", "\346\255\243\347\241\256\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        labNetCorReCount->setText(QCoreApplication::translate("DialogRunCheck", "0", nullptr));
        label_46->setText(QCoreApplication::translate("DialogRunCheck", "\351\224\231\350\257\257\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        labNetErCount->setText(QCoreApplication::translate("DialogRunCheck", "0", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DialogRunCheck", "\347\263\273\347\273\237\350\277\220\350\241\214\344\277\241\346\201\257", nullptr));
        label_23->setText(QCoreApplication::translate("DialogRunCheck", "\347\263\273\347\273\237\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", nullptr));
        labSysRunTime->setText(QCoreApplication::translate("DialogRunCheck", "TextLabel", nullptr));
        label_25->setText(QCoreApplication::translate("DialogRunCheck", "\344\270\212\346\254\241\345\206\205\351\203\250\346\225\205\351\232\234\357\274\232", nullptr));
        label_26->setText(QCoreApplication::translate("DialogRunCheck", "\346\227\240\346\225\205\351\232\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRunCheck: public Ui_DialogRunCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGRUNCHECK_H
