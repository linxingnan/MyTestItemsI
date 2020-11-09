/********************************************************************************
** Form generated from reading UI file 'windowupdate.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWUPDATE_H
#define UI_WINDOWUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowUpdate
{
public:
    QAction *actNew;
    QAction *actDel;
    QAction *actLink;
    QAction *actOpenFile;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *WindowUpdate)
    {
        if (WindowUpdate->objectName().isEmpty())
            WindowUpdate->setObjectName(QString::fromUtf8("WindowUpdate"));
        WindowUpdate->resize(800, 600);
        actNew = new QAction(WindowUpdate);
        actNew->setObjectName(QString::fromUtf8("actNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/icon/xinjian.png"), QSize(), QIcon::Normal, QIcon::Off);
        actNew->setIcon(icon);
        actDel = new QAction(WindowUpdate);
        actDel->setObjectName(QString::fromUtf8("actDel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/icon/shanchu.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDel->setIcon(icon1);
        actLink = new QAction(WindowUpdate);
        actLink->setObjectName(QString::fromUtf8("actLink"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/icon/link.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actLink->setIcon(icon2);
        actOpenFile = new QAction(WindowUpdate);
        actOpenFile->setObjectName(QString::fromUtf8("actOpenFile"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/icon/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actOpenFile->setIcon(icon3);
        centralwidget = new QWidget(WindowUpdate);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        WindowUpdate->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowUpdate);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        WindowUpdate->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowUpdate);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowUpdate->setStatusBar(statusbar);
        toolBar = new QToolBar(WindowUpdate);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(50, 50));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        WindowUpdate->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actNew);
        toolBar->addAction(actDel);
        toolBar->addAction(actOpenFile);
        toolBar->addAction(actLink);

        retranslateUi(WindowUpdate);

        QMetaObject::connectSlotsByName(WindowUpdate);
    } // setupUi

    void retranslateUi(QMainWindow *WindowUpdate)
    {
        WindowUpdate->setWindowTitle(QCoreApplication::translate("WindowUpdate", "MainWindow", nullptr));
        actNew->setText(QCoreApplication::translate("WindowUpdate", "\346\267\273\345\212\240", nullptr));
        actDel->setText(QCoreApplication::translate("WindowUpdate", "\345\210\240\351\231\244", nullptr));
        actLink->setText(QCoreApplication::translate("WindowUpdate", "\350\277\236\346\216\245", nullptr));
        actOpenFile->setText(QCoreApplication::translate("WindowUpdate", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("WindowUpdate", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowUpdate: public Ui_WindowUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWUPDATE_H
