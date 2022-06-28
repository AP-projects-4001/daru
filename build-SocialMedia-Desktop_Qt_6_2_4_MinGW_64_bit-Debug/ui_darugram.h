/********************************************************************************
** Form generated from reading UI file 'darugram.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DARUGRAM_H
#define UI_DARUGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Darugram
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Darugram)
    {
        if (Darugram->objectName().isEmpty())
            Darugram->setObjectName(QString::fromUtf8("Darugram"));
        Darugram->resize(800, 600);
        menubar = new QMenuBar(Darugram);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Darugram->setMenuBar(menubar);
        centralwidget = new QWidget(Darugram);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Darugram->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Darugram);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Darugram->setStatusBar(statusbar);

        retranslateUi(Darugram);

        QMetaObject::connectSlotsByName(Darugram);
    } // setupUi

    void retranslateUi(QMainWindow *Darugram)
    {
        Darugram->setWindowTitle(QCoreApplication::translate("Darugram", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Darugram: public Ui_Darugram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DARUGRAM_H
