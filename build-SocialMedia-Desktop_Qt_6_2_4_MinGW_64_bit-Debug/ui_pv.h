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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pv
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Pv)
    {
        if (Pv->objectName().isEmpty())
            Pv->setObjectName(QString::fromUtf8("Pv"));
        Pv->resize(800, 600);
        menubar = new QMenuBar(Pv);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Pv->setMenuBar(menubar);
        centralwidget = new QWidget(Pv);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Pv->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Pv);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Pv->setStatusBar(statusbar);

        retranslateUi(Pv);

        QMetaObject::connectSlotsByName(Pv);
    } // setupUi

    void retranslateUi(QMainWindow *Pv)
    {
        Pv->setWindowTitle(QCoreApplication::translate("Pv", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pv: public Ui_Pv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PV_H
