/********************************************************************************
** Form generated from reading UI file 'add_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ADMIN_H
#define UI_ADD_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Add_Admin
{
public:

    void setupUi(QDialog *Add_Admin)
    {
        if (Add_Admin->objectName().isEmpty())
            Add_Admin->setObjectName(QString::fromUtf8("Add_Admin"));
        Add_Admin->resize(400, 300);

        retranslateUi(Add_Admin);

        QMetaObject::connectSlotsByName(Add_Admin);
    } // setupUi

    void retranslateUi(QDialog *Add_Admin)
    {
        Add_Admin->setWindowTitle(QCoreApplication::translate("Add_Admin", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Admin: public Ui_Add_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ADMIN_H
