/********************************************************************************
** Form generated from reading UI file 'creat_channele.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREAT_CHANNELE_H
#define UI_CREAT_CHANNELE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Creat_channele
{
public:
    QListWidget *contact_widget;
    QPushButton *Create_G_B;
    QPushButton *Create_C_B;
    QPushButton *Cancel;
    QLabel *label;
    QLineEdit *C_G_Name_btn;

    void setupUi(QDialog *Creat_channele)
    {
        if (Creat_channele->objectName().isEmpty())
            Creat_channele->setObjectName(QString::fromUtf8("Creat_channele"));
        Creat_channele->resize(577, 519);
        contact_widget = new QListWidget(Creat_channele);
        contact_widget->setObjectName(QString::fromUtf8("contact_widget"));
        contact_widget->setGeometry(QRect(10, 10, 321, 421));
        Create_G_B = new QPushButton(Creat_channele);
        Create_G_B->setObjectName(QString::fromUtf8("Create_G_B"));
        Create_G_B->setGeometry(QRect(370, 60, 171, 61));
        Create_C_B = new QPushButton(Creat_channele);
        Create_C_B->setObjectName(QString::fromUtf8("Create_C_B"));
        Create_C_B->setGeometry(QRect(370, 220, 171, 61));
        Cancel = new QPushButton(Creat_channele);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(370, 380, 171, 61));
        label = new QLabel(Creat_channele);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 470, 151, 41));
        C_G_Name_btn = new QLineEdit(Creat_channele);
        C_G_Name_btn->setObjectName(QString::fromUtf8("C_G_Name_btn"));
        C_G_Name_btn->setGeometry(QRect(180, 480, 341, 21));

        retranslateUi(Creat_channele);

        QMetaObject::connectSlotsByName(Creat_channele);
    } // setupUi

    void retranslateUi(QDialog *Creat_channele)
    {
        Creat_channele->setWindowTitle(QCoreApplication::translate("Creat_channele", "Dialog", nullptr));
        Create_G_B->setText(QCoreApplication::translate("Creat_channele", "create group", nullptr));
        Create_C_B->setText(QCoreApplication::translate("Creat_channele", "creat channel", nullptr));
        Cancel->setText(QCoreApplication::translate("Creat_channele", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("Creat_channele", "Channel Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Creat_channele: public Ui_Creat_channele {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREAT_CHANNELE_H
