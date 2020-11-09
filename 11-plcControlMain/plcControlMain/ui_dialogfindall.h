/********************************************************************************
** Form generated from reading UI file 'dialogfindall.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFINDALL_H
#define UI_DIALOGFINDALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DialogFindAll
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QFrame *line_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *DialogFindAll)
    {
        if (DialogFindAll->objectName().isEmpty())
            DialogFindAll->setObjectName(QString::fromUtf8("DialogFindAll"));
        DialogFindAll->resize(566, 295);
        DialogFindAll->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(DialogFindAll);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        line = new QFrame(DialogFindAll);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 2, 1, 1);

        line_2 = new QFrame(DialogFindAll);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 2, 1, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DialogFindAll);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(50, 50));
        label->setMaximumSize(QSize(70, 70));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/icon/sousuo.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(DialogFindAll);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(200, 200));
        QFont font;
        font.setPointSize(40);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout, 2, 2, 2, 1);

        line_3 = new QFrame(DialogFindAll);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 3, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        line_4 = new QFrame(DialogFindAll);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 2, 1, 1);


        retranslateUi(DialogFindAll);

        QMetaObject::connectSlotsByName(DialogFindAll);
    } // setupUi

    void retranslateUi(QDialog *DialogFindAll)
    {
        DialogFindAll->setWindowTitle(QCoreApplication::translate("DialogFindAll", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("DialogFindAll", "\345\205\250\345\261\200\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFindAll: public Ui_DialogFindAll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFINDALL_H
