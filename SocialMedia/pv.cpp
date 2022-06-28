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

Pv::Pv(QVector<Message> messages, QVector<User> members, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pv)
{
    this->setMessages(messages);
    this->setMembers(members);
    ui->setupUi(this);
    ui->label->setText(members[1].getUserName());
}

Pv::~Pv()
{
    delete ui;
}

void Pv::on_Send_btn_clicked()
{
    Message new_message;
    new_message.setMsg(ui->lineEdit->text());
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

}

