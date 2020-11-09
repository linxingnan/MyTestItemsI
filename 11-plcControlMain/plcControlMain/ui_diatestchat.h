/********************************************************************************
** Form generated from reading UI file 'diatestchat.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIATESTCHAT_H
#define UI_DIATESTCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiaTestChat
{
public:
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spBoxIp1;
    QLabel *label_7;
    QSpinBox *spBoxIp2;
    QLabel *label_10;
    QSpinBox *spBoxIp3;
    QLabel *label_13;
    QSpinBox *spBoxIp4;
    QLabel *labNameIp;
    QVBoxLayout *verticalLayout;
    QPushButton *puBLink;
    QPushButton *puBClose;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QTextEdit *tEdReData;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cBoxData;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLabel *labReNum;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QLabel *labReTrueNum;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QLabel *labReResponse;
    QLabel *label_17;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *cBoxPlcName;
    QComboBox *cBoxReadOrWrite;
    QLabel *label_2;
    QComboBox *cBoxRegion;
    QLabel *label_3;
    QSpinBox *spBoxStart;
    QLabel *label_4;
    QSpinBox *spBoxCount;
    QLabel *label_5;
    QComboBox *cBoxCompany;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_16;
    QTextEdit *textEdit;
    QWidget *page_2;
    QGridLayout *gridLayout_7;
    QPushButton *puBPositioning;
    QPushButton *puBReset;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QTextEdit *tEdSendData;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *labSendNum;
    QLabel *label_8;
    QCheckBox *cBoxLoopSend;
    QPushButton *puBSend;
    QLabel *labMessage;

    void setupUi(QDialog *DiaTestChat)
    {
        if (DiaTestChat->objectName().isEmpty())
            DiaTestChat->setObjectName(QString::fromUtf8("DiaTestChat"));
        DiaTestChat->resize(690, 563);
        gridLayout_6 = new QGridLayout(DiaTestChat);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_2 = new QGroupBox(DiaTestChat);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spBoxIp1 = new QSpinBox(groupBox_2);
        spBoxIp1->setObjectName(QString::fromUtf8("spBoxIp1"));
        spBoxIp1->setMaximum(255);
        spBoxIp1->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout->addWidget(spBoxIp1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_7);

        spBoxIp2 = new QSpinBox(groupBox_2);
        spBoxIp2->setObjectName(QString::fromUtf8("spBoxIp2"));
        spBoxIp2->setMaximum(255);
        spBoxIp2->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout->addWidget(spBoxIp2);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_10);

        spBoxIp3 = new QSpinBox(groupBox_2);
        spBoxIp3->setObjectName(QString::fromUtf8("spBoxIp3"));
        spBoxIp3->setMaximum(255);
        spBoxIp3->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout->addWidget(spBoxIp3);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_13);

        spBoxIp4 = new QSpinBox(groupBox_2);
        spBoxIp4->setObjectName(QString::fromUtf8("spBoxIp4"));
        spBoxIp4->setMaximum(255);
        spBoxIp4->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout->addWidget(spBoxIp4);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        labNameIp = new QLabel(groupBox_2);
        labNameIp->setObjectName(QString::fromUtf8("labNameIp"));

        gridLayout_2->addWidget(labNameIp, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        puBLink = new QPushButton(groupBox_2);
        puBLink->setObjectName(QString::fromUtf8("puBLink"));

        verticalLayout->addWidget(puBLink);

        puBClose = new QPushButton(groupBox_2);
        puBClose->setObjectName(QString::fromUtf8("puBClose"));

        verticalLayout->addWidget(puBClose);


        gridLayout_2->addLayout(verticalLayout, 0, 2, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(DiaTestChat);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tEdReData = new QTextEdit(groupBox_4);
        tEdReData->setObjectName(QString::fromUtf8("tEdReData"));

        gridLayout_3->addWidget(tEdReData, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        cBoxData = new QCheckBox(groupBox_4);
        cBoxData->setObjectName(QString::fromUtf8("cBoxData"));

        verticalLayout_3->addWidget(cBoxData);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        labReNum = new QLabel(groupBox_4);
        labReNum->setObjectName(QString::fromUtf8("labReNum"));
        labReNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labReNum);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_3->addWidget(label_11);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_4->addWidget(label_12);

        labReTrueNum = new QLabel(groupBox_4);
        labReTrueNum->setObjectName(QString::fromUtf8("labReTrueNum"));
        labReTrueNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(labReTrueNum);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_4->addWidget(label_14);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_5->addWidget(label_15);

        labReResponse = new QLabel(groupBox_4);
        labReResponse->setObjectName(QString::fromUtf8("labReResponse"));
        labReResponse->setMinimumSize(QSize(40, 0));
        labReResponse->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(labReResponse);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_5->addWidget(label_17);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);


        gridLayout_3->addLayout(verticalLayout_3, 0, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox = new QGroupBox(DiaTestChat);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 133));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cBoxPlcName = new QComboBox(groupBox);
        cBoxPlcName->addItem(QString());
        cBoxPlcName->addItem(QString());
        cBoxPlcName->addItem(QString());
        cBoxPlcName->addItem(QString());
        cBoxPlcName->addItem(QString());
        cBoxPlcName->addItem(QString());
        cBoxPlcName->addItem(QString());
        cBoxPlcName->addItem(QString());
        cBoxPlcName->addItem(QString());
        cBoxPlcName->addItem(QString());
        cBoxPlcName->addItem(QString());
        cBoxPlcName->addItem(QString());
        cBoxPlcName->setObjectName(QString::fromUtf8("cBoxPlcName"));
        cBoxPlcName->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(cBoxPlcName, 0, 0, 1, 1);

        cBoxReadOrWrite = new QComboBox(groupBox);
        cBoxReadOrWrite->addItem(QString());
        cBoxReadOrWrite->addItem(QString());
        cBoxReadOrWrite->setObjectName(QString::fromUtf8("cBoxReadOrWrite"));

        gridLayout->addWidget(cBoxReadOrWrite, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        cBoxRegion = new QComboBox(groupBox);
        cBoxRegion->addItem(QString());
        cBoxRegion->addItem(QString());
        cBoxRegion->addItem(QString());
        cBoxRegion->addItem(QString());
        cBoxRegion->setObjectName(QString::fromUtf8("cBoxRegion"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cBoxRegion->sizePolicy().hasHeightForWidth());
        cBoxRegion->setSizePolicy(sizePolicy2);
        cBoxRegion->setMinimumSize(QSize(90, 0));

        gridLayout->addWidget(cBoxRegion, 0, 3, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_3, 0, 4, 1, 1);

        spBoxStart = new QSpinBox(groupBox);
        spBoxStart->setObjectName(QString::fromUtf8("spBoxStart"));
        spBoxStart->setMaximum(65535);

        gridLayout->addWidget(spBoxStart, 0, 5, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_4, 0, 6, 1, 1);

        spBoxCount = new QSpinBox(groupBox);
        spBoxCount->setObjectName(QString::fromUtf8("spBoxCount"));
        spBoxCount->setMinimum(1);
        spBoxCount->setMaximum(120);
        spBoxCount->setValue(1);

        gridLayout->addWidget(spBoxCount, 0, 7, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_5, 0, 8, 1, 1);

        cBoxCompany = new QComboBox(groupBox);
        cBoxCompany->addItem(QString());
        cBoxCompany->addItem(QString());
        cBoxCompany->setObjectName(QString::fromUtf8("cBoxCompany"));

        gridLayout->addWidget(cBoxCompany, 0, 9, 1, 1);

        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_16 = new QLabel(page);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMaximumSize(QSize(16777215, 25));

        verticalLayout_5->addWidget(label_16);

        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 50));

        verticalLayout_5->addWidget(textEdit);


        gridLayout_5->addLayout(verticalLayout_5, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_7 = new QGridLayout(page_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        puBPositioning = new QPushButton(page_2);
        puBPositioning->setObjectName(QString::fromUtf8("puBPositioning"));

        gridLayout_7->addWidget(puBPositioning, 0, 0, 1, 1);

        puBReset = new QPushButton(page_2);
        puBReset->setObjectName(QString::fromUtf8("puBReset"));

        gridLayout_7->addWidget(puBReset, 0, 1, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 10);


        gridLayout_6->addWidget(groupBox, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(DiaTestChat);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tEdSendData = new QTextEdit(groupBox_3);
        tEdSendData->setObjectName(QString::fromUtf8("tEdSendData"));

        gridLayout_4->addWidget(tEdSendData, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        labSendNum = new QLabel(groupBox_3);
        labSendNum->setObjectName(QString::fromUtf8("labSendNum"));
        labSendNum->setMinimumSize(QSize(40, 0));
        labSendNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labSendNum);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);


        verticalLayout_4->addLayout(horizontalLayout_2);

        cBoxLoopSend = new QCheckBox(groupBox_3);
        cBoxLoopSend->setObjectName(QString::fromUtf8("cBoxLoopSend"));

        verticalLayout_4->addWidget(cBoxLoopSend);

        puBSend = new QPushButton(groupBox_3);
        puBSend->setObjectName(QString::fromUtf8("puBSend"));

        verticalLayout_4->addWidget(puBSend);


        gridLayout_4->addLayout(verticalLayout_4, 0, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 3, 0, 1, 1);

        labMessage = new QLabel(DiaTestChat);
        labMessage->setObjectName(QString::fromUtf8("labMessage"));

        gridLayout_6->addWidget(labMessage, 4, 0, 1, 1);


        retranslateUi(DiaTestChat);

        cBoxPlcName->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DiaTestChat);
    } // setupUi

    void retranslateUi(QDialog *DiaTestChat)
    {
        DiaTestChat->setWindowTitle(QCoreApplication::translate("DiaTestChat", "Dialog", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DiaTestChat", "\350\277\236\346\216\245", nullptr));
        label_7->setText(QCoreApplication::translate("DiaTestChat", ".", nullptr));
        label_10->setText(QCoreApplication::translate("DiaTestChat", ".", nullptr));
        label_13->setText(QCoreApplication::translate("DiaTestChat", ".", nullptr));
        labNameIp->setText(QCoreApplication::translate("DiaTestChat", "IP\345\234\260\345\235\200", nullptr));
        puBLink->setText(QCoreApplication::translate("DiaTestChat", "\350\277\236\346\216\245", nullptr));
        puBClose->setText(QCoreApplication::translate("DiaTestChat", "\346\226\255\345\274\200", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DiaTestChat", "\346\216\245\346\224\266\346\225\260\346\215\256\345\270\247", nullptr));
        cBoxData->setText(QCoreApplication::translate("DiaTestChat", "\346\225\260\346\215\256", nullptr));
        label_9->setText(QCoreApplication::translate("DiaTestChat", "\346\216\245\346\224\266", nullptr));
        labReNum->setText(QCoreApplication::translate("DiaTestChat", "0", nullptr));
        label_11->setText(QCoreApplication::translate("DiaTestChat", "\346\254\241", nullptr));
        label_12->setText(QCoreApplication::translate("DiaTestChat", "\346\255\243\347\241\256", nullptr));
        labReTrueNum->setText(QCoreApplication::translate("DiaTestChat", "0", nullptr));
        label_14->setText(QCoreApplication::translate("DiaTestChat", "\346\254\241", nullptr));
        label_15->setText(QCoreApplication::translate("DiaTestChat", "\345\223\215\345\272\224", nullptr));
        labReResponse->setText(QCoreApplication::translate("DiaTestChat", "0", nullptr));
        label_17->setText(QCoreApplication::translate("DiaTestChat", "ms", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DiaTestChat", "\351\200\232\350\256\257\344\273\273\345\212\241", nullptr));
        cBoxPlcName->setItemText(0, QCoreApplication::translate("DiaTestChat", "BCNet-FP", nullptr));
        cBoxPlcName->setItemText(1, QCoreApplication::translate("DiaTestChat", "BCNet-FX", nullptr));
        cBoxPlcName->setItemText(2, QCoreApplication::translate("DiaTestChat", "BCNet-DVP", nullptr));
        cBoxPlcName->setItemText(3, QCoreApplication::translate("DiaTestChat", "BCNet-CP", nullptr));
        cBoxPlcName->setItemText(4, QCoreApplication::translate("DiaTestChat", "BCNet-CJ", nullptr));
        cBoxPlcName->setItemText(5, QCoreApplication::translate("DiaTestChat", "BCNet-Q", nullptr));
        cBoxPlcName->setItemText(6, QCoreApplication::translate("DiaTestChat", "BCNet-MB", nullptr));
        cBoxPlcName->setItemText(7, QCoreApplication::translate("DiaTestChat", "BCNet-SC", nullptr));
        cBoxPlcName->setItemText(8, QCoreApplication::translate("DiaTestChat", "BCNet-XJ", nullptr));
        cBoxPlcName->setItemText(9, QCoreApplication::translate("DiaTestChat", "BCNet-KV", nullptr));
        cBoxPlcName->setItemText(10, QCoreApplication::translate("DiaTestChat", "BCNet-VB", nullptr));
        cBoxPlcName->setItemText(11, QCoreApplication::translate("DiaTestChat", "BCNet", nullptr));

        cBoxReadOrWrite->setItemText(0, QCoreApplication::translate("DiaTestChat", "\350\257\273\345\217\226", nullptr));
        cBoxReadOrWrite->setItemText(1, QCoreApplication::translate("DiaTestChat", "\345\206\231\345\205\245", nullptr));

        label_2->setText(QCoreApplication::translate("DiaTestChat", "PLC\345\206\205\351\203\250\347\232\204", nullptr));
        cBoxRegion->setItemText(0, QCoreApplication::translate("DiaTestChat", "TN", nullptr));
        cBoxRegion->setItemText(1, QCoreApplication::translate("DiaTestChat", "CN", nullptr));
        cBoxRegion->setItemText(2, QCoreApplication::translate("DiaTestChat", "D8000", nullptr));
        cBoxRegion->setItemText(3, QCoreApplication::translate("DiaTestChat", "D", nullptr));

        label_3->setText(QCoreApplication::translate("DiaTestChat", "\345\214\272\347\232\204", nullptr));
        label_4->setText(QCoreApplication::translate("DiaTestChat", "\345\274\200\345\247\213\347\232\204", nullptr));
        label_5->setText(QCoreApplication::translate("DiaTestChat", "\344\270\252", nullptr));
        cBoxCompany->setItemText(0, QCoreApplication::translate("DiaTestChat", "\345\255\227", nullptr));
        cBoxCompany->setItemText(1, QCoreApplication::translate("DiaTestChat", "\344\275\215", nullptr));

        label_16->setText(QCoreApplication::translate("DiaTestChat", "\345\241\253\345\205\2452\344\270\252\345\255\227\350\212\202\347\232\204\345\276\205\345\206\231\346\225\260\346\215\256\357\274\21016\350\277\233\345\210\266\357\274\214\344\273\245\347\251\272\346\240\274\345\210\206\345\274\200\357\274\211\357\274\232", nullptr));
        textEdit->setHtml(QCoreApplication::translate("DiaTestChat", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">11 22 33</p></body></html>", nullptr));
        puBPositioning->setText(QCoreApplication::translate("DiaTestChat", "\347\275\256\344\275\215", nullptr));
        puBReset->setText(QCoreApplication::translate("DiaTestChat", "\345\244\215\344\275\215", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DiaTestChat", "\345\217\221\351\200\201\346\225\260\346\215\256\345\270\247", nullptr));
        label_6->setText(QCoreApplication::translate("DiaTestChat", "\345\217\221\351\200\201", nullptr));
        labSendNum->setText(QCoreApplication::translate("DiaTestChat", "0", nullptr));
        label_8->setText(QCoreApplication::translate("DiaTestChat", "\346\254\241", nullptr));
        cBoxLoopSend->setText(QCoreApplication::translate("DiaTestChat", "\345\276\252\347\216\257", nullptr));
        puBSend->setText(QCoreApplication::translate("DiaTestChat", "\345\217\221\351\200\201", nullptr));
        labMessage->setText(QCoreApplication::translate("DiaTestChat", "\350\255\246\345\221\212\357\274\232\347\246\201\346\255\242\345\257\271\346\255\243\345\234\250\346\216\247\345\210\266\350\256\276\345\244\207\350\277\220\350\241\214\347\232\204PLC\350\277\233\350\241\214\351\200\232\350\256\257\346\265\213\350\257\225  \344\275\277\347\224\250modbusTCP\351\200\232\344\277\241 \347\253\257\345\217\243\345\217\267\344\270\272502", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiaTestChat: public Ui_DiaTestChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIATESTCHAT_H
