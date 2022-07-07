/********************************************************************************
** Form generated from reading UI file 'pv.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PV_H
#define UI_PV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pv
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *Profile_btn;
    QLineEdit *lineEdit;
    QPushButton *Send_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Pv)
    {
        if (Pv->objectName().isEmpty())
            Pv->setObjectName(QString::fromUtf8("Pv"));
        Pv->resize(800, 600);
        centralwidget = new QWidget(Pv);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 40, 801, 461));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(18, 10, 131, 20));
        Profile_btn = new QPushButton(centralwidget);
        Profile_btn->setObjectName(QString::fromUtf8("Profile_btn"));
        Profile_btn->setGeometry(QRect(470, 10, 211, 24));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 521, 571, 31));
        Send_btn = new QPushButton(centralwidget);
        Send_btn->setObjectName(QString::fromUtf8("Send_btn"));
        Send_btn->setGeometry(QRect(610, 520, 171, 31));
        Pv->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Pv);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Pv->setMenuBar(menubar);
        statusbar = new QStatusBar(Pv);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Pv->setStatusBar(statusbar);

        retranslateUi(Pv);

        QMetaObject::connectSlotsByName(Pv);
    } // setupUi

    void retranslateUi(QMainWindow *Pv)
    {
        Pv->setWindowTitle(QCoreApplication::translate("Pv", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Pv", "TextLabel", nullptr));
        Profile_btn->setText(QCoreApplication::translate("Pv", "See Profile", nullptr));
        Send_btn->setText(QCoreApplication::translate("Pv", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pv: public Ui_Pv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PV_H
