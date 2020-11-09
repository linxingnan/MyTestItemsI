/********************************************************************************
** Form generated from reading UI file 'diasetip.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIASETIP_H
#define UI_DIASETIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DiaSetIp
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *liEdSerialNum;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *liEdIp;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *liEdSubnet;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lEdGateway;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DiaSetIp)
    {
        if (DiaSetIp->objectName().isEmpty())
            DiaSetIp->setObjectName(QString::fromUtf8("DiaSetIp"));
        DiaSetIp->resize(506, 387);
        gridLayout = new QGridLayout(DiaSetIp);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DiaSetIp);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        liEdSerialNum = new QLineEdit(DiaSetIp);
        liEdSerialNum->setObjectName(QString::fromUtf8("liEdSerialNum"));

        horizontalLayout->addWidget(liEdSerialNum);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(DiaSetIp);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        liEdIp = new QLineEdit(DiaSetIp);
        liEdIp->setObjectName(QString::fromUtf8("liEdIp"));

        horizontalLayout_2->addWidget(liEdIp);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(DiaSetIp);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        liEdSubnet = new QLineEdit(DiaSetIp);
        liEdSubnet->setObjectName(QString::fromUtf8("liEdSubnet"));

        horizontalLayout_3->addWidget(liEdSubnet);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(DiaSetIp);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lEdGateway = new QLineEdit(DiaSetIp);
        lEdGateway->setObjectName(QString::fromUtf8("lEdGateway"));

        horizontalLayout_4->addWidget(lEdGateway);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DiaSetIp);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(DiaSetIp);
        QObject::connect(buttonBox, SIGNAL(accepted()), DiaSetIp, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DiaSetIp, SLOT(reject()));

        QMetaObject::connectSlotsByName(DiaSetIp);
    } // setupUi

    void retranslateUi(QDialog *DiaSetIp)
    {
        DiaSetIp->setWindowTitle(QCoreApplication::translate("DiaSetIp", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DiaSetIp", "\344\272\247\345\223\201\345\272\217\345\210\227\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("DiaSetIp", "ip\345\234\260\345\235\200  ", nullptr));
        label_3->setText(QCoreApplication::translate("DiaSetIp", "\345\255\220\347\275\221\346\216\251\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("DiaSetIp", "\347\275\221\345\205\263\345\234\260\345\235\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiaSetIp: public Ui_DiaSetIp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIASETIP_H
