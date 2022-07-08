/********************************************************************************
** Form generated from reading UI file 'deletemember.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEMEMBER_H
#define UI_DELETEMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteMember
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *DeleteMember)
    {
        if (DeleteMember->objectName().isEmpty())
            DeleteMember->setObjectName(QString::fromUtf8("DeleteMember"));
        DeleteMember->resize(260, 553);
        listWidget = new QListWidget(DeleteMember);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 256, 541));

        retranslateUi(DeleteMember);

        QMetaObject::connectSlotsByName(DeleteMember);
    } // setupUi

    void retranslateUi(QDialog *DeleteMember)
    {
        DeleteMember->setWindowTitle(QCoreApplication::translate("DeleteMember", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteMember: public Ui_DeleteMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEMEMBER_H
