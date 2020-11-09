/********************************************************************************
** Form generated from reading UI file 'diamodequipment.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAMODEQUIPMENT_H
#define UI_DIAMODEQUIPMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiaModEquipment
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labEquName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *labFirmVer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLabel *labIpAddr;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *labserialNum;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *labReamrks;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLabel *labMacAddr;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *labGoDate;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *labBrand;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_17;
    QLabel *label_19;
    QVBoxLayout *verticalLayout_3;
    QComboBox *cBoxAutoPlcModel;
    QComboBox *cBoxWorkMode;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_18;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_4;
    QComboBox *cBoxHmiSelfAda;
    QComboBox *cBoxReTry;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_23;
    QComboBox *cBoxPlcModel;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_21;
    QComboBox *comboBox_5;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_22;
    QComboBox *cBoxPlcBaudRate;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_24;
    QComboBox *comboBox_8;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_25;
    QComboBox *comboBox_9;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_29;
    QComboBox *cBoxHmiBaudRate;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_30;
    QComboBox *comboBox_12;
    QHBoxLayout *horizontalLayout_26;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_31;
    QComboBox *comboBox_13;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_32;
    QComboBox *comboBox_14;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_28;
    QLineEdit *liEdIpAddr;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_33;
    QLineEdit *liedSubnetMask;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_34;
    QLineEdit *liGateway;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_35;
    QLineEdit *liPort;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_36;
    QLineEdit *liEdModbusLinkNum;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QPushButton *puBDown;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DiaModEquipment)
    {
        if (DiaModEquipment->objectName().isEmpty())
            DiaModEquipment->setObjectName(QString::fromUtf8("DiaModEquipment"));
        DiaModEquipment->resize(1137, 807);
        gridLayout_5 = new QGridLayout(DiaModEquipment);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox = new QGroupBox(DiaModEquipment);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(1100, 150));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        labEquName = new QLabel(groupBox);
        labEquName->setObjectName(QString::fromUtf8("labEquName"));

        horizontalLayout->addWidget(labEquName);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        labFirmVer = new QLabel(groupBox);
        labFirmVer->setObjectName(QString::fromUtf8("labFirmVer"));

        horizontalLayout_4->addWidget(labFirmVer);


        gridLayout->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_7->addWidget(label_13);

        labIpAddr = new QLabel(groupBox);
        labIpAddr->setObjectName(QString::fromUtf8("labIpAddr"));

        horizontalLayout_7->addWidget(labIpAddr);


        gridLayout->addLayout(horizontalLayout_7, 0, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        labserialNum = new QLabel(groupBox);
        labserialNum->setObjectName(QString::fromUtf8("labserialNum"));

        horizontalLayout_2->addWidget(labserialNum);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        labReamrks = new QLabel(groupBox);
        labReamrks->setObjectName(QString::fromUtf8("labReamrks"));

        horizontalLayout_5->addWidget(labReamrks);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_8->addWidget(label_15);

        labMacAddr = new QLabel(groupBox);
        labMacAddr->setObjectName(QString::fromUtf8("labMacAddr"));

        horizontalLayout_8->addWidget(labMacAddr);


        gridLayout->addLayout(horizontalLayout_8, 1, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        labGoDate = new QLabel(groupBox);
        labGoDate->setObjectName(QString::fromUtf8("labGoDate"));

        horizontalLayout_3->addWidget(labGoDate);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_6->addWidget(label_11);

        labBrand = new QLabel(groupBox);
        labBrand->setObjectName(QString::fromUtf8("labBrand"));

        horizontalLayout_6->addWidget(labBrand);


        gridLayout->addLayout(horizontalLayout_6, 2, 1, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 2);

        tabWidget = new QTabWidget(DiaModEquipment);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout->addWidget(label_17);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout->addWidget(label_19);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        cBoxAutoPlcModel = new QComboBox(groupBox_2);
        cBoxAutoPlcModel->addItem(QString());
        cBoxAutoPlcModel->addItem(QString());
        cBoxAutoPlcModel->setObjectName(QString::fromUtf8("cBoxAutoPlcModel"));

        verticalLayout_3->addWidget(cBoxAutoPlcModel);

        cBoxWorkMode = new QComboBox(groupBox_2);
        cBoxWorkMode->addItem(QString());
        cBoxWorkMode->addItem(QString());
        cBoxWorkMode->setObjectName(QString::fromUtf8("cBoxWorkMode"));

        verticalLayout_3->addWidget(cBoxWorkMode);


        gridLayout_2->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_2->addWidget(label_18);

        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_2->addWidget(label_20);


        gridLayout_2->addLayout(verticalLayout_2, 0, 2, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        cBoxHmiSelfAda = new QComboBox(groupBox_2);
        cBoxHmiSelfAda->addItem(QString());
        cBoxHmiSelfAda->addItem(QString());
        cBoxHmiSelfAda->setObjectName(QString::fromUtf8("cBoxHmiSelfAda"));

        verticalLayout_4->addWidget(cBoxHmiSelfAda);

        cBoxReTry = new QComboBox(groupBox_2);
        cBoxReTry->addItem(QString());
        cBoxReTry->addItem(QString());
        cBoxReTry->addItem(QString());
        cBoxReTry->addItem(QString());
        cBoxReTry->addItem(QString());
        cBoxReTry->addItem(QString());
        cBoxReTry->addItem(QString());
        cBoxReTry->addItem(QString());
        cBoxReTry->addItem(QString());
        cBoxReTry->setObjectName(QString::fromUtf8("cBoxReTry"));

        verticalLayout_4->addWidget(cBoxReTry);


        gridLayout_2->addLayout(verticalLayout_4, 0, 3, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_8 = new QGridLayout(groupBox_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_15->addWidget(label_23);

        cBoxPlcModel = new QComboBox(groupBox_4);
        cBoxPlcModel->addItem(QString());
        cBoxPlcModel->addItem(QString());
        cBoxPlcModel->addItem(QString());
        cBoxPlcModel->setObjectName(QString::fromUtf8("cBoxPlcModel"));

        horizontalLayout_15->addWidget(cBoxPlcModel);


        verticalLayout_5->addLayout(horizontalLayout_15);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_13->addWidget(label_21);

        comboBox_5 = new QComboBox(groupBox_4);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setEnabled(false);

        horizontalLayout_13->addWidget(comboBox_5);


        verticalLayout_5->addLayout(horizontalLayout_13);


        horizontalLayout_20->addLayout(verticalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_14->addWidget(label_22);

        cBoxPlcBaudRate = new QComboBox(groupBox_4);
        cBoxPlcBaudRate->addItem(QString());
        cBoxPlcBaudRate->addItem(QString());
        cBoxPlcBaudRate->addItem(QString());
        cBoxPlcBaudRate->addItem(QString());
        cBoxPlcBaudRate->addItem(QString());
        cBoxPlcBaudRate->setObjectName(QString::fromUtf8("cBoxPlcBaudRate"));

        horizontalLayout_14->addWidget(cBoxPlcBaudRate);


        verticalLayout_8->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_24 = new QLabel(groupBox_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_16->addWidget(label_24);

        comboBox_8 = new QComboBox(groupBox_4);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));
        comboBox_8->setEnabled(false);

        horizontalLayout_16->addWidget(comboBox_8);


        verticalLayout_8->addLayout(horizontalLayout_16);


        horizontalLayout_20->addLayout(verticalLayout_8);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy);

        horizontalLayout_17->addWidget(label_25);

        comboBox_9 = new QComboBox(groupBox_4);
        comboBox_9->addItem(QString());
        comboBox_9->addItem(QString());
        comboBox_9->addItem(QString());
        comboBox_9->addItem(QString());
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));
        comboBox_9->setEnabled(false);
        comboBox_9->setEditable(false);

        horizontalLayout_17->addWidget(comboBox_9);


        horizontalLayout_20->addLayout(horizontalLayout_17);


        gridLayout_3->addLayout(horizontalLayout_20, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_7 = new QGridLayout(groupBox_5);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_29 = new QLabel(groupBox_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_24->addWidget(label_29);

        cBoxHmiBaudRate = new QComboBox(groupBox_5);
        cBoxHmiBaudRate->addItem(QString());
        cBoxHmiBaudRate->addItem(QString());
        cBoxHmiBaudRate->addItem(QString());
        cBoxHmiBaudRate->addItem(QString());
        cBoxHmiBaudRate->addItem(QString());
        cBoxHmiBaudRate->setObjectName(QString::fromUtf8("cBoxHmiBaudRate"));

        horizontalLayout_24->addWidget(cBoxHmiBaudRate);


        horizontalLayout_9->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_30 = new QLabel(groupBox_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_25->addWidget(label_30);

        comboBox_12 = new QComboBox(groupBox_5);
        comboBox_12->addItem(QString());
        comboBox_12->addItem(QString());
        comboBox_12->addItem(QString());
        comboBox_12->addItem(QString());
        comboBox_12->setObjectName(QString::fromUtf8("comboBox_12"));
        comboBox_12->setEnabled(false);

        horizontalLayout_25->addWidget(comboBox_12);


        horizontalLayout_9->addLayout(horizontalLayout_25);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_31 = new QLabel(groupBox_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_27->addWidget(label_31);

        comboBox_13 = new QComboBox(groupBox_5);
        comboBox_13->addItem(QString());
        comboBox_13->addItem(QString());
        comboBox_13->setObjectName(QString::fromUtf8("comboBox_13"));
        comboBox_13->setEnabled(false);

        horizontalLayout_27->addWidget(comboBox_13);


        horizontalLayout_26->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        label_32 = new QLabel(groupBox_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_28->addWidget(label_32);

        comboBox_14 = new QComboBox(groupBox_5);
        comboBox_14->addItem(QString());
        comboBox_14->addItem(QString());
        comboBox_14->addItem(QString());
        comboBox_14->setObjectName(QString::fromUtf8("comboBox_14"));
        comboBox_14->setEnabled(false);

        horizontalLayout_28->addWidget(comboBox_14);


        horizontalLayout_26->addLayout(horizontalLayout_28);


        verticalLayout_6->addLayout(horizontalLayout_26);


        gridLayout_7->addLayout(verticalLayout_6, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_5, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(135, 65));

        horizontalLayout_10->addWidget(label_28);

        liEdIpAddr = new QLineEdit(tab_2);
        liEdIpAddr->setObjectName(QString::fromUtf8("liEdIpAddr"));
        liEdIpAddr->setMinimumSize(QSize(450, 20));

        horizontalLayout_10->addWidget(liEdIpAddr);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_33 = new QLabel(tab_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMinimumSize(QSize(135, 65));

        horizontalLayout_11->addWidget(label_33);

        liedSubnetMask = new QLineEdit(tab_2);
        liedSubnetMask->setObjectName(QString::fromUtf8("liedSubnetMask"));
        liedSubnetMask->setMinimumSize(QSize(450, 20));

        horizontalLayout_11->addWidget(liedSubnetMask);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_34 = new QLabel(tab_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setMinimumSize(QSize(135, 65));

        horizontalLayout_12->addWidget(label_34);

        liGateway = new QLineEdit(tab_2);
        liGateway->setObjectName(QString::fromUtf8("liGateway"));
        liGateway->setMinimumSize(QSize(450, 20));

        horizontalLayout_12->addWidget(liGateway);


        verticalLayout_7->addLayout(horizontalLayout_12);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_35 = new QLabel(tab_2);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setMinimumSize(QSize(135, 65));

        horizontalLayout_22->addWidget(label_35);

        liPort = new QLineEdit(tab_2);
        liPort->setObjectName(QString::fromUtf8("liPort"));
        liPort->setMinimumSize(QSize(450, 20));

        horizontalLayout_22->addWidget(liPort);


        verticalLayout_7->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_36 = new QLabel(tab_2);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setMinimumSize(QSize(135, 65));

        horizontalLayout_23->addWidget(label_36);

        liEdModbusLinkNum = new QLineEdit(tab_2);
        liEdModbusLinkNum->setObjectName(QString::fromUtf8("liEdModbusLinkNum"));
        liEdModbusLinkNum->setMinimumSize(QSize(450, 20));

        horizontalLayout_23->addWidget(liEdModbusLinkNum);


        verticalLayout_7->addLayout(horizontalLayout_23);


        gridLayout_6->addLayout(verticalLayout_7, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 2, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_5->addWidget(tabWidget, 1, 0, 1, 2);

        puBDown = new QPushButton(DiaModEquipment);
        puBDown->setObjectName(QString::fromUtf8("puBDown"));

        gridLayout_5->addWidget(puBDown, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DiaModEquipment);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_5->addWidget(buttonBox, 2, 1, 1, 1);


        retranslateUi(DiaModEquipment);
        QObject::connect(buttonBox, SIGNAL(accepted()), DiaModEquipment, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DiaModEquipment, SLOT(reject()));

        tabWidget->setCurrentIndex(0);
        cBoxReTry->setCurrentIndex(3);
        comboBox_9->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DiaModEquipment);
    } // setupUi

    void retranslateUi(QDialog *DiaModEquipment)
    {
        DiaModEquipment->setWindowTitle(QCoreApplication::translate("DiaModEquipment", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DiaModEquipment", "\350\256\276\345\244\207\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("DiaModEquipment", "\350\256\276\345\244\207\345\220\215\347\247\260", nullptr));
        labEquName->setText(QCoreApplication::translate("DiaModEquipment", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("DiaModEquipment", "\345\233\272\344\273\266\347\211\210\346\234\254", nullptr));
        labFirmVer->setText(QCoreApplication::translate("DiaModEquipment", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("DiaModEquipment", "IP\345\234\260\345\235\200", nullptr));
        labIpAddr->setText(QCoreApplication::translate("DiaModEquipment", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("DiaModEquipment", "\345\272\217\345\210\227\345\217\267", nullptr));
        labserialNum->setText(QCoreApplication::translate("DiaModEquipment", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("DiaModEquipment", "OEM\346\240\207\350\257\206", nullptr));
        labReamrks->setText(QCoreApplication::translate("DiaModEquipment", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("DiaModEquipment", "MAC\345\234\260\345\235\200", nullptr));
        labMacAddr->setText(QCoreApplication::translate("DiaModEquipment", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("DiaModEquipment", "\345\207\272\345\216\202\346\227\245\346\234\237", nullptr));
        labGoDate->setText(QCoreApplication::translate("DiaModEquipment", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("DiaModEquipment", "\345\215\217\350\256\256\345\223\201\347\211\214", nullptr));
        labBrand->setText(QCoreApplication::translate("DiaModEquipment", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DiaModEquipment", "\345\237\272\346\234\254\350\256\276\347\275\256", nullptr));
        label_17->setText(QCoreApplication::translate("DiaModEquipment", "\350\207\252\345\212\250\350\257\206\345\210\253PLC\345\236\213\345\217\267", nullptr));
        label_19->setText(QCoreApplication::translate("DiaModEquipment", "\347\263\273\347\273\237\345\267\245\344\275\234\346\250\241\345\274\217", nullptr));
        cBoxAutoPlcModel->setItemText(0, QCoreApplication::translate("DiaModEquipment", "\345\205\263\351\227\255", nullptr));
        cBoxAutoPlcModel->setItemText(1, QCoreApplication::translate("DiaModEquipment", "\345\274\200\345\220\257", nullptr));

        cBoxWorkMode->setItemText(0, QCoreApplication::translate("DiaModEquipment", "\344\273\245\345\244\252\347\275\221\345\215\217\350\256\256\346\250\241\345\274\217", nullptr));
        cBoxWorkMode->setItemText(1, QCoreApplication::translate("DiaModEquipment", "\344\270\262\350\241\214\345\215\217\350\256\256\346\250\241\345\274\217", nullptr));

        label_18->setText(QCoreApplication::translate("DiaModEquipment", "HMI\351\200\232\350\256\257\345\217\202\346\225\260\350\207\252\351\200\202\345\272\224", nullptr));
        label_20->setText(QCoreApplication::translate("DiaModEquipment", "\351\200\232\350\256\257\351\207\215\350\257\225\346\254\241\346\225\260", nullptr));
        cBoxHmiSelfAda->setItemText(0, QCoreApplication::translate("DiaModEquipment", "\345\205\263\351\227\255", nullptr));
        cBoxHmiSelfAda->setItemText(1, QCoreApplication::translate("DiaModEquipment", "\345\274\200\345\220\257", nullptr));

        cBoxReTry->setItemText(0, QCoreApplication::translate("DiaModEquipment", "0", nullptr));
        cBoxReTry->setItemText(1, QCoreApplication::translate("DiaModEquipment", "1", nullptr));
        cBoxReTry->setItemText(2, QCoreApplication::translate("DiaModEquipment", "2", nullptr));
        cBoxReTry->setItemText(3, QCoreApplication::translate("DiaModEquipment", "3(\351\273\230\350\256\244)", nullptr));
        cBoxReTry->setItemText(4, QCoreApplication::translate("DiaModEquipment", "4", nullptr));
        cBoxReTry->setItemText(5, QCoreApplication::translate("DiaModEquipment", "5", nullptr));
        cBoxReTry->setItemText(6, QCoreApplication::translate("DiaModEquipment", "6", nullptr));
        cBoxReTry->setItemText(7, QCoreApplication::translate("DiaModEquipment", "7", nullptr));
        cBoxReTry->setItemText(8, QCoreApplication::translate("DiaModEquipment", "8", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("DiaModEquipment", "\351\253\230\347\272\247\350\256\276\347\275\256", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DiaModEquipment", "PLC\347\253\257", nullptr));
        label_23->setText(QCoreApplication::translate("DiaModEquipment", "PLC\345\236\213\345\217\267", nullptr));
        cBoxPlcModel->setItemText(0, QCoreApplication::translate("DiaModEquipment", "FX3U/FX3G", nullptr));
        cBoxPlcModel->setItemText(1, QCoreApplication::translate("DiaModEquipment", "FX1N/FX2N", nullptr));
        cBoxPlcModel->setItemText(2, QCoreApplication::translate("DiaModEquipment", "FX1S", nullptr));

        label_21->setText(QCoreApplication::translate("DiaModEquipment", "\346\240\241\351\252\214\344\275\215", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("DiaModEquipment", "\345\201\266\346\240\241\351\252\214", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("DiaModEquipment", "\345\245\207\346\240\241\351\252\214", nullptr));

        label_22->setText(QCoreApplication::translate("DiaModEquipment", "\346\263\242\347\211\271\347\216\207", nullptr));
        cBoxPlcBaudRate->setItemText(0, QCoreApplication::translate("DiaModEquipment", "9600", nullptr));
        cBoxPlcBaudRate->setItemText(1, QCoreApplication::translate("DiaModEquipment", "19200", nullptr));
        cBoxPlcBaudRate->setItemText(2, QCoreApplication::translate("DiaModEquipment", "38400", nullptr));
        cBoxPlcBaudRate->setItemText(3, QCoreApplication::translate("DiaModEquipment", "57600", nullptr));
        cBoxPlcBaudRate->setItemText(4, QCoreApplication::translate("DiaModEquipment", "115200", nullptr));

        label_24->setText(QCoreApplication::translate("DiaModEquipment", "\345\201\234\346\255\242\344\275\215", nullptr));
        comboBox_8->setItemText(0, QCoreApplication::translate("DiaModEquipment", "1", nullptr));
        comboBox_8->setItemText(1, QCoreApplication::translate("DiaModEquipment", "1.5", nullptr));
        comboBox_8->setItemText(2, QCoreApplication::translate("DiaModEquipment", "2", nullptr));

        label_25->setText(QCoreApplication::translate("DiaModEquipment", "\346\225\260\346\215\256\344\275\215", nullptr));
        comboBox_9->setItemText(0, QCoreApplication::translate("DiaModEquipment", "8", nullptr));
        comboBox_9->setItemText(1, QCoreApplication::translate("DiaModEquipment", "7", nullptr));
        comboBox_9->setItemText(2, QCoreApplication::translate("DiaModEquipment", "6", nullptr));
        comboBox_9->setItemText(3, QCoreApplication::translate("DiaModEquipment", "5", nullptr));

        groupBox_5->setTitle(QCoreApplication::translate("DiaModEquipment", "HMI\347\253\257", nullptr));
        label_29->setText(QCoreApplication::translate("DiaModEquipment", "\346\263\242\347\211\271\347\216\207", nullptr));
        cBoxHmiBaudRate->setItemText(0, QCoreApplication::translate("DiaModEquipment", "9600", nullptr));
        cBoxHmiBaudRate->setItemText(1, QCoreApplication::translate("DiaModEquipment", "19200", nullptr));
        cBoxHmiBaudRate->setItemText(2, QCoreApplication::translate("DiaModEquipment", "38400", nullptr));
        cBoxHmiBaudRate->setItemText(3, QCoreApplication::translate("DiaModEquipment", "57600", nullptr));
        cBoxHmiBaudRate->setItemText(4, QCoreApplication::translate("DiaModEquipment", "115200", nullptr));

        label_30->setText(QCoreApplication::translate("DiaModEquipment", "\346\225\260\346\215\256\344\275\215", nullptr));
        comboBox_12->setItemText(0, QCoreApplication::translate("DiaModEquipment", "7", nullptr));
        comboBox_12->setItemText(1, QCoreApplication::translate("DiaModEquipment", "8", nullptr));
        comboBox_12->setItemText(2, QCoreApplication::translate("DiaModEquipment", "6", nullptr));
        comboBox_12->setItemText(3, QCoreApplication::translate("DiaModEquipment", "5", nullptr));

        label_31->setText(QCoreApplication::translate("DiaModEquipment", "\346\240\241\351\252\214\344\275\215", nullptr));
        comboBox_13->setItemText(0, QCoreApplication::translate("DiaModEquipment", "\345\201\266\346\240\241\351\252\214", nullptr));
        comboBox_13->setItemText(1, QCoreApplication::translate("DiaModEquipment", "\345\245\207\346\240\241\351\252\214", nullptr));

        label_32->setText(QCoreApplication::translate("DiaModEquipment", "\345\201\234\346\255\242\344\275\215", nullptr));
        comboBox_14->setItemText(0, QCoreApplication::translate("DiaModEquipment", "1", nullptr));
        comboBox_14->setItemText(1, QCoreApplication::translate("DiaModEquipment", "1.5", nullptr));
        comboBox_14->setItemText(2, QCoreApplication::translate("DiaModEquipment", "2", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("DiaModEquipment", "Tab 1", nullptr));
        label_28->setText(QCoreApplication::translate("DiaModEquipment", "IP\345\234\260\345\235\200               ", nullptr));
        liEdIpAddr->setText(QCoreApplication::translate("DiaModEquipment", "192.168.1.178", nullptr));
        label_33->setText(QCoreApplication::translate("DiaModEquipment", "\345\255\220\347\275\221\346\216\251\347\240\201             ", nullptr));
        liedSubnetMask->setText(QCoreApplication::translate("DiaModEquipment", "255.255.255.0", nullptr));
        label_34->setText(QCoreApplication::translate("DiaModEquipment", "\347\275\221\345\205\263\345\234\260\345\235\200             ", nullptr));
        liGateway->setText(QCoreApplication::translate("DiaModEquipment", "192.168.1.1", nullptr));
        label_35->setText(QCoreApplication::translate("DiaModEquipment", "\347\253\257\345\217\243\345\217\267               ", nullptr));
        liPort->setText(QCoreApplication::translate("DiaModEquipment", "5551", nullptr));
        label_36->setText(QCoreApplication::translate("DiaModEquipment", "ModbusTcp\345\274\200\346\224\276\346\225\260(0-4)  ", nullptr));
        liEdModbusLinkNum->setText(QCoreApplication::translate("DiaModEquipment", "1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("DiaModEquipment", "Tab 2", nullptr));
        puBDown->setText(QCoreApplication::translate("DiaModEquipment", "\344\270\213\350\275\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiaModEquipment: public Ui_DiaModEquipment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAMODEQUIPMENT_H
