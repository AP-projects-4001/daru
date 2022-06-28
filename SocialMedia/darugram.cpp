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
#include"pv.h"
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
    QJsonObject Current;

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


void Darugram::on_Start_chat_btn_clicked()
{
    QJsonObject Test_User;
    QJsonObject All_User;
    QJsonObject Current;
    User* Cantact=new User();
    QFile F_R_Users("All_User.json");
    if(F_R_Users.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Users.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_User = b.object();
        F_R_Users.close();
        QList Users_Keys = All_User.keys();
        Current=All_User[Current_User->getID()].toObject();
        for(int i = 0;i<Users_Keys.size();i++)
        {
            Test_User = All_User[Users_Keys.at(i).toLocal8Bit().constData()].toObject();
            if(Test_User["Username"].toString()==ui->Name_Lable->text())
            {
                break;
            }
        }
        Cantact->setUserName(Test_User["Username"].toString());
        Cantact->setBirthDate(Test_User["Birthday"].toString());
        Cantact->setEmail(Test_User["Email"].toString());
        Cantact->setID(Test_User["ID"].toString());
        Cantact->setPhoneNumber(Test_User["Phone"].toString());
        Cantact->getContacts().push_front(*Current_User);
        Current_User->getContacts().push_front(*Cantact);
        QJsonArray c = Current["Contacts"].toArray();
        QJsonArray d =Test_User["Contacts"].toArray();
        c.append(Cantact->getID());
        d.append(Current_User->getID());
        Current["Contacts"] = c;
        Test_User["Contacts"] = d;
        QString Chat_Name = Current_User->getID()+"-"+Cantact->getID();
        c = Current["Chats"].toArray();
        c.append(Chat_Name);
        Current["Chats"]=c;
        c = Test_User["Chats"].toArray();
        c.append(Chat_Name);
        Test_User["Chats"] = c;
        All_User[Current_User->getID()]=Current;
        All_User[Test_User["ID"].toString()]=Test_User;
        QJsonDocument All_User_File(All_User);
        QVector<User> Pass;
        Pass.push_front(*Current_User);
        Pass.push_front(*Cantact);
        QFile F_W_Users("All_User.json");
        if(F_W_Users.open(QIODevice::WriteOnly))
        {
            F_W_Users.write(All_User_File.toJson());
            Pv *new_chat = new Pv(this);
            new_chat->setMembers(Pass);
            new_chat->show();
        }
        else{
            QMessageBox x;
            x.setText("Files Not Opening");
            x.exec();
        }
    }
    delete Cantact;
}

