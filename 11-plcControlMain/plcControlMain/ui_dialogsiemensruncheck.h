/********************************************************************************
** Form generated from reading UI file 'dialogsiemensruncheck.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSIEMENSRUNCHECK_H
#define UI_DIALOGSIEMENSRUNCHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSiemensRunCheck
{
public:
    QGridLayout *gridLayout_6;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_6;
    QProgressBar *progressBar;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLabel *lab_s7_TrueChatCount;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_17;
    QLabel *lab_s7_NowSerialData;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLabel *lab_s7_Status;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QLabel *lab_s7_ErrCount;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLabel *lab_s7_WorkMode;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QLabel *lab_s7_AutoSerialData;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLabel *lab_s7_ChatCount;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_40;
    QLabel *lab_Net_TcpLinkNum;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_27;
    QLabel *lab_Net_s7TcpPort;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_29;
    QLabel *lab_Net_ModbusLinkNum;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_30;
    QLabel *lab_s7_BcNetS7LinkNum;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_42;
    QLabel *lab_Net_ChatCount;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_44;
    QLabel *lab_Net_TrueChatCount;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_46;
    QLabel *lab_Net_ErrCount;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_5;
    QLabel *lab_Hmi_WorkMode;
    QHBoxLayout *horizontalLayout;
    QLabel *label_16;
    QLabel *lab_Hmi_SerialData;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_18;
    QLabel *lab_Hmi_ChatCount;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_19;
    QLabel *lab_Hmi_trueChatCount;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_21;
    QLabel *lab_Hmi_ErrCount;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_23;
    QLabel *lab_Sys_RunTime;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_25;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_47;
    QLabel *lab_Sys_chatCode;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label_4;

    void setupUi(QDialog *DialogSiemensRunCheck)
    {
        if (DialogSiemensRunCheck->objectName().isEmpty())
            DialogSiemensRunCheck->setObjectName(QString::fromUtf8("DialogSiemensRunCheck"));
        DialogSiemensRunCheck->resize(1003, 776);
        gridLayout_6 = new QGridLayout(DialogSiemensRunCheck);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        widget = new QWidget(DialogSiemensRunCheck);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 40));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(471, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(140, 30));

        horizontalLayout_23->addWidget(label_6);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximumSize(QSize(150, 30));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);

        horizontalLayout_23->addWidget(progressBar);


        gridLayout_5->addLayout(horizontalLayout_23, 0, 2, 1, 1);


        gridLayout_6->addWidget(widget, 0, 0, 1, 3);

        groupBox = new QGroupBox(DialogSiemensRunCheck);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_3->addWidget(label_10);

        lab_s7_TrueChatCount = new QLabel(groupBox);
        lab_s7_TrueChatCount->setObjectName(QString::fromUtf8("lab_s7_TrueChatCount"));
        lab_s7_TrueChatCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lab_s7_TrueChatCount);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_8->addWidget(label_17);

        lab_s7_NowSerialData = new QLabel(groupBox);
        lab_s7_NowSerialData->setObjectName(QString::fromUtf8("lab_s7_NowSerialData"));
        lab_s7_NowSerialData->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(lab_s7_NowSerialData);


        gridLayout->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        lab_s7_Status = new QLabel(groupBox);
        lab_s7_Status->setObjectName(QString::fromUtf8("lab_s7_Status"));
        lab_s7_Status->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lab_s7_Status);


        gridLayout->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_4->addWidget(label_12);

        lab_s7_ErrCount = new QLabel(groupBox);
        lab_s7_ErrCount->setObjectName(QString::fromUtf8("lab_s7_ErrCount"));
        lab_s7_ErrCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lab_s7_ErrCount);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        lab_s7_WorkMode = new QLabel(groupBox);
        lab_s7_WorkMode->setObjectName(QString::fromUtf8("lab_s7_WorkMode"));
        lab_s7_WorkMode->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(lab_s7_WorkMode);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_5->addWidget(label_15);

        lab_s7_AutoSerialData = new QLabel(groupBox);
        lab_s7_AutoSerialData->setObjectName(QString::fromUtf8("lab_s7_AutoSerialData"));
        lab_s7_AutoSerialData->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lab_s7_AutoSerialData);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        lab_s7_ChatCount = new QLabel(groupBox);
        lab_s7_ChatCount->setObjectName(QString::fromUtf8("lab_s7_ChatCount"));
        lab_s7_ChatCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lab_s7_ChatCount);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);


        gridLayout_6->addWidget(groupBox, 1, 0, 2, 1);

        groupBox_2 = new QGroupBox(DialogSiemensRunCheck);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_40 = new QLabel(groupBox_2);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_17->addWidget(label_40);

        lab_Net_TcpLinkNum = new QLabel(groupBox_2);
        lab_Net_TcpLinkNum->setObjectName(QString::fromUtf8("lab_Net_TcpLinkNum"));
        lab_Net_TcpLinkNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(lab_Net_TcpLinkNum);


        gridLayout_2->addLayout(horizontalLayout_17, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_11->addWidget(label_27);

        lab_Net_s7TcpPort = new QLabel(groupBox_2);
        lab_Net_s7TcpPort->setObjectName(QString::fromUtf8("lab_Net_s7TcpPort"));
        lab_Net_s7TcpPort->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lab_Net_s7TcpPort);


        gridLayout_2->addLayout(horizontalLayout_11, 1, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_12->addWidget(label_29);

        lab_Net_ModbusLinkNum = new QLabel(groupBox_2);
        lab_Net_ModbusLinkNum->setObjectName(QString::fromUtf8("lab_Net_ModbusLinkNum"));
        lab_Net_ModbusLinkNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(lab_Net_ModbusLinkNum);


        gridLayout_2->addLayout(horizontalLayout_12, 2, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_13->addWidget(label_30);

        lab_s7_BcNetS7LinkNum = new QLabel(groupBox_2);
        lab_s7_BcNetS7LinkNum->setObjectName(QString::fromUtf8("lab_s7_BcNetS7LinkNum"));
        lab_s7_BcNetS7LinkNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(lab_s7_BcNetS7LinkNum);


        gridLayout_2->addLayout(horizontalLayout_13, 3, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_42 = new QLabel(groupBox_2);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        horizontalLayout_18->addWidget(label_42);

        lab_Net_ChatCount = new QLabel(groupBox_2);
        lab_Net_ChatCount->setObjectName(QString::fromUtf8("lab_Net_ChatCount"));
        lab_Net_ChatCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(lab_Net_ChatCount);


        gridLayout_2->addLayout(horizontalLayout_18, 4, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_44 = new QLabel(groupBox_2);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        horizontalLayout_19->addWidget(label_44);

        lab_Net_TrueChatCount = new QLabel(groupBox_2);
        lab_Net_TrueChatCount->setObjectName(QString::fromUtf8("lab_Net_TrueChatCount"));
        lab_Net_TrueChatCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(lab_Net_TrueChatCount);


        gridLayout_2->addLayout(horizontalLayout_19, 5, 0, 1, 1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_46 = new QLabel(groupBox_2);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        horizontalLayout_20->addWidget(label_46);

        lab_Net_ErrCount = new QLabel(groupBox_2);
        lab_Net_ErrCount->setObjectName(QString::fromUtf8("lab_Net_ErrCount"));
        lab_Net_ErrCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(lab_Net_ErrCount);


        gridLayout_2->addLayout(horizontalLayout_20, 6, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 1, 1, 2, 1);

        groupBox_4 = new QGroupBox(DialogSiemensRunCheck);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_14->addWidget(label_5);

        lab_Hmi_WorkMode = new QLabel(groupBox_4);
        lab_Hmi_WorkMode->setObjectName(QString::fromUtf8("lab_Hmi_WorkMode"));
        lab_Hmi_WorkMode->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(lab_Hmi_WorkMode);


        gridLayout_4->addLayout(horizontalLayout_14, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout->addWidget(label_16);

        lab_Hmi_SerialData = new QLabel(groupBox_4);
        lab_Hmi_SerialData->setObjectName(QString::fromUtf8("lab_Hmi_SerialData"));
        lab_Hmi_SerialData->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lab_Hmi_SerialData);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_15->addWidget(label_18);

        lab_Hmi_ChatCount = new QLabel(groupBox_4);
        lab_Hmi_ChatCount->setObjectName(QString::fromUtf8("lab_Hmi_ChatCount"));
        lab_Hmi_ChatCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(lab_Hmi_ChatCount);


        gridLayout_4->addLayout(horizontalLayout_15, 2, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_16->addWidget(label_19);

        lab_Hmi_trueChatCount = new QLabel(groupBox_4);
        lab_Hmi_trueChatCount->setObjectName(QString::fromUtf8("lab_Hmi_trueChatCount"));
        lab_Hmi_trueChatCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(lab_Hmi_trueChatCount);


        gridLayout_4->addLayout(horizontalLayout_16, 3, 0, 1, 1);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_22->addWidget(label_21);

        lab_Hmi_ErrCount = new QLabel(groupBox_4);
        lab_Hmi_ErrCount->setObjectName(QString::fromUtf8("lab_Hmi_ErrCount"));
        lab_Hmi_ErrCount->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(lab_Hmi_ErrCount);


        gridLayout_4->addLayout(horizontalLayout_22, 4, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 1, 2, 1, 1);

        groupBox_3 = new QGroupBox(DialogSiemensRunCheck);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_9->addWidget(label_23);

        lab_Sys_RunTime = new QLabel(groupBox_3);
        lab_Sys_RunTime->setObjectName(QString::fromUtf8("lab_Sys_RunTime"));
        lab_Sys_RunTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(lab_Sys_RunTime);


        gridLayout_3->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_10->addWidget(label_25);

        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_26);


        gridLayout_3->addLayout(horizontalLayout_10, 1, 0, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_47 = new QLabel(groupBox_3);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        horizontalLayout_21->addWidget(label_47);

        lab_Sys_chatCode = new QLabel(groupBox_3);
        lab_Sys_chatCode->setObjectName(QString::fromUtf8("lab_Sys_chatCode"));
        lab_Sys_chatCode->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(lab_Sys_chatCode);


        gridLayout_3->addLayout(horizontalLayout_21, 2, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 2, 2, 1, 1);

        label_2 = new QLabel(DialogSiemensRunCheck);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout_6->addWidget(label_2, 3, 0, 1, 2);

        tableWidget = new QTableWidget(DialogSiemensRunCheck);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMaximumSize(QSize(1100, 300));

        gridLayout_6->addWidget(tableWidget, 4, 0, 1, 3);

        label_4 = new QLabel(DialogSiemensRunCheck);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 15));

        gridLayout_6->addWidget(label_4, 5, 0, 1, 1);


        retranslateUi(DialogSiemensRunCheck);

        QMetaObject::connectSlotsByName(DialogSiemensRunCheck);
    } // setupUi

    void retranslateUi(QDialog *DialogSiemensRunCheck)
    {
        DialogSiemensRunCheck->setWindowTitle(QCoreApplication::translate("DialogSiemensRunCheck", "Dialog", nullptr));
        label_7->setText(QString());
        label_6->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\350\256\276\345\244\207\350\257\212\346\226\255\350\277\236\347\273\255\346\200\247\357\274\232", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogSiemensRunCheck", "S7Bus\346\216\245\345\217\243\344\277\241\346\201\257", nullptr));
        label_10->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\346\255\243\347\241\256\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        lab_s7_TrueChatCount->setText(QCoreApplication::translate("DialogSiemensRunCheck", "0", nullptr));
        label_17->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\345\275\223\345\211\215\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        lab_s7_NowSerialData->setText(QCoreApplication::translate("DialogSiemensRunCheck", "0", nullptr));
        label_3->setText(QCoreApplication::translate("DialogSiemensRunCheck", "S7\346\200\273\347\272\277\347\212\266\346\200\201\357\274\232", nullptr));
        lab_s7_Status->setText(QCoreApplication::translate("DialogSiemensRunCheck", "PLC\345\236\213\345\217\267\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\351\224\231\350\257\257\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        lab_s7_ErrCount->setText(QCoreApplication::translate("DialogSiemensRunCheck", "0", nullptr));
        label->setText(QCoreApplication::translate("DialogSiemensRunCheck", "S7\345\215\217\350\256\256\346\250\241\345\274\217\357\274\232", nullptr));
        lab_s7_WorkMode->setText(QCoreApplication::translate("DialogSiemensRunCheck", "--\345\215\217\350\256\256", nullptr));
        label_15->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\350\207\252\345\212\250\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        lab_s7_AutoSerialData->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\344\270\262\350\241\214\351\200\232\344\277\241\345\217\202\346\225\260", nullptr));
        label_8->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\351\200\232\350\256\257\350\257\267\346\261\202\346\200\273\346\225\260\357\274\232", nullptr));
        lab_s7_ChatCount->setText(QCoreApplication::translate("DialogSiemensRunCheck", "0", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DialogSiemensRunCheck", "\344\273\245\345\244\252\347\275\221\346\216\245\345\217\243\344\277\241\346\201\257", nullptr));
        label_40->setText(QCoreApplication::translate("DialogSiemensRunCheck", "TCP\350\277\236\346\216\245\346\200\273\346\225\260\357\274\232", nullptr));
        lab_Net_TcpLinkNum->setText(QCoreApplication::translate("DialogSiemensRunCheck", "TCP\350\277\236\346\216\245\346\225\260", nullptr));
        label_27->setText(QCoreApplication::translate("DialogSiemensRunCheck", "S7TCP\350\277\236\346\216\245\346\225\260\357\274\232", nullptr));
        lab_Net_s7TcpPort->setText(QCoreApplication::translate("DialogSiemensRunCheck", "TextLabel", nullptr));
        label_29->setText(QCoreApplication::translate("DialogSiemensRunCheck", "ModbusTcp\350\277\236\346\216\245\346\225\260\357\274\232", nullptr));
        lab_Net_ModbusLinkNum->setText(QCoreApplication::translate("DialogSiemensRunCheck", "TextLabel", nullptr));
        label_30->setText(QCoreApplication::translate("DialogSiemensRunCheck", "BCNetS7\350\277\236\346\216\245\346\225\260\357\274\232", nullptr));
        lab_s7_BcNetS7LinkNum->setText(QCoreApplication::translate("DialogSiemensRunCheck", "TextLabel", nullptr));
        label_42->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\351\200\232\350\256\257\350\257\267\346\261\202\346\200\273\346\225\260\357\274\232", nullptr));
        lab_Net_ChatCount->setText(QCoreApplication::translate("DialogSiemensRunCheck", "0", nullptr));
        label_44->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\346\255\243\347\241\256\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        lab_Net_TrueChatCount->setText(QCoreApplication::translate("DialogSiemensRunCheck", "0", nullptr));
        label_46->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\351\224\231\350\257\257\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        lab_Net_ErrCount->setText(QCoreApplication::translate("DialogSiemensRunCheck", "0", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DialogSiemensRunCheck", "HMI\347\253\257", nullptr));
        label_5->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\346\211\251\345\261\225\346\200\273\347\272\277\346\250\241\345\274\217\357\274\232", nullptr));
        lab_Hmi_WorkMode->setText(QCoreApplication::translate("DialogSiemensRunCheck", "--\345\215\217\350\256\256", nullptr));
        label_16->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\344\270\262\350\241\214\351\200\232\344\277\241\345\217\202\346\225\260\357\274\232", nullptr));
        lab_Hmi_SerialData->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\344\270\262\350\241\214\351\200\232\344\277\241\345\217\202\346\225\260", nullptr));
        label_18->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\351\200\232\350\256\257\350\257\267\346\261\202\346\200\273\346\225\260\357\274\232", nullptr));
        lab_Hmi_ChatCount->setText(QCoreApplication::translate("DialogSiemensRunCheck", "0", nullptr));
        label_19->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\346\255\243\347\241\256\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        lab_Hmi_trueChatCount->setText(QCoreApplication::translate("DialogSiemensRunCheck", "0", nullptr));
        label_21->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\351\224\231\350\257\257\345\223\215\345\272\224\346\254\241\346\225\260\357\274\232", nullptr));
        lab_Hmi_ErrCount->setText(QCoreApplication::translate("DialogSiemensRunCheck", "0", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DialogSiemensRunCheck", "\347\263\273\347\273\237\350\277\220\350\241\214\344\277\241\346\201\257", nullptr));
        label_23->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\347\263\273\347\273\237\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", nullptr));
        lab_Sys_RunTime->setText(QCoreApplication::translate("DialogSiemensRunCheck", "TextLabel", nullptr));
        label_25->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\344\270\212\346\254\241\345\206\205\351\203\250\346\225\205\351\232\234\357\274\232", nullptr));
        label_26->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\346\227\240\346\225\205\351\232\234", nullptr));
        label_47->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\351\200\232\350\256\257\344\273\243\347\240\201", nullptr));
        lab_Sys_chatCode->setText(QCoreApplication::translate("DialogSiemensRunCheck", "0", nullptr));
        label_2->setText(QCoreApplication::translate("DialogSiemensRunCheck", "S7\346\200\273\347\272\277\345\234\260\345\235\200\350\241\250", nullptr));
        label_4->setText(QCoreApplication::translate("DialogSiemensRunCheck", "\346\263\250\357\274\232M\344\273\243\350\241\250S7\346\200\273\347\272\277\344\270\255\347\232\204\344\270\273\347\253\231\357\274\214S\344\273\243\350\241\250S7\346\200\273\347\272\277\344\270\255\347\232\204\344\273\216\347\253\231\343\200\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSiemensRunCheck: public Ui_DialogSiemensRunCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSIEMENSRUNCHECK_H
