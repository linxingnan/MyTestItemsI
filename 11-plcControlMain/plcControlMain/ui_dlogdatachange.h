/********************************************************************************
** Form generated from reading UI file 'dlogdatachange.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLOGDATACHANGE_H
#define UI_DLOGDATACHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DLogDataChange
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *liEdIpOne;
    QLabel *label_3;
    QLineEdit *liEdIpTwo;
    QLabel *label_4;
    QLineEdit *liEdIpThree;
    QLabel *label_5;
    QLineEdit *liEdIpFour;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *liEdUpdatePort;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DLogDataChange)
    {
        if (DLogDataChange->objectName().isEmpty())
            DLogDataChange->setObjectName(QString::fromUtf8("DLogDataChange"));
        DLogDataChange->resize(512, 376);
        gridLayout = new QGridLayout(DLogDataChange);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(DLogDataChange);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        liEdIpOne = new QLineEdit(DLogDataChange);
        liEdIpOne->setObjectName(QString::fromUtf8("liEdIpOne"));
        liEdIpOne->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(liEdIpOne);

        label_3 = new QLabel(DLogDataChange);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        liEdIpTwo = new QLineEdit(DLogDataChange);
        liEdIpTwo->setObjectName(QString::fromUtf8("liEdIpTwo"));
        liEdIpTwo->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(liEdIpTwo);

        label_4 = new QLabel(DLogDataChange);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);

        liEdIpThree = new QLineEdit(DLogDataChange);
        liEdIpThree->setObjectName(QString::fromUtf8("liEdIpThree"));
        liEdIpThree->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(liEdIpThree);

        label_5 = new QLabel(DLogDataChange);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        liEdIpFour = new QLineEdit(DLogDataChange);
        liEdIpFour->setObjectName(QString::fromUtf8("liEdIpFour"));
        liEdIpFour->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(liEdIpFour);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(DLogDataChange);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        liEdUpdatePort = new QLineEdit(DLogDataChange);
        liEdUpdatePort->setObjectName(QString::fromUtf8("liEdUpdatePort"));

        horizontalLayout_4->addWidget(liEdUpdatePort);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DLogDataChange);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(DLogDataChange);
        QObject::connect(buttonBox, SIGNAL(accepted()), DLogDataChange, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DLogDataChange, SLOT(reject()));

        QMetaObject::connectSlotsByName(DLogDataChange);
    } // setupUi

    void retranslateUi(QDialog *DLogDataChange)
    {
        DLogDataChange->setWindowTitle(QCoreApplication::translate("DLogDataChange", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DLogDataChange", "ip\345\234\260\345\235\200", nullptr));
        liEdIpOne->setText(QCoreApplication::translate("DLogDataChange", "192", nullptr));
        label_3->setText(QCoreApplication::translate("DLogDataChange", ".", nullptr));
        liEdIpTwo->setText(QCoreApplication::translate("DLogDataChange", "168", nullptr));
        label_4->setText(QCoreApplication::translate("DLogDataChange", ".", nullptr));
        label_5->setText(QCoreApplication::translate("DLogDataChange", ".", nullptr));
        label_6->setText(QCoreApplication::translate("DLogDataChange", "\346\233\264\346\226\260\347\253\257\345\217\243\345\217\267", nullptr));
        liEdUpdatePort->setText(QCoreApplication::translate("DLogDataChange", "8888", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DLogDataChange: public Ui_DLogDataChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLOGDATACHANGE_H
