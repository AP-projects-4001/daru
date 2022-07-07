/********************************************************************************
** Form generated from reading UI file 'profileelse.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEELSE_H
#define UI_PROFILEELSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profileElse
{
public:
    QLabel *profilePic;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *labelID;
    QLabel *labelUsername;
    QLabel *labelPhonenumber;
    QLabel *labelEmail;

    void setupUi(QDialog *profileElse)
    {
        if (profileElse->objectName().isEmpty())
            profileElse->setObjectName(QString::fromUtf8("profileElse"));
        profileElse->resize(691, 464);
        profilePic = new QLabel(profileElse);
        profilePic->setObjectName(QString::fromUtf8("profilePic"));
        profilePic->setGeometry(QRect(60, 60, 171, 251));
        pushButton = new QPushButton(profileElse);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 400, 93, 29));
        widget = new QWidget(profileElse);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(310, 60, 291, 251));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelID = new QLabel(widget);
        labelID->setObjectName(QString::fromUtf8("labelID"));

        verticalLayout->addWidget(labelID);

        labelUsername = new QLabel(widget);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));

        verticalLayout->addWidget(labelUsername);

        labelPhonenumber = new QLabel(widget);
        labelPhonenumber->setObjectName(QString::fromUtf8("labelPhonenumber"));

        verticalLayout->addWidget(labelPhonenumber);

        labelEmail = new QLabel(widget);
        labelEmail->setObjectName(QString::fromUtf8("labelEmail"));

        verticalLayout->addWidget(labelEmail);


        retranslateUi(profileElse);

        QMetaObject::connectSlotsByName(profileElse);
    } // setupUi

    void retranslateUi(QDialog *profileElse)
    {
        profileElse->setWindowTitle(QCoreApplication::translate("profileElse", "Dialog", nullptr));
        profilePic->setText(QString());
        pushButton->setText(QCoreApplication::translate("profileElse", "Close", nullptr));
        labelID->setText(QString());
        labelUsername->setText(QString());
        labelPhonenumber->setText(QString());
        labelEmail->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class profileElse: public Ui_profileElse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEELSE_H
