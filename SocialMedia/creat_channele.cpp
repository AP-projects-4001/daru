#include "creat_channele.h"
#include "ui_creat_channele.h"
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
#include"QCheckBox"
#include"channel.h"

Creat_channele::Creat_channele(User *Current_User,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Creat_channele)
{
    ui->setupUi(this);
    this->Current_User=Current_User;

    Groupmember->append(Current_User->getID());
    QJsonObject allUsers;
    QJsonObject current;
    QFile F_R_Users("All_User.json");
    if(F_R_Users.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Users.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        allUsers = b.object();
        F_R_Users.close();
    }
    current=allUsers[Current_User->getID()].toObject();
    for (int i = 0; i < current["Contacts"].toArray().size(); i++)
    {
        QCheckBox *checkbox = new QCheckBox(current["Contacts"].toArray()[i].toString());
        QListWidgetItem *item = new QListWidgetItem(ui->contact_widget);
        connect(checkbox, SIGNAL(stateChanged(int)), this, SLOT(CheckboxChanged(int)));
        ui->contact_widget->addItem(item);
        ui->contact_widget->setItemWidget(item, checkbox);
    }
}

Creat_channele::~Creat_channele()
{
    delete ui;
}

void Creat_channele::CheckboxChanged(int checkstate)
{


    if (checkstate)
    {
        QCheckBox* x = qobject_cast<QCheckBox*>(sender());
        QString Id = x->text();
        Groupmember->append(Id);
    }
    else
    {
        QCheckBox* x = qobject_cast<QCheckBox*>(sender());
        QString Id = x->text();
        for(int i=0;i<Groupmember->size();i++)
        {
            if(Id == Groupmember->value(i))
            {
                Groupmember->remove(i);
            }
        }
    }
}

void Creat_channele::on_Create_G_B_clicked()
{
    QJsonObject All_Channel;
    QJsonObject All_User;
    QJsonObject All_Chats;
    QFile F_R_Channel("All_Channel.json");
    int state = 1;
    if(F_R_Channel.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Channel.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Channel = b.object();
        F_R_Channel.close();
    }
    QFile F_R_User("All_User.json");
    if(F_R_User.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_User.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_User = b.object();
        F_R_User.close();
    }
    QFile F_R_Messages("All_Message.json");
    if(F_R_Messages.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Messages.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Chats = b.object();
        F_R_Messages.close();
    }
    QString Channel_name = ui->C_G_Name_btn->text();
    QList Channels_Keys = All_Channel.keys();
    for(int i =0;i<Channels_Keys.size();i++)
    {
        QString names=All_Channel[Channels_Keys.at(i).toLocal8Bit().constData()].toString();
        if(names ==Channel_name)
            state=0;
    }
    if(state)
    {

        QJsonObject This_channel;
        This_channel["Name"]=Channel_name;
        This_channel["Creator"]=Current_User->getID();
        QJsonArray memmbers;
        for(int i =0;i<Groupmember->size();i++)
            memmbers.append(Groupmember->value(i));
        This_channel["Members"]=memmbers;
        QJsonArray admins;
        admins.append(Current_User->getID());
        This_channel["Admins"]=admins;
        This_channel["State"]=1;
        All_Channel[Channel_name]=This_channel;
        for(int i=0;i<Groupmember->size();i++)
        {
            QJsonObject j=All_User[Groupmember->value(i)].toObject();
            QJsonArray b = j["Chats"].toArray();
            b.append(Channel_name);
            j["Chats"]=b;
            All_User[Groupmember->value(i)]=j;
        }
        QJsonObject this_channel_messages;
        QJsonArray mess;
        this_channel_messages["Messages"]=mess;
        this_channel_messages["Senders"]=mess;
        All_Chats[Channel_name] = this_channel_messages;
        QFile F_W_Channel("All_Channel.json");
        if(F_W_Channel.open(QIODevice::WriteOnly))
        {
            QJsonDocument Channel_file(All_Channel);
            F_W_Channel.write(Channel_file.toJson());
            F_W_Channel.close();
        }
        QFile F_W_User("All_User.json");
        if(F_W_User.open(QIODevice::WriteOnly))
        {
            QJsonDocument User_File(All_User);
            F_W_User.write(User_File.toJson());
            F_W_User.close();
        }
        QFile F_W_Messeges("All_Message.json");
        if(F_W_Messeges.open(QIODevice::WriteOnly))
        {
            QJsonDocument Messeges_File(All_Chats);
            F_W_Messeges.write(Messeges_File.toJson());
            F_W_Messeges.close();
        }
        Channel* New_Channel = new Channel(Channel_name,Current_User);
        this->destroy();
        New_Channel->show();
    }
    else
    {
        QMessageBox::warning(this,"cannot creat channel","Change channel name");
    }

}


void Creat_channele::on_Cancel_clicked()
{
    this->destroy();
}


void Creat_channele::on_Create_C_B_clicked()
{
    QJsonObject All_Channel;
    QJsonObject All_User;
    QJsonObject All_Chats;
    QFile F_R_Channel("All_Channel.json");
    int state = 1;
    if(F_R_Channel.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Channel.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Channel = b.object();
        F_R_Channel.close();
    }
    QFile F_R_User("All_User.json");
    if(F_R_User.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_User.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_User = b.object();
        F_R_User.close();
    }
    QFile F_R_Messages("All_Message.json");
    if(F_R_Messages.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Messages.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Chats = b.object();
        F_R_Messages.close();
    }
    QString Channel_name = ui->C_G_Name_btn->text();
    QList Channels_Keys = All_Channel.keys();
    for(int i =0;i<Channels_Keys.size();i++)
    {
        QString names=All_Channel[Channels_Keys.at(i).toLocal8Bit().constData()].toString();
        if(names ==Channel_name)
            state=0;
    }
    if(state)
    {

        QJsonObject This_channel;
        This_channel["Name"]=Channel_name;
        This_channel["Creator"]=Current_User->getID();
        QJsonArray memmbers;
        for(int i =0;i<Groupmember->size();i++)
            memmbers.append(Groupmember->value(i));
        This_channel["Members"]=memmbers;
        QJsonArray admins;
        admins.append(Current_User->getID());
        This_channel["Admins"]=admins;
        This_channel["State"]=0;
        All_Channel[Channel_name]=This_channel;
        for(int i=0;i<Groupmember->size();i++)
        {
            QJsonObject j=All_User[Groupmember->value(i)].toObject();
            QJsonArray b = j["Chats"].toArray();
            b.append(Channel_name);
            j["Chats"]=b;
            All_User[Groupmember->value(i)]=j;
        }
        QJsonObject this_channel_messages;
        QJsonArray mess;
        this_channel_messages["Messages"]=mess;
        this_channel_messages["Senders"]=mess;
        All_Chats[Channel_name] = this_channel_messages;
        QFile F_W_Channel("All_Channel.json");
        if(F_W_Channel.open(QIODevice::WriteOnly))
        {
            QJsonDocument Channel_file(All_Channel);
            F_W_Channel.write(Channel_file.toJson());
            F_W_Channel.close();
        }
        QFile F_W_User("All_User.json");
        if(F_W_User.open(QIODevice::WriteOnly))
        {
            QJsonDocument User_File(All_User);
            F_W_User.write(User_File.toJson());
            F_W_User.close();
        }
        QFile F_W_Messeges("All_Message.json");
        if(F_W_Messeges.open(QIODevice::WriteOnly))
        {
            QJsonDocument Messeges_File(All_Chats);
            F_W_Messeges.write(Messeges_File.toJson());
            F_W_Messeges.close();
        }
        Channel* New_Channel = new Channel(Channel_name,Current_User);
        this->destroy();
        New_Channel->show();
    }
    else
    {
        QMessageBox::warning(this,"cannot creat channel","Change channel name");
    }
}

