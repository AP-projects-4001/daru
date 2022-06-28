#include "darugram.h"
#include "ui_darugram.h"
#include<iostream>
#include"register.h"
#include"user.h"
#include"date.h"
#include<iostream>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QFile>
#include<QMessageBox>
#include"forget_pass.h"

Darugram::Darugram(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Darugram)
{
    ui->setupUi(this);
}

Darugram::Darugram(QWidget *parent, User *Current_User) :
    QMainWindow(parent),
    ui(new Ui::Darugram)
{
    this->Current_User = Current_User;
    ui->setupUi(this);
    ui->Name_Lable->hide();
    ui->profile_btn->hide();
    ui->Start_chat_btn->hide();
}


Darugram::~Darugram()
{
    delete ui;
}

void Darugram::on_Search_btn_clicked()
{
    QJsonObject Test_User;
    QJsonObject All_User;

    QFile F_R_Users("All_User.json");
    if(F_R_Users.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Users.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_User = b.object();
        F_R_Users.close();
        QList Users_Keys = All_User.keys();
        for(int i = 0;i<Users_Keys.size();i++)
        {
            Test_User = All_User[Users_Keys.at(i).toLocal8Bit().constData()].toObject();
            if(Test_User["ID"]==ui->lineEdit->text()||Test_User["Phone"]==ui->lineEdit->text())
            {
                ui->Name_Lable->setText(Test_User["Username"].toString());
                ui->Name_Lable->show();
                ui->Start_chat_btn->show();
                ui->profile_btn->show();
            }
        }
    }
}

