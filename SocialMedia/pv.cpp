#include "pv.h"
#include "ui_pv.h"
#include"message.h"
#include"user.h"
#include"date.h"
#include<iostream>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QFile>
#include<QMessageBox>

Pv::Pv(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pv)
{
    ui->setupUi(this);
}

Pv::Pv(QVector<QString> messages, QVector<User> members, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pv)
{
    this->setMessages(messages);
    this->setMembers(members);
    ui->setupUi(this);
    ui->label->setText(members[0].getUserName());
}

Pv::Pv(QVector<QString> messages,QVector<User> members, QString Chat_page_name, QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Pv)
{
    this->setMessages(messages);
    this->set_Chat_page_name(Chat_page_name);
    this->setMembers(members);
    ui->setupUi(this);
    ui->label->setText(members[0].getUserName());
    for(int i =0;i<this->getMessages().size();i++)
    {
        ui->listWidget->addItem(this->getMessages()[i]);
    }
}

Pv::~Pv()
{
    delete ui;
}

void Pv::on_Send_btn_clicked()
{
    Message new_message;
    QString Message_New=getMembers()[1].getUserName()+" : "+ui->lineEdit->text();
    new_message.setMsg(Message_New);
    new_message.setSender(getMembers()[0].getID());
    new_message.setReciever(getMembers()[1].getID());
    ui->listWidget->addItem(new_message.getMsg());
    QFile F_R_Users("All_Message.json");
    QJsonObject All_Message;
    if(F_R_Users.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Users.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Message = b.object();
        F_R_Users.close();
    }
    QString a = new_message.getSender() +"-"+new_message.getReciever();
    QString b =new_message.getReciever()+"-"+new_message.getSender();

    if(All_Message.find(a)!=All_Message.end())
    {
        QJsonObject j=All_Message[a].toObject();
        QJsonArray Messages;
        QJsonArray Recivers;
        QJsonArray Senders;
        Messages=j["Messages"].toArray();
        Recivers = j["Recivers"].toArray();
        Senders = j["Senders"].toArray();
        Messages.append(new_message.getMsg());
        Senders.append(new_message.getSender());
        Recivers.append(new_message.getReciever());
        j["Messages"]=Messages;
        j["Recivers"]=Recivers;
        j["Senders"]=Senders;
        All_Message[a]=j;
        QJsonDocument All_Message_file(All_Message);

        QFile F_W_Users("All_Message.json");
        if(F_W_Users.open(QIODevice::WriteOnly))
        {
            F_W_Users.write(All_Message_file.toJson());
            F_W_Users.close();
        }
    }
    else {
        QJsonObject j=All_Message[b].toObject();
        QJsonArray Messages;
        QJsonArray Recivers;
        QJsonArray Senders;
        All_Message.remove(a);
        Messages=j["Messages"].toArray();
        Recivers = j["Recivers"].toArray();
        Senders = j["Senders"].toArray();
        Messages.append(new_message.getMsg());
        Senders.append(new_message.getSender());
        Recivers.append(new_message.getReciever());
        j["Messages"]=Messages;
        j["Recivers"]=Recivers;
        j["Senders"]=Senders;
        All_Message[b]=j;
        QJsonDocument All_Message_file(All_Message);

        QFile F_W_Users("All_Message.json");
        if(F_W_Users.open(QIODevice::WriteOnly))
        {
            F_W_Users.write(All_Message_file.toJson());
            F_W_Users.close();
        }
    }

}


void Pv::on_refresh_clicked()
{

    QJsonObject All_Messages;
    QFile F_R_Messages("All_Message.json");
    if(F_R_Messages.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Messages.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Messages = b.object();
        F_R_Messages.close();
    }
    QJsonObject This_Chat;
    This_Chat=All_Messages[this->get_Chat_page_name()].toObject();
    QJsonArray messages = This_Chat["Messages"].toArray();
    ui->listWidget->clear();
    for(int i = 0;i<messages.size();i++)
    {
        ui->listWidget->addItem(messages[i].toString());
    }
}

