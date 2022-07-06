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
#include <QtWidgets/QListWidget>
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *usernameChangetxt;
    QPushButton *usernameChangebtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *IDChangetxt;
    QPushButton *IDChangebtn;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *phoneChangetxt;
    QPushButton *phoneChangebtn;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *passChangetxt;
    QPushButton *passChangebtn;
    QLabel *profilePicLabel;
    QLabel *label_2;
    QListWidget *listOfPermission;
    QLabel *labelPandN;
    QLabel *alakiLabel;
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
        label->setGeometry(QRect(20, 10, 201, 231));
        profileChangeButton = new QPushButton(centralwidget);
        profileChangeButton->setObjectName(QString::fromUtf8("profileChangeButton"));
        profileChangeButton->setGeometry(QRect(260, 70, 201, 31));
        removeProfileButton = new QPushButton(centralwidget);
        removeProfileButton->setObjectName(QString::fromUtf8("removeProfileButton"));
        removeProfileButton->setGeometry(QRect(260, 120, 201, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 170, 521, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        usernameChangetxt = new QLineEdit(layoutWidget);
        usernameChangetxt->setObjectName(QString::fromUtf8("usernameChangetxt"));

        horizontalLayout->addWidget(usernameChangetxt);

        usernameChangebtn = new QPushButton(layoutWidget);
        usernameChangebtn->setObjectName(QString::fromUtf8("usernameChangebtn"));

        horizontalLayout->addWidget(usernameChangebtn);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 210, 491, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        IDChangetxt = new QLineEdit(layoutWidget1);
        IDChangetxt->setObjectName(QString::fromUtf8("IDChangetxt"));

        horizontalLayout_2->addWidget(IDChangetxt);

        IDChangebtn = new QPushButton(layoutWidget1);
        IDChangebtn->setObjectName(QString::fromUtf8("IDChangebtn"));

        horizontalLayout_2->addWidget(IDChangebtn);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(260, 250, 511, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        phoneChangetxt = new QLineEdit(layoutWidget2);
        phoneChangetxt->setObjectName(QString::fromUtf8("phoneChangetxt"));

        horizontalLayout_3->addWidget(phoneChangetxt);

        phoneChangebtn = new QPushButton(layoutWidget2);
        phoneChangebtn->setObjectName(QString::fromUtf8("phoneChangebtn"));

        horizontalLayout_3->addWidget(phoneChangebtn);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(260, 290, 521, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        passChangetxt = new QLineEdit(layoutWidget3);
        passChangetxt->setObjectName(QString::fromUtf8("passChangetxt"));
        passChangetxt->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(passChangetxt);

        passChangebtn = new QPushButton(layoutWidget3);
        passChangebtn->setObjectName(QString::fromUtf8("passChangebtn"));

        horizontalLayout_4->addWidget(passChangebtn);

        profilePicLabel = new QLabel(centralwidget);
        profilePicLabel->setObjectName(QString::fromUtf8("profilePicLabel"));
        profilePicLabel->setGeometry(QRect(20, 10, 201, 231));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 410, 121, 31));
        listOfPermission = new QListWidget(centralwidget);
        listOfPermission->setObjectName(QString::fromUtf8("listOfPermission"));
        listOfPermission->setGeometry(QRect(360, 330, 421, 211));
        labelPandN = new QLabel(centralwidget);
        labelPandN->setObjectName(QString::fromUtf8("labelPandN"));
        labelPandN->setGeometry(QRect(30, 350, 171, 191));
        alakiLabel = new QLabel(centralwidget);
        alakiLabel->setObjectName(QString::fromUtf8("alakiLabel"));
        alakiLabel->setGeometry(QRect(30, 290, 171, 31));
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
        profilePicLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("Profile", "Profile Access:", nullptr));
        labelPandN->setText(QString());
        alakiLabel->setText(QCoreApplication::translate("Profile", "Powered by P&N", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
