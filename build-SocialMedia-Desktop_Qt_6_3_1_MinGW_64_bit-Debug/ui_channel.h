/********************************************************************************
** Form generated from reading UI file 'channel.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNEL_H
#define UI_CHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Channel
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Channel)
    {
        if (Channel->objectName().isEmpty())
            Channel->setObjectName(QString::fromUtf8("Channel"));
        Channel->resize(800, 600);
        menubar = new QMenuBar(Channel);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Channel->setMenuBar(menubar);
        centralwidget = new QWidget(Channel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Channel->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Channel);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Channel->setStatusBar(statusbar);

        retranslateUi(Channel);

        QMetaObject::connectSlotsByName(Channel);
    } // setupUi

    void retranslateUi(QMainWindow *Channel)
    {
        Channel->setWindowTitle(QCoreApplication::translate("Channel", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Channel: public Ui_Channel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNEL_H
