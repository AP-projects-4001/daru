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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Darugram
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *Search_btn;
    QLabel *Name_Lable;
    QPushButton *Start_chat_btn;
    QPushButton *profile_btn;
    QListWidget *chatList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Darugram)
    {
        if (Darugram->objectName().isEmpty())
            Darugram->setObjectName(QString::fromUtf8("Darugram"));
        Darugram->resize(784, 484);
        centralwidget = new QWidget(Darugram);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 171, 41));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 20, 381, 21));
        Search_btn = new QPushButton(centralwidget);
        Search_btn->setObjectName(QString::fromUtf8("Search_btn"));
        Search_btn->setGeometry(QRect(580, 20, 121, 21));
        Name_Lable = new QLabel(centralwidget);
        Name_Lable->setObjectName(QString::fromUtf8("Name_Lable"));
        Name_Lable->setGeometry(QRect(20, 70, 181, 20));
        Start_chat_btn = new QPushButton(centralwidget);
        Start_chat_btn->setObjectName(QString::fromUtf8("Start_chat_btn"));
        Start_chat_btn->setGeometry(QRect(230, 70, 171, 24));
        profile_btn = new QPushButton(centralwidget);
        profile_btn->setObjectName(QString::fromUtf8("profile_btn"));
        profile_btn->setGeometry(QRect(430, 70, 171, 24));
        chatList = new QListWidget(centralwidget);
        chatList->setObjectName(QString::fromUtf8("chatList"));
        chatList->setGeometry(QRect(15, 101, 761, 311));
        Darugram->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Darugram);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 784, 22));
        Darugram->setMenuBar(menubar);
        statusbar = new QStatusBar(Darugram);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Darugram->setStatusBar(statusbar);

        retranslateUi(Darugram);

        QMetaObject::connectSlotsByName(Darugram);
    } // setupUi

    void retranslateUi(QMainWindow *Darugram)
    {
        Darugram->setWindowTitle(QCoreApplication::translate("Darugram", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Darugram", "Enter ID or PhonNumber:", nullptr));
        Search_btn->setText(QCoreApplication::translate("Darugram", "Search", nullptr));
        Name_Lable->setText(QCoreApplication::translate("Darugram", "Name:", nullptr));
        Start_chat_btn->setText(QCoreApplication::translate("Darugram", "Start Chat", nullptr));
        profile_btn->setText(QCoreApplication::translate("Darugram", "See Profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Darugram: public Ui_Darugram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DARUGRAM_H
