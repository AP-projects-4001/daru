/********************************************************************************
** Form generated from reading UI file 'add_member.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_MEMBER_H
#define UI_ADD_MEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_Member
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *Add_Member)
    {
        if (Add_Member->objectName().isEmpty())
            Add_Member->setObjectName(QString::fromUtf8("Add_Member"));
        Add_Member->resize(298, 588);
        listWidget = new QListWidget(Add_Member);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(5, 10, 291, 571));

        retranslateUi(Add_Member);

        QMetaObject::connectSlotsByName(Add_Member);
    } // setupUi

    void retranslateUi(QDialog *Add_Member)
    {
        Add_Member->setWindowTitle(QCoreApplication::translate("Add_Member", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Member: public Ui_Add_Member {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MEMBER_H
