/********************************************************************************
** Form generated from reading UI file 'forget_pass.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGET_PASS_H
#define UI_FORGET_PASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_forget_pass
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *ID_Line;
    QLineEdit *Username_line;
    QLineEdit *Pass_line;
    QPushButton *Pass_btn;
    QPushButton *Cancel_btn;

    void setupUi(QDialog *forget_pass)
    {
        if (forget_pass->objectName().isEmpty())
            forget_pass->setObjectName(QString::fromUtf8("forget_pass"));
        forget_pass->resize(470, 233);
        label = new QLabel(forget_pass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 61, 21));
        label_2 = new QLabel(forget_pass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 61, 21));
        label_3 = new QLabel(forget_pass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 61, 21));
        ID_Line = new QLineEdit(forget_pass);
        ID_Line->setObjectName(QString::fromUtf8("ID_Line"));
        ID_Line->setGeometry(QRect(130, 40, 291, 22));
        Username_line = new QLineEdit(forget_pass);
        Username_line->setObjectName(QString::fromUtf8("Username_line"));
        Username_line->setGeometry(QRect(130, 80, 291, 22));
        Pass_line = new QLineEdit(forget_pass);
        Pass_line->setObjectName(QString::fromUtf8("Pass_line"));
        Pass_line->setGeometry(QRect(130, 120, 291, 22));
        Pass_btn = new QPushButton(forget_pass);
        Pass_btn->setObjectName(QString::fromUtf8("Pass_btn"));
        Pass_btn->setGeometry(QRect(70, 170, 101, 31));
        Cancel_btn = new QPushButton(forget_pass);
        Cancel_btn->setObjectName(QString::fromUtf8("Cancel_btn"));
        Cancel_btn->setGeometry(QRect(260, 170, 101, 31));

        retranslateUi(forget_pass);

        QMetaObject::connectSlotsByName(forget_pass);
    } // setupUi

    void retranslateUi(QDialog *forget_pass)
    {
        forget_pass->setWindowTitle(QCoreApplication::translate("forget_pass", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("forget_pass", "ID:", nullptr));
        label_2->setText(QCoreApplication::translate("forget_pass", "UserName:", nullptr));
        label_3->setText(QCoreApplication::translate("forget_pass", "New_Pass:", nullptr));
        Pass_btn->setText(QCoreApplication::translate("forget_pass", "Change Pass", nullptr));
        Cancel_btn->setText(QCoreApplication::translate("forget_pass", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forget_pass: public Ui_forget_pass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGET_PASS_H
