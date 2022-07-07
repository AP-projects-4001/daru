/********************************************************************************
** Form generated from reading UI file 'channel.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNEL_H
#define UI_CHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Channel
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QPushButton *Add_admin_btn;
    QPushButton *Delete_member_btn;
    QPushButton *See_mem_btn;
    QLineEdit *lineEdit;
    QPushButton *Send_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Channel)
    {
        if (Channel->objectName().isEmpty())
            Channel->setObjectName(QString::fromUtf8("Channel"));
        Channel->resize(800, 600);
        centralwidget = new QWidget(Channel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 70, 791, 451));
        Add_admin_btn = new QPushButton(centralwidget);
        Add_admin_btn->setObjectName(QString::fromUtf8("Add_admin_btn"));
        Add_admin_btn->setGeometry(QRect(30, 10, 201, 51));
        Delete_member_btn = new QPushButton(centralwidget);
        Delete_member_btn->setObjectName(QString::fromUtf8("Delete_member_btn"));
        Delete_member_btn->setGeometry(QRect(280, 10, 201, 51));
        See_mem_btn = new QPushButton(centralwidget);
        See_mem_btn->setObjectName(QString::fromUtf8("See_mem_btn"));
        See_mem_btn->setGeometry(QRect(540, 10, 201, 51));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 530, 591, 22));
        Send_btn = new QPushButton(centralwidget);
        Send_btn->setObjectName(QString::fromUtf8("Send_btn"));
        Send_btn->setGeometry(QRect(650, 530, 111, 24));
        Channel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Channel);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Channel->setMenuBar(menubar);
        statusbar = new QStatusBar(Channel);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Channel->setStatusBar(statusbar);

        retranslateUi(Channel);

        QMetaObject::connectSlotsByName(Channel);
    } // setupUi

    void retranslateUi(QMainWindow *Channel)
    {
        Channel->setWindowTitle(QCoreApplication::translate("Channel", "MainWindow", nullptr));
        Add_admin_btn->setText(QCoreApplication::translate("Channel", "Add_Admin", nullptr));
        Delete_member_btn->setText(QCoreApplication::translate("Channel", "Delete_Members", nullptr));
        See_mem_btn->setText(QCoreApplication::translate("Channel", "See_Members", nullptr));
        Send_btn->setText(QCoreApplication::translate("Channel", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Channel: public Ui_Channel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNEL_H
