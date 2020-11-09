/********************************************************************************
** Form generated from reading UI file 'dialogsiemenssetparameter.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSIEMENSSETPARAMETER_H
#define UI_DIALOGSIEMENSSETPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSiemensSetParameter
{
public:
    QGridLayout *gridLayout_12;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLineEdit *liEdEquIp;
    QPushButton *puBImportConfig;
    QPushButton *puBExportConfig;
    QPushButton *puBUpConfig;
    QPushButton *puBDownConfig;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_s7Config;
    QGridLayout *gridLayout;
    QTabWidget *tabWidS7Config;
    QWidget *tabS7Interface;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spBox_S7Inter_BcNetAddr;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spBox_S7Inter_HightAddr;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spBox_S7Inter_AddrRetryNum;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spBox_S7Inter_ReFreshNum;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *cBox_S7Inter_ChatMode;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *cBox_S7Inter_ChatBaud;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_7;
    QWidget *tabExtendInterface;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QComboBox *cBox_S7Extend_FunChoose;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QComboBox *cBox_S7Extend_Baud;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QComboBox *cBox_S7Extend_DataBit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QComboBox *cBox_S7Extend_CheckBit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QComboBox *cBox_S7Extend_StopBit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *spBox_S7Extend_ChatSyn;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpinBox *spBox_S7Extend_ChatTimeOut;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_9;
    QWidget *page_netConfig;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidNetConfig;
    QWidget *tabNetInterConfig;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_16;
    QLineEdit *liEd_Net_Ip;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_17;
    QLineEdit *liEd_Net_Subnet;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_18;
    QLineEdit *liEd_Net_Gateway;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabS7TcpServer;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_19;
    QLineEdit *liEd_S7TCP_ServerPort;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_20;
    QLineEdit *liEd_S7TCP_TargetPlcIp;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_21;
    QComboBox *cBox_S7TCP_Open;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QWidget *tabModBusTcpServer;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_22;
    QLineEdit *liEd_Mod_chatPort;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *tabBcnetS7Server;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_23;
    QLineEdit *liEd_BcNetS7_ChatPort;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QWidget *tabWebConfig;
    QGridLayout *gridLayout_7;
    QCheckBox *checkB_Web;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_ModbusMap;
    QGridLayout *gridLayout_14;
    QWidget *widget_3;
    QGridLayout *gridLayout_13;
    QHBoxLayout *horizontalLayout_22;
    QPushButton *puB_ModMap_NewMap;
    QPushButton *puB_ModMap_EditMap;
    QPushButton *puB_ModMap_DelMap;
    QPushButton *puB_ModMap_DefaultMap;
    QPushButton *puB_ModMap_FindMap;
    QPushButton *puB_ModMap_DistriMap;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_24;
    QPushButton *puB_ModMap_ImportModMap;
    QPushButton *puB_ModMap_ExportModMap;
    QTableWidget *tableModbusMap;
    QWidget *widget_2;
    QGridLayout *gridLayout_11;
    QLabel *labMessage;

    void setupUi(QDialog *DialogSiemensSetParameter)
    {
        if (DialogSiemensSetParameter->objectName().isEmpty())
            DialogSiemensSetParameter->setObjectName(QString::fromUtf8("DialogSiemensSetParameter"));
        DialogSiemensSetParameter->resize(1322, 743);
        gridLayout_12 = new QGridLayout(DialogSiemensSetParameter);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        widget = new QWidget(DialogSiemensSetParameter);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 50));
        widget->setMaximumSize(QSize(16777215, 70));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(40, 0));
        label_10->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        liEdEquIp = new QLineEdit(widget);
        liEdEquIp->setObjectName(QString::fromUtf8("liEdEquIp"));
        liEdEquIp->setMinimumSize(QSize(200, 0));
        liEdEquIp->setMaximumSize(QSize(200, 16777215));
        liEdEquIp->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(liEdEquIp, 0, 1, 1, 1);

        puBImportConfig = new QPushButton(widget);
        puBImportConfig->setObjectName(QString::fromUtf8("puBImportConfig"));
        puBImportConfig->setMaximumSize(QSize(120, 40));

        gridLayout_2->addWidget(puBImportConfig, 0, 2, 1, 1);

        puBExportConfig = new QPushButton(widget);
        puBExportConfig->setObjectName(QString::fromUtf8("puBExportConfig"));
        puBExportConfig->setMaximumSize(QSize(120, 40));

        gridLayout_2->addWidget(puBExportConfig, 0, 3, 1, 1);

        puBUpConfig = new QPushButton(widget);
        puBUpConfig->setObjectName(QString::fromUtf8("puBUpConfig"));
        puBUpConfig->setMaximumSize(QSize(120, 40));

        gridLayout_2->addWidget(puBUpConfig, 0, 4, 1, 1);

        puBDownConfig = new QPushButton(widget);
        puBDownConfig->setObjectName(QString::fromUtf8("puBDownConfig"));
        puBDownConfig->setMaximumSize(QSize(120, 40));

        gridLayout_2->addWidget(puBDownConfig, 0, 5, 1, 1);


        gridLayout_12->addWidget(widget, 0, 0, 1, 2);

        listWidget = new QListWidget(DialogSiemensSetParameter);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(220, 0));
        listWidget->setMaximumSize(QSize(250, 16777215));
        QFont font;
        font.setPointSize(12);
        listWidget->setFont(font);

        gridLayout_12->addWidget(listWidget, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(DialogSiemensSetParameter);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_s7Config = new QWidget();
        page_s7Config->setObjectName(QString::fromUtf8("page_s7Config"));
        gridLayout = new QGridLayout(page_s7Config);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidS7Config = new QTabWidget(page_s7Config);
        tabWidS7Config->setObjectName(QString::fromUtf8("tabWidS7Config"));
        tabS7Interface = new QWidget();
        tabS7Interface->setObjectName(QString::fromUtf8("tabS7Interface"));
        gridLayout_10 = new QGridLayout(tabS7Interface);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tabS7Interface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(230, 40));

        horizontalLayout->addWidget(label);

        spBox_S7Inter_BcNetAddr = new QSpinBox(tabS7Interface);
        spBox_S7Inter_BcNetAddr->setObjectName(QString::fromUtf8("spBox_S7Inter_BcNetAddr"));
        spBox_S7Inter_BcNetAddr->setMinimumSize(QSize(230, 20));
        spBox_S7Inter_BcNetAddr->setMaximum(126);

        horizontalLayout->addWidget(spBox_S7Inter_BcNetAddr);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(tabS7Interface);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(230, 40));

        horizontalLayout_2->addWidget(label_2);

        spBox_S7Inter_HightAddr = new QSpinBox(tabS7Interface);
        spBox_S7Inter_HightAddr->setObjectName(QString::fromUtf8("spBox_S7Inter_HightAddr"));
        spBox_S7Inter_HightAddr->setMinimumSize(QSize(230, 20));
        spBox_S7Inter_HightAddr->setMaximum(126);
        spBox_S7Inter_HightAddr->setValue(31);

        horizontalLayout_2->addWidget(spBox_S7Inter_HightAddr);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(tabS7Interface);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(230, 40));

        horizontalLayout_3->addWidget(label_3);

        spBox_S7Inter_AddrRetryNum = new QSpinBox(tabS7Interface);
        spBox_S7Inter_AddrRetryNum->setObjectName(QString::fromUtf8("spBox_S7Inter_AddrRetryNum"));
        spBox_S7Inter_AddrRetryNum->setMinimumSize(QSize(230, 20));
        spBox_S7Inter_AddrRetryNum->setMaximum(8);
        spBox_S7Inter_AddrRetryNum->setValue(3);

        horizontalLayout_3->addWidget(spBox_S7Inter_AddrRetryNum);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(tabS7Interface);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(230, 40));

        horizontalLayout_4->addWidget(label_4);

        spBox_S7Inter_ReFreshNum = new QSpinBox(tabS7Interface);
        spBox_S7Inter_ReFreshNum->setObjectName(QString::fromUtf8("spBox_S7Inter_ReFreshNum"));
        spBox_S7Inter_ReFreshNum->setMinimumSize(QSize(230, 20));
        spBox_S7Inter_ReFreshNum->setMinimum(1);
        spBox_S7Inter_ReFreshNum->setMaximum(100);
        spBox_S7Inter_ReFreshNum->setValue(10);

        horizontalLayout_4->addWidget(spBox_S7Inter_ReFreshNum);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(tabS7Interface);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(230, 40));

        horizontalLayout_5->addWidget(label_5);

        cBox_S7Inter_ChatMode = new QComboBox(tabS7Interface);
        cBox_S7Inter_ChatMode->addItem(QString());
        cBox_S7Inter_ChatMode->addItem(QString());
        cBox_S7Inter_ChatMode->addItem(QString());
        cBox_S7Inter_ChatMode->addItem(QString());
        cBox_S7Inter_ChatMode->setObjectName(QString::fromUtf8("cBox_S7Inter_ChatMode"));
        cBox_S7Inter_ChatMode->setMinimumSize(QSize(230, 20));

        horizontalLayout_5->addWidget(cBox_S7Inter_ChatMode);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(tabS7Interface);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(230, 40));

        horizontalLayout_6->addWidget(label_6);

        cBox_S7Inter_ChatBaud = new QComboBox(tabS7Interface);
        cBox_S7Inter_ChatBaud->addItem(QString());
        cBox_S7Inter_ChatBaud->addItem(QString());
        cBox_S7Inter_ChatBaud->addItem(QString());
        cBox_S7Inter_ChatBaud->addItem(QString());
        cBox_S7Inter_ChatBaud->addItem(QString());
        cBox_S7Inter_ChatBaud->addItem(QString());
        cBox_S7Inter_ChatBaud->addItem(QString());
        cBox_S7Inter_ChatBaud->addItem(QString());
        cBox_S7Inter_ChatBaud->addItem(QString());
        cBox_S7Inter_ChatBaud->addItem(QString());
        cBox_S7Inter_ChatBaud->setObjectName(QString::fromUtf8("cBox_S7Inter_ChatBaud"));
        cBox_S7Inter_ChatBaud->setMinimumSize(QSize(230, 20));

        horizontalLayout_6->addWidget(cBox_S7Inter_ChatBaud);


        verticalLayout->addLayout(horizontalLayout_6);


        gridLayout_10->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(283, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_7, 0, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 178, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_7, 1, 0, 1, 1);

        tabWidS7Config->addTab(tabS7Interface, QString());
        tabExtendInterface = new QWidget();
        tabExtendInterface->setObjectName(QString::fromUtf8("tabExtendInterface"));
        gridLayout_3 = new QGridLayout(tabExtendInterface);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(tabExtendInterface);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(230, 40));

        horizontalLayout_11->addWidget(label_11);

        cBox_S7Extend_FunChoose = new QComboBox(tabExtendInterface);
        cBox_S7Extend_FunChoose->addItem(QString());
        cBox_S7Extend_FunChoose->addItem(QString());
        cBox_S7Extend_FunChoose->addItem(QString());
        cBox_S7Extend_FunChoose->setObjectName(QString::fromUtf8("cBox_S7Extend_FunChoose"));
        cBox_S7Extend_FunChoose->setMinimumSize(QSize(230, 20));

        horizontalLayout_11->addWidget(cBox_S7Extend_FunChoose);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(tabExtendInterface);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(230, 40));

        horizontalLayout_12->addWidget(label_12);

        cBox_S7Extend_Baud = new QComboBox(tabExtendInterface);
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->addItem(QString());
        cBox_S7Extend_Baud->setObjectName(QString::fromUtf8("cBox_S7Extend_Baud"));
        cBox_S7Extend_Baud->setMinimumSize(QSize(230, 20));

        horizontalLayout_12->addWidget(cBox_S7Extend_Baud);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(tabExtendInterface);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(230, 40));

        horizontalLayout_13->addWidget(label_13);

        cBox_S7Extend_DataBit = new QComboBox(tabExtendInterface);
        cBox_S7Extend_DataBit->addItem(QString());
        cBox_S7Extend_DataBit->addItem(QString());
        cBox_S7Extend_DataBit->addItem(QString());
        cBox_S7Extend_DataBit->addItem(QString());
        cBox_S7Extend_DataBit->setObjectName(QString::fromUtf8("cBox_S7Extend_DataBit"));
        cBox_S7Extend_DataBit->setEnabled(false);
        cBox_S7Extend_DataBit->setMinimumSize(QSize(230, 20));

        horizontalLayout_13->addWidget(cBox_S7Extend_DataBit);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_14 = new QLabel(tabExtendInterface);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(230, 40));

        horizontalLayout_14->addWidget(label_14);

        cBox_S7Extend_CheckBit = new QComboBox(tabExtendInterface);
        cBox_S7Extend_CheckBit->addItem(QString());
        cBox_S7Extend_CheckBit->addItem(QString());
        cBox_S7Extend_CheckBit->setObjectName(QString::fromUtf8("cBox_S7Extend_CheckBit"));
        cBox_S7Extend_CheckBit->setEnabled(false);
        cBox_S7Extend_CheckBit->setMinimumSize(QSize(230, 20));

        horizontalLayout_14->addWidget(cBox_S7Extend_CheckBit);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(tabExtendInterface);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(230, 40));

        horizontalLayout_15->addWidget(label_15);

        cBox_S7Extend_StopBit = new QComboBox(tabExtendInterface);
        cBox_S7Extend_StopBit->addItem(QString());
        cBox_S7Extend_StopBit->addItem(QString());
        cBox_S7Extend_StopBit->addItem(QString());
        cBox_S7Extend_StopBit->setObjectName(QString::fromUtf8("cBox_S7Extend_StopBit"));
        cBox_S7Extend_StopBit->setEnabled(false);
        cBox_S7Extend_StopBit->setMinimumSize(QSize(230, 20));

        horizontalLayout_15->addWidget(cBox_S7Extend_StopBit);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(tabExtendInterface);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(230, 40));

        horizontalLayout_7->addWidget(label_7);

        spBox_S7Extend_ChatSyn = new QSpinBox(tabExtendInterface);
        spBox_S7Extend_ChatSyn->setObjectName(QString::fromUtf8("spBox_S7Extend_ChatSyn"));
        spBox_S7Extend_ChatSyn->setEnabled(false);
        spBox_S7Extend_ChatSyn->setMinimumSize(QSize(230, 20));
        spBox_S7Extend_ChatSyn->setMaximum(500);
        spBox_S7Extend_ChatSyn->setValue(30);

        horizontalLayout_7->addWidget(spBox_S7Extend_ChatSyn);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(tabExtendInterface);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(230, 40));

        horizontalLayout_8->addWidget(label_8);

        spBox_S7Extend_ChatTimeOut = new QSpinBox(tabExtendInterface);
        spBox_S7Extend_ChatTimeOut->setObjectName(QString::fromUtf8("spBox_S7Extend_ChatTimeOut"));
        spBox_S7Extend_ChatTimeOut->setEnabled(false);
        spBox_S7Extend_ChatTimeOut->setMinimumSize(QSize(230, 20));
        spBox_S7Extend_ChatTimeOut->setMaximum(10000);
        spBox_S7Extend_ChatTimeOut->setValue(3000);

        horizontalLayout_8->addWidget(spBox_S7Extend_ChatTimeOut);


        verticalLayout_2->addLayout(horizontalLayout_8);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(299, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 93, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 0, 1, 1);

        label_9 = new QLabel(tabExtendInterface);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(true);

        gridLayout_3->addWidget(label_9, 2, 0, 1, 2);

        tabWidS7Config->addTab(tabExtendInterface, QString());

        gridLayout->addWidget(tabWidS7Config, 0, 0, 1, 1);

        stackedWidget->addWidget(page_s7Config);
        page_netConfig = new QWidget();
        page_netConfig->setObjectName(QString::fromUtf8("page_netConfig"));
        gridLayout_4 = new QGridLayout(page_netConfig);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidNetConfig = new QTabWidget(page_netConfig);
        tabWidNetConfig->setObjectName(QString::fromUtf8("tabWidNetConfig"));
        tabNetInterConfig = new QWidget();
        tabNetInterConfig->setObjectName(QString::fromUtf8("tabNetInterConfig"));
        gridLayout_5 = new QGridLayout(tabNetInterConfig);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_16 = new QLabel(tabNetInterConfig);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(100, 60));

        horizontalLayout_9->addWidget(label_16);

        liEd_Net_Ip = new QLineEdit(tabNetInterConfig);
        liEd_Net_Ip->setObjectName(QString::fromUtf8("liEd_Net_Ip"));
        liEd_Net_Ip->setMinimumSize(QSize(230, 20));

        horizontalLayout_9->addWidget(liEd_Net_Ip);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_17 = new QLabel(tabNetInterConfig);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(100, 60));

        horizontalLayout_10->addWidget(label_17);

        liEd_Net_Subnet = new QLineEdit(tabNetInterConfig);
        liEd_Net_Subnet->setObjectName(QString::fromUtf8("liEd_Net_Subnet"));
        liEd_Net_Subnet->setMinimumSize(QSize(230, 20));

        horizontalLayout_10->addWidget(liEd_Net_Subnet);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_18 = new QLabel(tabNetInterConfig);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(100, 60));

        horizontalLayout_16->addWidget(label_18);

        liEd_Net_Gateway = new QLineEdit(tabNetInterConfig);
        liEd_Net_Gateway->setObjectName(QString::fromUtf8("liEd_Net_Gateway"));
        liEd_Net_Gateway->setMinimumSize(QSize(230, 20));

        horizontalLayout_16->addWidget(liEd_Net_Gateway);


        verticalLayout_3->addLayout(horizontalLayout_16);


        gridLayout_5->addLayout(verticalLayout_3, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(383, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 259, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 1, 0, 1, 1);

        tabWidNetConfig->addTab(tabNetInterConfig, QString());
        tabS7TcpServer = new QWidget();
        tabS7TcpServer->setObjectName(QString::fromUtf8("tabS7TcpServer"));
        gridLayout_6 = new QGridLayout(tabS7TcpServer);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_19 = new QLabel(tabS7TcpServer);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(250, 60));

        horizontalLayout_17->addWidget(label_19);

        liEd_S7TCP_ServerPort = new QLineEdit(tabS7TcpServer);
        liEd_S7TCP_ServerPort->setObjectName(QString::fromUtf8("liEd_S7TCP_ServerPort"));
        liEd_S7TCP_ServerPort->setMinimumSize(QSize(230, 20));

        horizontalLayout_17->addWidget(liEd_S7TCP_ServerPort);


        verticalLayout_4->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_20 = new QLabel(tabS7TcpServer);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(250, 60));

        horizontalLayout_18->addWidget(label_20);

        liEd_S7TCP_TargetPlcIp = new QLineEdit(tabS7TcpServer);
        liEd_S7TCP_TargetPlcIp->setObjectName(QString::fromUtf8("liEd_S7TCP_TargetPlcIp"));
        liEd_S7TCP_TargetPlcIp->setMinimumSize(QSize(230, 20));

        horizontalLayout_18->addWidget(liEd_S7TCP_TargetPlcIp);


        verticalLayout_4->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_21 = new QLabel(tabS7TcpServer);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(250, 60));

        horizontalLayout_19->addWidget(label_21);

        cBox_S7TCP_Open = new QComboBox(tabS7TcpServer);
        cBox_S7TCP_Open->addItem(QString());
        cBox_S7TCP_Open->addItem(QString());
        cBox_S7TCP_Open->setObjectName(QString::fromUtf8("cBox_S7TCP_Open"));

        horizontalLayout_19->addWidget(cBox_S7TCP_Open);


        verticalLayout_4->addLayout(horizontalLayout_19);


        gridLayout_6->addLayout(verticalLayout_4, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(279, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 259, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 1, 0, 1, 1);

        tabWidNetConfig->addTab(tabS7TcpServer, QString());
        tabModBusTcpServer = new QWidget();
        tabModBusTcpServer->setObjectName(QString::fromUtf8("tabModBusTcpServer"));
        gridLayout_9 = new QGridLayout(tabModBusTcpServer);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_22 = new QLabel(tabModBusTcpServer);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(250, 60));

        horizontalLayout_20->addWidget(label_22);

        liEd_Mod_chatPort = new QLineEdit(tabModBusTcpServer);
        liEd_Mod_chatPort->setObjectName(QString::fromUtf8("liEd_Mod_chatPort"));
        liEd_Mod_chatPort->setMinimumSize(QSize(230, 20));

        horizontalLayout_20->addWidget(liEd_Mod_chatPort);


        gridLayout_9->addLayout(horizontalLayout_20, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(265, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 400, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer, 1, 0, 1, 1);

        tabWidNetConfig->addTab(tabModBusTcpServer, QString());
        tabBcnetS7Server = new QWidget();
        tabBcnetS7Server->setObjectName(QString::fromUtf8("tabBcnetS7Server"));
        gridLayout_8 = new QGridLayout(tabBcnetS7Server);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_23 = new QLabel(tabBcnetS7Server);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(250, 60));

        horizontalLayout_21->addWidget(label_23);

        liEd_BcNetS7_ChatPort = new QLineEdit(tabBcnetS7Server);
        liEd_BcNetS7_ChatPort->setObjectName(QString::fromUtf8("liEd_BcNetS7_ChatPort"));
        liEd_BcNetS7_ChatPort->setMinimumSize(QSize(230, 20));

        horizontalLayout_21->addWidget(liEd_BcNetS7_ChatPort);


        gridLayout_8->addLayout(horizontalLayout_21, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(265, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 400, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 1, 0, 1, 1);

        tabWidNetConfig->addTab(tabBcnetS7Server, QString());
        tabWebConfig = new QWidget();
        tabWebConfig->setObjectName(QString::fromUtf8("tabWebConfig"));
        gridLayout_7 = new QGridLayout(tabWebConfig);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        checkB_Web = new QCheckBox(tabWebConfig);
        checkB_Web->setObjectName(QString::fromUtf8("checkB_Web"));
        checkB_Web->setMinimumSize(QSize(450, 50));
        checkB_Web->setMaximumSize(QSize(500, 70));

        gridLayout_7->addWidget(checkB_Web, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(303, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 412, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_5, 1, 0, 1, 1);

        tabWidNetConfig->addTab(tabWebConfig, QString());

        gridLayout_4->addWidget(tabWidNetConfig, 0, 0, 1, 1);

        stackedWidget->addWidget(page_netConfig);
        page_ModbusMap = new QWidget();
        page_ModbusMap->setObjectName(QString::fromUtf8("page_ModbusMap"));
        gridLayout_14 = new QGridLayout(page_ModbusMap);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        widget_3 = new QWidget(page_ModbusMap);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 50));
        gridLayout_13 = new QGridLayout(widget_3);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        puB_ModMap_NewMap = new QPushButton(widget_3);
        puB_ModMap_NewMap->setObjectName(QString::fromUtf8("puB_ModMap_NewMap"));
        puB_ModMap_NewMap->setMaximumSize(QSize(90, 25));

        horizontalLayout_22->addWidget(puB_ModMap_NewMap);

        puB_ModMap_EditMap = new QPushButton(widget_3);
        puB_ModMap_EditMap->setObjectName(QString::fromUtf8("puB_ModMap_EditMap"));
        puB_ModMap_EditMap->setMaximumSize(QSize(90, 25));

        horizontalLayout_22->addWidget(puB_ModMap_EditMap);

        puB_ModMap_DelMap = new QPushButton(widget_3);
        puB_ModMap_DelMap->setObjectName(QString::fromUtf8("puB_ModMap_DelMap"));
        puB_ModMap_DelMap->setMaximumSize(QSize(90, 25));

        horizontalLayout_22->addWidget(puB_ModMap_DelMap);

        puB_ModMap_DefaultMap = new QPushButton(widget_3);
        puB_ModMap_DefaultMap->setObjectName(QString::fromUtf8("puB_ModMap_DefaultMap"));
        puB_ModMap_DefaultMap->setMaximumSize(QSize(90, 25));

        horizontalLayout_22->addWidget(puB_ModMap_DefaultMap);

        puB_ModMap_FindMap = new QPushButton(widget_3);
        puB_ModMap_FindMap->setObjectName(QString::fromUtf8("puB_ModMap_FindMap"));
        puB_ModMap_FindMap->setMinimumSize(QSize(110, 0));
        puB_ModMap_FindMap->setMaximumSize(QSize(150, 25));

        horizontalLayout_22->addWidget(puB_ModMap_FindMap);

        puB_ModMap_DistriMap = new QPushButton(widget_3);
        puB_ModMap_DistriMap->setObjectName(QString::fromUtf8("puB_ModMap_DistriMap"));
        puB_ModMap_DistriMap->setMinimumSize(QSize(190, 0));
        puB_ModMap_DistriMap->setMaximumSize(QSize(220, 25));

        horizontalLayout_22->addWidget(puB_ModMap_DistriMap);


        gridLayout_13->addLayout(horizontalLayout_22, 0, 0, 1, 1);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_24 = new QLabel(widget_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(50, 0));
        label_24->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_23->addWidget(label_24);

        puB_ModMap_ImportModMap = new QPushButton(widget_3);
        puB_ModMap_ImportModMap->setObjectName(QString::fromUtf8("puB_ModMap_ImportModMap"));
        puB_ModMap_ImportModMap->setMinimumSize(QSize(140, 0));
        puB_ModMap_ImportModMap->setMaximumSize(QSize(90, 25));

        horizontalLayout_23->addWidget(puB_ModMap_ImportModMap);

        puB_ModMap_ExportModMap = new QPushButton(widget_3);
        puB_ModMap_ExportModMap->setObjectName(QString::fromUtf8("puB_ModMap_ExportModMap"));
        puB_ModMap_ExportModMap->setMinimumSize(QSize(140, 0));
        puB_ModMap_ExportModMap->setMaximumSize(QSize(90, 25));

        horizontalLayout_23->addWidget(puB_ModMap_ExportModMap);


        gridLayout_13->addLayout(horizontalLayout_23, 0, 1, 1, 1);


        gridLayout_14->addWidget(widget_3, 0, 0, 1, 1);

        tableModbusMap = new QTableWidget(page_ModbusMap);
        tableModbusMap->setObjectName(QString::fromUtf8("tableModbusMap"));

        gridLayout_14->addWidget(tableModbusMap, 1, 0, 1, 1);

        stackedWidget->addWidget(page_ModbusMap);

        gridLayout_12->addWidget(stackedWidget, 1, 1, 1, 1);

        widget_2 = new QWidget(DialogSiemensSetParameter);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_11 = new QGridLayout(widget_2);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        labMessage = new QLabel(widget_2);
        labMessage->setObjectName(QString::fromUtf8("labMessage"));

        gridLayout_11->addWidget(labMessage, 0, 0, 1, 1);


        gridLayout_12->addWidget(widget_2, 2, 0, 1, 2);


        retranslateUi(DialogSiemensSetParameter);

        tabWidS7Config->setCurrentIndex(1);
        cBox_S7Extend_DataBit->setCurrentIndex(3);
        cBox_S7Extend_CheckBit->setCurrentIndex(1);
        tabWidNetConfig->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogSiemensSetParameter);
    } // setupUi

    void retranslateUi(QDialog *DialogSiemensSetParameter)
    {
        DialogSiemensSetParameter->setWindowTitle(QCoreApplication::translate("DialogSiemensSetParameter", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("DialogSiemensSetParameter", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        puBImportConfig->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\345\257\274\345\207\272\346\211\200\346\234\211\351\205\215\347\275\256", nullptr));
        puBExportConfig->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\345\257\274\345\205\245\346\211\200\346\234\211\351\205\215\347\275\256", nullptr));
        puBUpConfig->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\344\270\212\350\275\275\345\217\202\346\225\260", nullptr));
        puBDownConfig->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\344\270\213\350\275\275\345\217\202\346\225\260", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("DialogSiemensSetParameter", "S7\346\200\273\347\272\277\346\216\245\345\217\243\345\217\202\346\225\260\351\205\215\347\275\256", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\344\273\245\345\244\252\347\275\221\346\216\245\345\217\243\345\217\202\346\225\260\351\205\215\347\275\256", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("DialogSiemensSetParameter", "Modbus\346\230\240\345\260\204\350\241\250", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\346\225\260\346\215\256\344\272\244\346\215\242", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("DialogSiemensSetParameter", "Modbus\344\270\273\347\253\231", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("DialogSiemensSetParameter", "BCNet\347\253\231\345\234\260\345\235\200\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        spBox_S7Inter_BcNetAddr->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "\350\256\276\347\275\256Net\346\250\241\345\235\227\345\234\250S7\346\200\273\347\272\277\344\270\255\347\232\204\344\270\273\347\253\231\345\234\260\345\235\200,\344\270\215\350\203\275\345\222\214\346\200\273\347\272\277\345\205\266\344\273\226\347\253\231\345\234\260\345\235\200\347\233\270\345\220\214,\350\214\203\345\233\264:0-126,\351\273\230\350\256\244\344\270\2720\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("DialogSiemensSetParameter", "S7\346\200\273\347\272\277\346\234\200\351\253\230\347\253\231\345\234\260\345\235\200\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        spBox_S7Inter_HightAddr->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "\350\256\276\347\275\256s7\346\200\273\347\272\277\346\234\200\351\253\230\347\253\231\345\234\260\345\235\200,\346\225\260\345\200\274\344\270\215\350\203\275\345\260\217\344\272\216\346\200\273\347\272\277\344\270\212\346\234\200\345\244\247\347\232\204\347\253\231\347\202\271\345\234\260\345\235\200,\351\200\232\345\270\270MPI\346\200\273\347\272\277\346\234\200\351\253\230\347\253\231\345\234\260\345\235\200\344\270\27231, Profibus\346\200\273\347\272\277\344\270\212\346\234\200\351\253\230\347\253\231\345\234\260\345\235\200\344\270\272126,\350\214\203\345\233\2640-126,\351\273\230\350\256\244\344\270\27231", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\347\253\231\347\202\271\351\200\232\350\256\257\351\207\215\350\257\225\346\254\241\346\225\260\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        spBox_S7Inter_AddrRetryNum->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "\350\256\276\347\275\256\351\200\232\350\256\257\345\244\261\350\264\245\347\232\204\345\260\235\350\257\225\346\254\241\346\225\260,\350\214\203\345\233\2640-8,\351\273\230\350\256\244\344\270\2723\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\345\234\260\345\235\200\351\227\264\351\232\224\345\210\267\346\226\260\346\254\241\346\225\260\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        spBox_S7Inter_ReFreshNum->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "s7\346\200\273\347\272\277\344\270\212\345\205\266\344\273\226\347\253\231\347\202\271\347\232\204\345\210\267\346\226\260\351\227\264\351\232\224\347\263\273\346\225\260,\350\214\203\345\233\2641-100,\351\273\230\350\256\244\344\270\27210", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("DialogSiemensSetParameter", "S7\346\200\273\347\272\277\351\200\232\350\256\257\345\215\217\350\256\256\346\250\241\345\274\217\357\274\232", nullptr));
        cBox_S7Inter_ChatMode->setItemText(0, QCoreApplication::translate("DialogSiemensSetParameter", "PPI", nullptr));
        cBox_S7Inter_ChatMode->setItemText(1, QCoreApplication::translate("DialogSiemensSetParameter", "MPI\344\273\216\347\253\231", nullptr));
        cBox_S7Inter_ChatMode->setItemText(2, QCoreApplication::translate("DialogSiemensSetParameter", "MPI\344\270\273\344\273\216\347\253\231", nullptr));
        cBox_S7Inter_ChatMode->setItemText(3, QCoreApplication::translate("DialogSiemensSetParameter", "PROFIBUS", nullptr));

#if QT_CONFIG(tooltip)
        cBox_S7Inter_ChatMode->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "\350\256\276\347\275\256Net\344\270\216PLC\351\200\232\350\256\257\351\207\207\347\224\250\347\232\204\345\215\217\350\256\256\346\250\241\345\274\217,\345\257\271\344\272\216s7200\345\217\252\350\203\275\351\200\211\346\213\251[PPI]\345\222\214[MPI\344\273\216\347\253\231]\345\215\217\350\256\256,\345\257\271\344\272\216s7300\345\217\257\344\273\245\351\200\211\346\213\251\344\273\273\346\204\217\345\215\217\350\256\256\346\250\241\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("DialogSiemensSetParameter", "S7\346\200\273\347\272\277\351\200\232\350\256\257\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        cBox_S7Inter_ChatBaud->setItemText(0, QCoreApplication::translate("DialogSiemensSetParameter", "9600bps", nullptr));
        cBox_S7Inter_ChatBaud->setItemText(1, QCoreApplication::translate("DialogSiemensSetParameter", "19200bps", nullptr));
        cBox_S7Inter_ChatBaud->setItemText(2, QCoreApplication::translate("DialogSiemensSetParameter", "45450bps", nullptr));
        cBox_S7Inter_ChatBaud->setItemText(3, QCoreApplication::translate("DialogSiemensSetParameter", "93750bps", nullptr));
        cBox_S7Inter_ChatBaud->setItemText(4, QCoreApplication::translate("DialogSiemensSetParameter", "187.5Kbps", nullptr));
        cBox_S7Inter_ChatBaud->setItemText(5, QCoreApplication::translate("DialogSiemensSetParameter", "500Kbps", nullptr));
        cBox_S7Inter_ChatBaud->setItemText(6, QCoreApplication::translate("DialogSiemensSetParameter", "1.5Mbps", nullptr));
        cBox_S7Inter_ChatBaud->setItemText(7, QCoreApplication::translate("DialogSiemensSetParameter", "3Mbps", nullptr));
        cBox_S7Inter_ChatBaud->setItemText(8, QCoreApplication::translate("DialogSiemensSetParameter", "6Mbps", nullptr));
        cBox_S7Inter_ChatBaud->setItemText(9, QCoreApplication::translate("DialogSiemensSetParameter", "\350\207\252\345\212\250\350\257\206\345\210\253", nullptr));

#if QT_CONFIG(tooltip)
        cBox_S7Inter_ChatBaud->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "\346\214\207\345\256\232PLC\347\232\204S7\346\200\273\347\272\277\351\200\232\350\256\257\345\217\243\347\232\204\346\263\242\347\211\271\347\216\207,\344\271\237\345\217\257\344\273\245\347\224\261Net\350\207\252\345\212\250\350\257\206\345\210\253s7\346\200\273\347\272\277\347\232\204\346\263\242\347\211\271\347\216\207", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidS7Config->setTabText(tabWidS7Config->indexOf(tabS7Interface), QCoreApplication::translate("DialogSiemensSetParameter", "S7\346\200\273\347\272\277\346\216\245\345\217\243", nullptr));
        label_11->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\345\212\237\350\203\275\351\200\211\346\213\251\357\274\232", nullptr));
        cBox_S7Extend_FunChoose->setItemText(0, QCoreApplication::translate("DialogSiemensSetParameter", "HMI", nullptr));
        cBox_S7Extend_FunChoose->setItemText(1, QCoreApplication::translate("DialogSiemensSetParameter", "Modbus\344\273\216\347\253\231", nullptr));
        cBox_S7Extend_FunChoose->setItemText(2, QCoreApplication::translate("DialogSiemensSetParameter", "Modbus\344\270\273\347\253\231", nullptr));

#if QT_CONFIG(tooltip)
        cBox_S7Extend_FunChoose->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "\350\256\276\347\275\256\346\241\245\346\216\245\345\236\213\346\250\241\345\235\227,\346\211\251\345\261\225\346\200\273\347\272\277(DB9\346\257\215\345\217\243)\347\232\204\345\212\237\350\203\275\351\200\211\346\213\251\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        cBox_S7Extend_Baud->setItemText(0, QCoreApplication::translate("DialogSiemensSetParameter", "1200bps", nullptr));
        cBox_S7Extend_Baud->setItemText(1, QCoreApplication::translate("DialogSiemensSetParameter", "2400bps", nullptr));
        cBox_S7Extend_Baud->setItemText(2, QCoreApplication::translate("DialogSiemensSetParameter", "4800bps", nullptr));
        cBox_S7Extend_Baud->setItemText(3, QCoreApplication::translate("DialogSiemensSetParameter", "9600bps", nullptr));
        cBox_S7Extend_Baud->setItemText(4, QCoreApplication::translate("DialogSiemensSetParameter", "19200bps", nullptr));
        cBox_S7Extend_Baud->setItemText(5, QCoreApplication::translate("DialogSiemensSetParameter", "38400bps", nullptr));
        cBox_S7Extend_Baud->setItemText(6, QCoreApplication::translate("DialogSiemensSetParameter", "56000bps", nullptr));
        cBox_S7Extend_Baud->setItemText(7, QCoreApplication::translate("DialogSiemensSetParameter", "57600bps", nullptr));
        cBox_S7Extend_Baud->setItemText(8, QCoreApplication::translate("DialogSiemensSetParameter", "115200bps", nullptr));
        cBox_S7Extend_Baud->setItemText(9, QCoreApplication::translate("DialogSiemensSetParameter", "128000bps", nullptr));
        cBox_S7Extend_Baud->setItemText(10, QCoreApplication::translate("DialogSiemensSetParameter", "187500bps", nullptr));
        cBox_S7Extend_Baud->setItemText(11, QCoreApplication::translate("DialogSiemensSetParameter", "256000bps", nullptr));
        cBox_S7Extend_Baud->setItemText(12, QCoreApplication::translate("DialogSiemensSetParameter", "\350\207\252\345\212\250\350\257\206\345\210\253", nullptr));

#if QT_CONFIG(tooltip)
        cBox_S7Extend_Baud->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "\350\256\276\347\275\256\346\241\245\346\216\245\345\236\213\346\250\241\345\235\227,\346\211\251\345\261\225\346\200\273\347\272\277(DB9\346\257\215\345\217\243)\347\232\204\346\263\242\347\211\271\347\216\207\351\200\211\346\213\251\343\200\202", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        cBox_S7Extend_DataBit->setItemText(0, QCoreApplication::translate("DialogSiemensSetParameter", "5", nullptr));
        cBox_S7Extend_DataBit->setItemText(1, QCoreApplication::translate("DialogSiemensSetParameter", "6", nullptr));
        cBox_S7Extend_DataBit->setItemText(2, QCoreApplication::translate("DialogSiemensSetParameter", "7", nullptr));
        cBox_S7Extend_DataBit->setItemText(3, QCoreApplication::translate("DialogSiemensSetParameter", "8", nullptr));

        label_14->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        cBox_S7Extend_CheckBit->setItemText(0, QCoreApplication::translate("DialogSiemensSetParameter", "\345\245\207\346\240\241\351\252\214", nullptr));
        cBox_S7Extend_CheckBit->setItemText(1, QCoreApplication::translate("DialogSiemensSetParameter", "\345\201\266\346\240\241\351\252\214", nullptr));

        label_15->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        cBox_S7Extend_StopBit->setItemText(0, QCoreApplication::translate("DialogSiemensSetParameter", "1", nullptr));
        cBox_S7Extend_StopBit->setItemText(1, QCoreApplication::translate("DialogSiemensSetParameter", "1.5", nullptr));
        cBox_S7Extend_StopBit->setItemText(2, QCoreApplication::translate("DialogSiemensSetParameter", "2", nullptr));

        label_7->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\351\200\232\350\256\257\345\220\214\346\255\245\357\274\210\346\257\253\347\247\222\357\274\211", nullptr));
        label_8->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\351\200\232\350\256\257\350\266\205\346\227\266\357\274\210\346\257\253\347\247\222\357\274\211", nullptr));
        label_9->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\346\263\250\357\274\232\346\255\244\347\225\214\351\235\242\351\205\215\347\275\256\345\217\252\345\257\271\346\241\245\346\216\245\345\236\213\346\250\241\345\235\227\346\234\211\346\225\210\357\274\214\344\270\224BCNet-S7300PLUS\346\241\245\346\216\245\345\236\213\347\211\210\346\234\254\346\224\257\346\214\201Modbus\344\270\273\344\273\216\347\253\231\345\212\237\350\203\275\357\274\214\345\205\266\344\273\226\347\211\210\346\234\254\345\217\252\350\203\275\346\224\257\346\214\201HMI\345\212\237\350\203\275\357\274\233HMI\345\212\237\350\203\275\345\217\252\346\224\257\346\214\201PPI\345\215\217\350\256\256\346\250\241\345\274\217\357\274\214\345\215\263S7200PLC\344\270\212\344\270\223\345\261\236\345\212\237\350\203\275\357\274\233\n"
"", nullptr));
        tabWidS7Config->setTabText(tabWidS7Config->indexOf(tabExtendInterface), QCoreApplication::translate("DialogSiemensSetParameter", "\346\211\251\345\261\225\346\200\273\347\272\277\346\216\245\345\217\243", nullptr));
        label_16->setText(QCoreApplication::translate("DialogSiemensSetParameter", "ip\345\234\260\345\235\200  ", nullptr));
        liEd_Net_Ip->setText(QCoreApplication::translate("DialogSiemensSetParameter", "192.168.1.104", nullptr));
        label_17->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\345\255\220\347\275\221\346\216\251\347\240\201", nullptr));
        liEd_Net_Subnet->setText(QCoreApplication::translate("DialogSiemensSetParameter", "255.255.255.0", nullptr));
        label_18->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\347\275\221\345\205\263\345\234\260\345\235\200", nullptr));
        liEd_Net_Gateway->setText(QCoreApplication::translate("DialogSiemensSetParameter", "192.168.1.1", nullptr));
        tabWidNetConfig->setTabText(tabWidNetConfig->indexOf(tabNetInterConfig), QCoreApplication::translate("DialogSiemensSetParameter", "\344\273\245\345\244\252\347\275\221\346\216\245\345\217\243", nullptr));
        label_19->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\346\234\215\345\212\241\345\231\250\351\200\232\350\256\257\347\253\257\345\217\243\345\217\267", nullptr));
#if QT_CONFIG(tooltip)
        liEd_S7TCP_ServerPort->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "\350\256\276\347\275\256S7TCP\346\234\215\345\212\241\345\231\250\347\232\204\351\200\232\350\256\257\347\253\257\345\217\243\345\217\267,\351\273\230\350\256\244\344\270\272102", nullptr));
#endif // QT_CONFIG(tooltip)
        liEd_S7TCP_ServerPort->setText(QCoreApplication::translate("DialogSiemensSetParameter", "102", nullptr));
        label_20->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\351\273\230\350\256\244\347\233\256\346\240\207PLC\345\234\260\345\235\200\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        liEd_S7TCP_TargetPlcIp->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "\350\256\276\347\275\256SC7TCP\351\273\230\350\256\244\347\233\256\346\240\207PLC\345\234\260\345\235\200,\351\273\230\350\256\244\344\270\2722", nullptr));
#endif // QT_CONFIG(tooltip)
        liEd_S7TCP_TargetPlcIp->setText(QCoreApplication::translate("DialogSiemensSetParameter", "2", nullptr));
        label_21->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\351\200\232\350\256\257\347\233\256\346\240\207PLC\345\234\260\345\235\200\347\224\261\346\247\275\345\217\267\345\206\263\345\256\232\357\274\232", nullptr));
        cBox_S7TCP_Open->setItemText(0, QCoreApplication::translate("DialogSiemensSetParameter", "\345\205\263\351\227\255", nullptr));
        cBox_S7TCP_Open->setItemText(1, QCoreApplication::translate("DialogSiemensSetParameter", "\345\274\200\345\220\257", nullptr));

#if QT_CONFIG(tooltip)
        cBox_S7TCP_Open->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "\345\274\200\345\220\257\346\210\226\345\205\263\351\227\255S7TCP\347\233\256\346\240\207PLC\345\234\260\345\235\200\347\224\261\346\247\275\345\217\267\345\206\263\345\256\232,\345\205\263\351\227\255\345\220\216S7TCP\347\232\204\350\257\267\346\261\202\347\232\204\347\233\256\346\240\207PLC\345\234\260\345\235\200\345\260\206\347\224\261\343\200\220\351\273\230\350\256\244PLC\347\233\256\346\240\207\345\234\260\345\235\200\343\200\221\345\217\202\346\225\260\345\206\263\345\256\232", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidNetConfig->setTabText(tabWidNetConfig->indexOf(tabS7TcpServer), QCoreApplication::translate("DialogSiemensSetParameter", "S7TCP\346\234\215\345\212\241\345\231\250", nullptr));
        label_22->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\346\234\215\345\212\241\345\231\250\351\200\232\350\256\257\347\253\257\345\217\243\345\217\267", nullptr));
#if QT_CONFIG(tooltip)
        liEd_Mod_chatPort->setToolTip(QCoreApplication::translate("DialogSiemensSetParameter", "Modbustcp\346\234\215\345\212\241\345\231\250\347\232\204\347\253\257\345\217\243\345\217\267,\351\273\230\350\256\244\344\270\272502", nullptr));
#endif // QT_CONFIG(tooltip)
        liEd_Mod_chatPort->setText(QCoreApplication::translate("DialogSiemensSetParameter", "502", nullptr));
        tabWidNetConfig->setTabText(tabWidNetConfig->indexOf(tabModBusTcpServer), QCoreApplication::translate("DialogSiemensSetParameter", "ModbusTcp\346\234\215\345\212\241\345\231\250", nullptr));
        label_23->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\346\234\215\345\212\241\345\231\250\351\200\232\350\256\257\347\253\257\345\217\243\345\217\267", nullptr));
        liEd_BcNetS7_ChatPort->setText(QCoreApplication::translate("DialogSiemensSetParameter", "1099", nullptr));
        tabWidNetConfig->setTabText(tabWidNetConfig->indexOf(tabBcnetS7Server), QCoreApplication::translate("DialogSiemensSetParameter", "BCNetS7\345\215\217\350\256\256\346\234\215\345\212\241\345\231\250", nullptr));
        checkB_Web->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\347\246\201\346\255\242Web\351\241\265\351\235\242\351\205\215\347\275\256\343\200\202\357\274\210\347\246\201\347\224\250\345\220\216\345\260\206\346\227\240\346\263\225\351\200\232\350\277\207\346\265\217\350\247\210\345\231\250\351\205\215\347\275\256\350\256\276\345\244\207\345\217\202\346\225\260\357\274\211", nullptr));
        tabWidNetConfig->setTabText(tabWidNetConfig->indexOf(tabWebConfig), QCoreApplication::translate("DialogSiemensSetParameter", "Web\351\200\211\351\241\271", nullptr));
        puB_ModMap_NewMap->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\346\226\260\345\273\272\346\230\240\345\260\204\345\235\227", nullptr));
        puB_ModMap_EditMap->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\347\274\226\350\276\221\346\230\240\345\260\204\345\235\227", nullptr));
        puB_ModMap_DelMap->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\345\210\240\351\231\244\346\230\240\345\260\204\345\235\227", nullptr));
        puB_ModMap_DefaultMap->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\351\273\230\350\256\244\351\205\215\347\275\256", nullptr));
        puB_ModMap_FindMap->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\346\230\240\345\260\204\345\234\260\345\235\200\346\237\245\350\257\242", nullptr));
        puB_ModMap_DistriMap->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\350\207\252\345\212\250\345\210\206\351\205\215\346\230\240\345\260\204\345\234\260\345\235\200\357\274\210\346\216\250\350\215\220\357\274\211", nullptr));
        label_24->setText(QString());
        puB_ModMap_ImportModMap->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\345\257\274\345\205\245Modbus\346\230\240\345\260\204\350\241\250", nullptr));
        puB_ModMap_ExportModMap->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\345\257\274\345\207\272Modbus\346\230\240\345\260\204\350\241\250", nullptr));
        labMessage->setText(QCoreApplication::translate("DialogSiemensSetParameter", "\342\200\246\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSiemensSetParameter: public Ui_DialogSiemensSetParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSIEMENSSETPARAMETER_H
