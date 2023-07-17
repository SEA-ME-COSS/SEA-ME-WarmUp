/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSTART;
    QWidget *centralwidget;
    QLabel *CAR0;
    QLabel *CAR1;
    QMenuBar *menubar;
    QMenu *menuSetting;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(576, 742);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/bg.png);\n"
"border: 0px "));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        actionSTART = new QAction(MainWindow);
        actionSTART->setObjectName(QString::fromUtf8("actionSTART"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        CAR0 = new QLabel(centralwidget);
        CAR0->setObjectName(QString::fromUtf8("CAR0"));
        CAR0->setGeometry(QRect(45, 590, 13, 20));
        CAR0->setStyleSheet(QString::fromUtf8("background-image: url();\n"
"background-color : none;\n"
"color : blue;"));
        CAR1 = new QLabel(centralwidget);
        CAR1->setObjectName(QString::fromUtf8("CAR1"));
        CAR1->setGeometry(QRect(15, 590, 13, 20));
        CAR1->setStyleSheet(QString::fromUtf8("background-image: url();\n"
"background-color : none;\n"
"color : red;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 576, 21));
        menuSetting = new QMenu(menubar);
        menuSetting->setObjectName(QString::fromUtf8("menuSetting"));
        menuSetting->setGeometry(QRect(50, 50, 119, 62));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSetting->menuAction());
        menuSetting->addAction(actionSTART);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSTART->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        CAR0->setText(QCoreApplication::translate("MainWindow", "CAR0", nullptr));
        CAR1->setText(QCoreApplication::translate("MainWindow", "CAR1", nullptr));
        menuSetting->setTitle(QCoreApplication::translate("MainWindow", "Setting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
