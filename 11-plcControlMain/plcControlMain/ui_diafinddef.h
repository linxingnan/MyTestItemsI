/********************************************************************************
** Form generated from reading UI file 'diafinddef.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAFINDDEF_H
#define UI_DIAFINDDEF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DiaFindDef
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *liEdIp;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DiaFindDef)
    {
        if (DiaFindDef->objectName().isEmpty())
            DiaFindDef->setObjectName(QString::fromUtf8("DiaFindDef"));
        DiaFindDef->resize(461, 340);
        gridLayout = new QGridLayout(DiaFindDef);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(DiaFindDef);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(DiaFindDef);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(false);
        comboBox->setMaximumSize(QSize(220, 16777215));

        horizontalLayout_2->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(DiaFindDef);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(110, 16777215));

        horizontalLayout->addWidget(label_2);

        liEdIp = new QLineEdit(DiaFindDef);
        liEdIp->setObjectName(QString::fromUtf8("liEdIp"));
        liEdIp->setMaximumSize(QSize(220, 30));

        horizontalLayout->addWidget(liEdIp);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DiaFindDef);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(DiaFindDef);
        QObject::connect(buttonBox, SIGNAL(accepted()), DiaFindDef, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DiaFindDef, SLOT(reject()));

        QMetaObject::connectSlotsByName(DiaFindDef);
    } // setupUi

    void retranslateUi(QDialog *DiaFindDef)
    {
        DiaFindDef->setWindowTitle(QCoreApplication::translate("DiaFindDef", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DiaFindDef", "\350\256\276\345\244\207\347\261\273\345\236\213", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DiaFindDef", "BCNet\346\250\241\345\235\227\347\263\273\345\210\227", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DiaFindDef", "\350\245\277\351\227\250\345\255\220S7\347\263\273\345\210\227", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DiaFindDef", "\350\245\277\351\227\250\345\255\220S7\347\263\273\345\210\227P", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("DiaFindDef", "\350\245\277\351\227\250\345\255\220S7\347\263\273\345\210\227M", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("DiaFindDef", "\344\273\245\345\244\252\347\275\221\345\215\217\350\256\256\347\275\221\345\205\263", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("DiaFindDef", "\344\270\211\350\217\261\345\215\217\350\256\256\347\275\221\345\205\263", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("DiaFindDef", "\345\267\245\344\270\232\350\277\234\347\250\213\347\275\221\345\205\263", nullptr));

        label_2->setText(QCoreApplication::translate("DiaFindDef", "\350\256\276\345\244\207IP\345\234\260\345\235\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiaFindDef: public Ui_DiaFindDef {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAFINDDEF_H
