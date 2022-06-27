/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *user_label;
    QLabel *Pass_label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *User_Line;
    QLineEdit *Line_Pass;
    QPushButton *Forgot_Button;
    QPushButton *Login_Button;
    QPushButton *Register_Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 331);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 70, 121, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        user_label = new QLabel(verticalLayoutWidget);
        user_label->setObjectName(QString::fromUtf8("user_label"));
        user_label->setEnabled(true);
        QFont font;
        font.setPointSize(12);
        user_label->setFont(font);

        verticalLayout->addWidget(user_label);

        Pass_label = new QLabel(verticalLayoutWidget);
        Pass_label->setObjectName(QString::fromUtf8("Pass_label"));
        Pass_label->setFont(font);

        verticalLayout->addWidget(Pass_label);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(210, 70, 541, 91));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        User_Line = new QLineEdit(verticalLayoutWidget_2);
        User_Line->setObjectName(QString::fromUtf8("User_Line"));

        verticalLayout_2->addWidget(User_Line);

        Line_Pass = new QLineEdit(verticalLayoutWidget_2);
        Line_Pass->setObjectName(QString::fromUtf8("Line_Pass"));

        verticalLayout_2->addWidget(Line_Pass);

        Forgot_Button = new QPushButton(centralwidget);
        Forgot_Button->setObjectName(QString::fromUtf8("Forgot_Button"));
        Forgot_Button->setGeometry(QRect(624, 170, 121, 31));
        Login_Button = new QPushButton(centralwidget);
        Login_Button->setObjectName(QString::fromUtf8("Login_Button"));
        Login_Button->setGeometry(QRect(210, 230, 131, 51));
        Register_Button = new QPushButton(centralwidget);
        Register_Button->setObjectName(QString::fromUtf8("Register_Button"));
        Register_Button->setGeometry(QRect(450, 230, 131, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        user_label->setText(QCoreApplication::translate("MainWindow", "username:", nullptr));
        Pass_label->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        Forgot_Button->setText(QCoreApplication::translate("MainWindow", "Forget Password", nullptr));
        Login_Button->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        Register_Button->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
