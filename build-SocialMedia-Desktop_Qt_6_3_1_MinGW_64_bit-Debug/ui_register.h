/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *User_Line;
    QLineEdit *Name_Line;
    QLineEdit *Phone_Line;
    QLineEdit *Pass_Line;
    QLineEdit *Birthday_Line;
    QLineEdit *ID_Line;
    QLineEdit *Emai_Line;
    QPushButton *Cancel_Button;
    QPushButton *Register_Button;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(652, 437);
        verticalLayoutWidget = new QWidget(Register);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(80, 30, 121, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        verticalLayoutWidget_2 = new QWidget(Register);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(229, 30, 381, 301));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        User_Line = new QLineEdit(verticalLayoutWidget_2);
        User_Line->setObjectName(QString::fromUtf8("User_Line"));

        verticalLayout_2->addWidget(User_Line);

        Name_Line = new QLineEdit(verticalLayoutWidget_2);
        Name_Line->setObjectName(QString::fromUtf8("Name_Line"));

        verticalLayout_2->addWidget(Name_Line);

        Phone_Line = new QLineEdit(verticalLayoutWidget_2);
        Phone_Line->setObjectName(QString::fromUtf8("Phone_Line"));

        verticalLayout_2->addWidget(Phone_Line);

        Pass_Line = new QLineEdit(verticalLayoutWidget_2);
        Pass_Line->setObjectName(QString::fromUtf8("Pass_Line"));

        verticalLayout_2->addWidget(Pass_Line);

        Birthday_Line = new QLineEdit(verticalLayoutWidget_2);
        Birthday_Line->setObjectName(QString::fromUtf8("Birthday_Line"));

        verticalLayout_2->addWidget(Birthday_Line);

        ID_Line = new QLineEdit(verticalLayoutWidget_2);
        ID_Line->setObjectName(QString::fromUtf8("ID_Line"));

        verticalLayout_2->addWidget(ID_Line);

        Emai_Line = new QLineEdit(verticalLayoutWidget_2);
        Emai_Line->setObjectName(QString::fromUtf8("Emai_Line"));

        verticalLayout_2->addWidget(Emai_Line);

        Cancel_Button = new QPushButton(Register);
        Cancel_Button->setObjectName(QString::fromUtf8("Cancel_Button"));
        Cancel_Button->setGeometry(QRect(420, 360, 131, 41));
        Register_Button = new QPushButton(Register);
        Register_Button->setObjectName(QString::fromUtf8("Register_Button"));
        Register_Button->setGeometry(QRect(140, 360, 131, 41));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("Register", "Phone Number:", nullptr));
        label_7->setText(QCoreApplication::translate("Register", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("Register", "Birthday:", nullptr));
        label_6->setText(QCoreApplication::translate("Register", "ID:", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "Email:", nullptr));
        Cancel_Button->setText(QCoreApplication::translate("Register", "Cancel", nullptr));
        Register_Button->setText(QCoreApplication::translate("Register", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
