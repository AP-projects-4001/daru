#include "channel.h"
#include "ui_channel.h"
#include"user.h"
#include<iostream>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QFile>
#include<QMessageBox>
#include"deletemember.h"
#include"add_admin.h"
#include"add_member.h"
Channel::Channel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Channel)
{
    ui->setupUi(this);
}

Channel::Channel(QString Chat_page_name, User* Current_User,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Channel)
{
    setChannelName(Chat_page_name);
    ui->setupUi(this);
    int Current_state = 0;
    this->Current_User=Current_User;
    QJsonObject All_Channel;
    QJsonObject This_Channel;

    QFile F_R_Channel("All_Channel.json");
    if(F_R_Channel.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Channel.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Channel = b.object();
        F_R_Channel.close();
    }
    This_Channel=All_Channel[Chat_page_name].toObject();
    if(This_Channel["State"]==1)
    {
        QJsonArray Admins;
        Admins = This_Channel["Admins"].toArray();
        for(int i =0;i<Admins.size();i++)
        {
            if(Current_User->getID()==Admins[i].toString())
            {
                Current_state=1;
                break;
            }
        }
        if(Current_state ==0)
        {
            ui->Add_admin_btn->hide();
            ui->Delete_member_btn->hide();
            ui->Add_Member->hide();
        }
    }
    else
    {
        QJsonArray Admins;
        Admins = This_Channel["Admins"].toArray();
        for(int i =0;i<Admins.size();i++)
        {
            if(Current_User->getID()==Admins[i].toString())
            {
                Current_state=1;
                break;
            }
        }
        if(Current_state ==0)
        {
            ui->Add_admin_btn->hide();
            ui->Delete_member_btn->hide();
            ui->lineEdit->hide();
            ui->Send_btn->hide();
        }
    }
    Updating_page(Chat_page_name);
}

QVector<User> Channel::getAdmins() const
{
    return admins;
}

User Channel::getCreator() const
{
    return creator;
}

QString Channel::getChannelName() const
{
    return this->get_Chat_page_name();
}

void Channel::setChannelName(QString channelName)
{
    this->set_Chat_page_name(channelName);
}

void Channel::setAdmins(QVector<User> admins)
{
    this->admins = admins;
}

void Channel::addAdmin(User admin)
{
    admins.push_front(admin);
}

void Channel::setCreator(User creator)
{
    this->creator = creator;
}

void Channel::addMember(User member)
{
    getMembers().push_front(member);
}

bool Channel::checkAdmin(QString checkID)
{
    for (int i = 0; i < this->admins.length(); i++){
        if (admins[i].getID() == checkID){
            return true;
        }
    }
    return false;
}

void Channel::Updating_page(QString Chat_page)
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
    This_Chat=All_Messages[Chat_page].toObject();
    QJsonArray messages = This_Chat["Messages"].toArray();
    for(int i = 0;i<messages.size();i++)
    {
        ui->listWidget->addItem(messages[i].toString());
    }

}

Channel::~Channel()
{
    delete ui;
}

void Channel::on_Send_btn_clicked()
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
    This_Chat=All_Messages[this->getChannelName()].toObject();
    QString Message = Current_User->getUserName()+" : "+ui->lineEdit->text();
    QJsonArray All_Messeges_this=This_Chat["Messages"].toArray();
    All_Messeges_this.append(Message);
    QJsonArray Senders = All_Messages["Senders"].toArray();
    ui->listWidget->addItem(Message);
    Senders.append(Current_User->getID());
    This_Chat["Messages"]=All_Messeges_this;
    This_Chat["Senders"]=Senders;
    All_Messages[this->getChannelName()] = This_Chat;
    QFile F_W_Messeages("All_Message.json");
    if(F_W_Messeages.open(QIODevice::WriteOnly))
    {
        QJsonDocument Message_file(All_Messages);
        F_W_Messeages.write(Message_file.toJson());
        F_W_Messeages.close();
    }

}

void Channel::on_Add_admin_btn_clicked()
{
    Add_Admin* new_admin = new Add_Admin(this->getChannelName(),this);
    new_admin->show();
}


void Channel::on_Delete_member_btn_clicked()
{
    DeleteMember* deletm = new DeleteMember(this->getChannelName(),this);
    deletm->show();
}


void Channel::on_Add_Member_clicked()
{
    Add_Member* new_member = new Add_Member(Current_User->getID(),this->getChannelName(),this);
    new_member->show();
}


void Channel::on_Refresh_clicked()
{
    ui->listWidget->clear();
    this->Updating_page(this->getChannelName());
}

