/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(742, 528);
        actNew = new QAction(MainWindow);
        actNew->setObjectName(QString::fromUtf8("actNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/image/xinjian.png"), QSize(), QIcon::Normal, QIcon::Off);
        actNew->setIcon(icon);
        actDel = new QAction(MainWindow);
        actDel->setObjectName(QString::fromUtf8("actDel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/image/shanchu.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDel->setIcon(icon1);
        actLink = new QAction(MainWindow);
        actLink->setObjectName(QString::fromUtf8("actLink"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/image/link.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actLink->setIcon(icon2);
        actOpenFile = new QAction(MainWindow);
        actOpenFile->setObjectName(QString::fromUtf8("actOpenFile"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/image/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actOpenFile->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 742, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(50, 50));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actNew);
        toolBar->addAction(actDel);
        toolBar->addAction(actLink);
        toolBar->addAction(actOpenFile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actNew->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        actDel->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        actLink->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        actOpenFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
