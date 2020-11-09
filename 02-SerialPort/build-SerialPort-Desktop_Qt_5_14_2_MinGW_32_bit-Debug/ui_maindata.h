/********************************************************************************
** Form generated from reading UI file 'maindata.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDATA_H
#define UI_MAINDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <helpApi/mycombobox.h>

QT_BEGIN_NAMESPACE

class Ui_mainData
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *pageRaw;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdRecData;
    QWidget *pageCompare;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QTextEdit *textEdComRawData;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QTextEdit *textEdComHexData;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QComboBox *comBoxFlowCtrl;
    QLabel *label_5;
    QLabel *label_2;
    QComboBox *comBoxParity;
    QCheckBox *cheBoxDataComPa;
    QPushButton *puBuClearRe;
    MycomboBox *comBoxSerPort;
    QLabel *label;
    QPushButton *puBuOpenPort;
    QCheckBox *cheBoxHexRe;
    QLabel *label_4;
    QComboBox *comBoxBound;
    QLabel *label_3;
    QComboBox *comBoxDaBit;
    QLabel *label_6;
    QComboBox *comBoxStopBit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdSendData;
    QPushButton *puBuSendData;
    QPushButton *puBuClearSend;
    QCheckBox *cheBoxHexSend;
    QCheckBox *cheBoxSendT;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainData)
    {
        if (mainData->objectName().isEmpty())
            mainData->setObjectName(QString::fromUtf8("mainData"));
        mainData->resize(792, 545);
        centralwidget = new QWidget(mainData);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageRaw = new QWidget();
        pageRaw->setObjectName(QString::fromUtf8("pageRaw"));
        gridLayout_2 = new QGridLayout(pageRaw);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEdRecData = new QTextEdit(pageRaw);
        textEdRecData->setObjectName(QString::fromUtf8("textEdRecData"));

        gridLayout_2->addWidget(textEdRecData, 0, 0, 1, 1);

        stackedWidget->addWidget(pageRaw);
        pageCompare = new QWidget();
        pageCompare->setObjectName(QString::fromUtf8("pageCompare"));
        gridLayout_5 = new QGridLayout(pageCompare);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(pageCompare);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        textEdComRawData = new QTextEdit(pageCompare);
        textEdComRawData->setObjectName(QString::fromUtf8("textEdComRawData"));

        verticalLayout->addWidget(textEdComRawData);


        horizontalLayout->addLayout(verticalLayout);

        line = new QFrame(pageCompare);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_8 = new QLabel(pageCompare);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        textEdComHexData = new QTextEdit(pageCompare);
        textEdComHexData->setObjectName(QString::fromUtf8("textEdComHexData"));

        verticalLayout_2->addWidget(textEdComHexData);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(pageCompare);

        gridLayout_4->addWidget(stackedWidget, 0, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comBoxFlowCtrl = new QComboBox(groupBox);
        comBoxFlowCtrl->addItem(QString());
        comBoxFlowCtrl->addItem(QString());
        comBoxFlowCtrl->addItem(QString());
        comBoxFlowCtrl->setObjectName(QString::fromUtf8("comBoxFlowCtrl"));

        gridLayout->addWidget(comBoxFlowCtrl, 5, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        comBoxParity = new QComboBox(groupBox);
        comBoxParity->addItem(QString());
        comBoxParity->addItem(QString());
        comBoxParity->addItem(QString());
        comBoxParity->setObjectName(QString::fromUtf8("comBoxParity"));

        gridLayout->addWidget(comBoxParity, 4, 1, 1, 1);

        cheBoxDataComPa = new QCheckBox(groupBox);
        cheBoxDataComPa->setObjectName(QString::fromUtf8("cheBoxDataComPa"));

        gridLayout->addWidget(cheBoxDataComPa, 9, 0, 1, 2);

        puBuClearRe = new QPushButton(groupBox);
        puBuClearRe->setObjectName(QString::fromUtf8("puBuClearRe"));

        gridLayout->addWidget(puBuClearRe, 7, 0, 1, 2);

        comBoxSerPort = new MycomboBox(groupBox);
        comBoxSerPort->setObjectName(QString::fromUtf8("comBoxSerPort"));

        gridLayout->addWidget(comBoxSerPort, 0, 0, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        puBuOpenPort = new QPushButton(groupBox);
        puBuOpenPort->setObjectName(QString::fromUtf8("puBuOpenPort"));

        gridLayout->addWidget(puBuOpenPort, 6, 1, 1, 1);

        cheBoxHexRe = new QCheckBox(groupBox);
        cheBoxHexRe->setObjectName(QString::fromUtf8("cheBoxHexRe"));

        gridLayout->addWidget(cheBoxHexRe, 8, 0, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        comBoxBound = new QComboBox(groupBox);
        comBoxBound->addItem(QString());
        comBoxBound->addItem(QString());
        comBoxBound->addItem(QString());
        comBoxBound->addItem(QString());
        comBoxBound->addItem(QString());
        comBoxBound->addItem(QString());
        comBoxBound->setObjectName(QString::fromUtf8("comBoxBound"));
        comBoxBound->setEditable(true);

        gridLayout->addWidget(comBoxBound, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        comBoxDaBit = new QComboBox(groupBox);
        comBoxDaBit->addItem(QString());
        comBoxDaBit->addItem(QString());
        comBoxDaBit->addItem(QString());
        comBoxDaBit->addItem(QString());
        comBoxDaBit->setObjectName(QString::fromUtf8("comBoxDaBit"));

        gridLayout->addWidget(comBoxDaBit, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        comBoxStopBit = new QComboBox(groupBox);
        comBoxStopBit->addItem(QString());
        comBoxStopBit->addItem(QString());
        comBoxStopBit->addItem(QString());
        comBoxStopBit->setObjectName(QString::fromUtf8("comBoxStopBit"));

        gridLayout->addWidget(comBoxStopBit, 2, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 1, 2, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        textEdSendData = new QTextEdit(groupBox_2);
        textEdSendData->setObjectName(QString::fromUtf8("textEdSendData"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdSendData->sizePolicy().hasHeightForWidth());
        textEdSendData->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(textEdSendData, 0, 0, 2, 2);

        puBuSendData = new QPushButton(groupBox_2);
        puBuSendData->setObjectName(QString::fromUtf8("puBuSendData"));

        gridLayout_3->addWidget(puBuSendData, 0, 2, 1, 1);

        puBuClearSend = new QPushButton(groupBox_2);
        puBuClearSend->setObjectName(QString::fromUtf8("puBuClearSend"));

        gridLayout_3->addWidget(puBuClearSend, 1, 2, 1, 1);

        cheBoxHexSend = new QCheckBox(groupBox_2);
        cheBoxHexSend->setObjectName(QString::fromUtf8("cheBoxHexSend"));

        gridLayout_3->addWidget(cheBoxHexSend, 2, 0, 1, 1);

        cheBoxSendT = new QCheckBox(groupBox_2);
        cheBoxSendT->setObjectName(QString::fromUtf8("cheBoxSendT"));

        gridLayout_3->addWidget(cheBoxSendT, 2, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);

        mainData->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainData);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 792, 26));
        mainData->setMenuBar(menubar);
        statusbar = new QStatusBar(mainData);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainData->setStatusBar(statusbar);

        retranslateUi(mainData);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainData);
    } // setupUi

    void retranslateUi(QMainWindow *mainData)
    {
        mainData->setWindowTitle(QCoreApplication::translate("mainData", "mainData", nullptr));
        label_7->setText(QCoreApplication::translate("mainData", "\345\216\237\345\247\213\346\225\260\346\215\256", nullptr));
        label_8->setText(QCoreApplication::translate("mainData", "16\350\277\233\345\210\266", nullptr));
        groupBox->setTitle(QCoreApplication::translate("mainData", "\344\270\262\345\217\243\346\225\260\346\215\256", nullptr));
        comBoxFlowCtrl->setItemText(0, QCoreApplication::translate("mainData", "NO", nullptr));
        comBoxFlowCtrl->setItemText(1, QCoreApplication::translate("mainData", "RTS/CTS", nullptr));
        comBoxFlowCtrl->setItemText(2, QCoreApplication::translate("mainData", "XON/XOFF", nullptr));

        label_5->setText(QCoreApplication::translate("mainData", "\344\270\262\345\217\243\346\223\215\344\275\234", nullptr));
        label_2->setText(QCoreApplication::translate("mainData", "\345\201\234\346\255\242\344\275\215", nullptr));
        comBoxParity->setItemText(0, QCoreApplication::translate("mainData", "\346\227\240", nullptr));
        comBoxParity->setItemText(1, QCoreApplication::translate("mainData", "\345\245\207\346\240\241\351\252\214", nullptr));
        comBoxParity->setItemText(2, QCoreApplication::translate("mainData", "\345\201\266\346\240\241\351\252\214", nullptr));

        cheBoxDataComPa->setText(QCoreApplication::translate("mainData", "\346\225\260\346\215\256\345\257\271\346\257\224", nullptr));
        puBuClearRe->setText(QCoreApplication::translate("mainData", "\346\270\205\351\231\244\347\252\227\345\217\243", nullptr));
        label->setText(QCoreApplication::translate("mainData", "\346\263\242\347\211\271\347\216\207", nullptr));
        puBuOpenPort->setText(QCoreApplication::translate("mainData", "\346\211\223\345\274\200", nullptr));
        cheBoxHexRe->setText(QCoreApplication::translate("mainData", "16\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        label_4->setText(QCoreApplication::translate("mainData", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        comBoxBound->setItemText(0, QCoreApplication::translate("mainData", "1382400", nullptr));
        comBoxBound->setItemText(1, QCoreApplication::translate("mainData", "256000", nullptr));
        comBoxBound->setItemText(2, QCoreApplication::translate("mainData", "115200", nullptr));
        comBoxBound->setItemText(3, QCoreApplication::translate("mainData", "38400", nullptr));
        comBoxBound->setItemText(4, QCoreApplication::translate("mainData", "9600", nullptr));
        comBoxBound->setItemText(5, QCoreApplication::translate("mainData", "\350\207\252\345\256\232\344\271\211", nullptr));

        label_3->setText(QCoreApplication::translate("mainData", "\346\225\260\346\215\256\344\275\215", nullptr));
        comBoxDaBit->setItemText(0, QCoreApplication::translate("mainData", "8", nullptr));
        comBoxDaBit->setItemText(1, QCoreApplication::translate("mainData", "7", nullptr));
        comBoxDaBit->setItemText(2, QCoreApplication::translate("mainData", "6", nullptr));
        comBoxDaBit->setItemText(3, QCoreApplication::translate("mainData", "5", nullptr));

        label_6->setText(QCoreApplication::translate("mainData", "\346\265\201\346\216\247\345\210\266", nullptr));
        comBoxStopBit->setItemText(0, QCoreApplication::translate("mainData", "1", nullptr));
        comBoxStopBit->setItemText(1, QCoreApplication::translate("mainData", "1.5", nullptr));
        comBoxStopBit->setItemText(2, QCoreApplication::translate("mainData", "2", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("mainData", "\346\225\260\346\215\256\345\217\221\351\200\201", nullptr));
        puBuSendData->setText(QCoreApplication::translate("mainData", "\345\217\221\351\200\201", nullptr));
        puBuClearSend->setText(QCoreApplication::translate("mainData", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        cheBoxHexSend->setText(QCoreApplication::translate("mainData", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        cheBoxSendT->setText(QCoreApplication::translate("mainData", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainData: public Ui_mainData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDATA_H
