/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *profileChangeButton;
    QPushButton *removeProfileButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *usernameChangetxt;
    QPushButton *usernameChangebtn;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *IDChangetxt;
    QPushButton *IDChangebtn;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *phoneChangetxt;
    QPushButton *phoneChangebtn;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *passChangetxt;
    QPushButton *passChangebtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName(QString::fromUtf8("Profile"));
        Profile->resize(800, 600);
        centralwidget = new QWidget(Profile);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 151, 161));
        profileChangeButton = new QPushButton(centralwidget);
        profileChangeButton->setObjectName(QString::fromUtf8("profileChangeButton"));
        profileChangeButton->setGeometry(QRect(210, 70, 201, 31));
        removeProfileButton = new QPushButton(centralwidget);
        removeProfileButton->setObjectName(QString::fromUtf8("removeProfileButton"));
        removeProfileButton->setGeometry(QRect(210, 120, 201, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 230, 521, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        usernameChangetxt = new QLineEdit(widget);
        usernameChangetxt->setObjectName(QString::fromUtf8("usernameChangetxt"));

        horizontalLayout->addWidget(usernameChangetxt);

        usernameChangebtn = new QPushButton(widget);
        usernameChangebtn->setObjectName(QString::fromUtf8("usernameChangebtn"));

        horizontalLayout->addWidget(usernameChangebtn);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 270, 491, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        IDChangetxt = new QLineEdit(widget1);
        IDChangetxt->setObjectName(QString::fromUtf8("IDChangetxt"));

        horizontalLayout_2->addWidget(IDChangetxt);

        IDChangebtn = new QPushButton(widget1);
        IDChangebtn->setObjectName(QString::fromUtf8("IDChangebtn"));

        horizontalLayout_2->addWidget(IDChangebtn);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(20, 310, 511, 31));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        phoneChangetxt = new QLineEdit(widget2);
        phoneChangetxt->setObjectName(QString::fromUtf8("phoneChangetxt"));

        horizontalLayout_3->addWidget(phoneChangetxt);

        phoneChangebtn = new QPushButton(widget2);
        phoneChangebtn->setObjectName(QString::fromUtf8("phoneChangebtn"));

        horizontalLayout_3->addWidget(phoneChangebtn);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(20, 350, 521, 31));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        passChangetxt = new QLineEdit(widget3);
        passChangetxt->setObjectName(QString::fromUtf8("passChangetxt"));
        passChangetxt->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(passChangetxt);

        passChangebtn = new QPushButton(widget3);
        passChangebtn->setObjectName(QString::fromUtf8("passChangebtn"));

        horizontalLayout_4->addWidget(passChangebtn);

        Profile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Profile);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Profile->setMenuBar(menubar);
        statusbar = new QStatusBar(Profile);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Profile->setStatusBar(statusbar);

        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QMainWindow *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "MainWindow", nullptr));
        label->setText(QString());
        profileChangeButton->setText(QCoreApplication::translate("Profile", "Change Profile Picture", nullptr));
        removeProfileButton->setText(QCoreApplication::translate("Profile", "Remove Profile Picture", nullptr));
        usernameChangetxt->setInputMask(QString());
        usernameChangetxt->setText(QString());
        usernameChangebtn->setText(QCoreApplication::translate("Profile", "Change Username", nullptr));
        IDChangebtn->setText(QCoreApplication::translate("Profile", "Change ID", nullptr));
        phoneChangebtn->setText(QCoreApplication::translate("Profile", "Change Number", nullptr));
        passChangebtn->setText(QCoreApplication::translate("Profile", "Change Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
