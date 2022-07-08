#include "add_member.h"
#include "ui_add_member.h"
#include<iostream>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QFile>
#include<QMessageBox>
#include<QPushButton>
#include<QListWidget>

void Add_Member::on_btn_Clicked()
{
    QPushButton* buttonSender = qobject_cast<QPushButton*>(sender()); // retrieve the button you have clicked
    QString buttonText = buttonSender->text(); // retrive the text from the button clicked
    QJsonObject All_Channel;
    QFile F_R_Channel("All_Channel.json");
    if(F_R_Channel.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Channel.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Channel = b.object();
        F_R_Channel.close();
    }
    QJsonObject This_Channel = All_Channel[Chat_name].toObject();
    QJsonArray members = This_Channel["Members"].toArray();
    members.append(buttonText);
    This_Channel["Members"] = members;
    All_Channel[Chat_name] = This_Channel;
    QFile F_W_Channel("All_Channel.json");
    if(F_W_Channel.open(QIODevice::WriteOnly))
    {
        QJsonDocument Channel_file(All_Channel);
        F_W_Channel.write(Channel_file.toJson());
        F_W_Channel.close();
    }
    QJsonObject All_User;
    QFile F_R_Users("All_User.json");
    if(F_R_Users.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Users.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_User = b.object();
        F_R_Users.close();
    }
    QJsonObject This_User = All_User[buttonText].toObject();
    QJsonArray User_chats = This_User["Chats"].toArray();
    User_chats.append(this->Chat_name);
    This_User["Chats"] = User_chats;
    All_User[buttonText] = This_User;
    QJsonDocument All_User_File(All_User);
    QFile F_W_Users("All_User.json");
    if(F_W_Users.open(QIODevice::WriteOnly))
    {
        F_W_Users.write(All_User_File.toJson());
        F_W_Users.close();
    }
    QMessageBox::information(this,"operation Succesful",buttonText+" Added");
    this->destroy();
}

Add_Member::Add_Member(QString Current_user,QString Chat_Page,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Member)
{
    ui->setupUi(this);
    QFile F_R_User("All_User.json");
    this->Chat_name = Chat_Page;
    QJsonObject All_User;
    if(F_R_User.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_User.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_User = b.object();
        F_R_User.close();
    }
    QJsonObject All_Channel;
    QFile F_R_Channel("All_Channel.json");
    if(F_R_Channel.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Channel.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Channel = b.object();
        F_R_Channel.close();
    }
    QJsonObject This_User = All_User[Current_user].toObject();
    QJsonObject This_Channel = All_Channel[Chat_Page].toObject();
    QJsonArray contacts = This_User["Contacts"].toArray();
    QJsonArray Members = This_Channel["Members"].toArray();
    QJsonArray Show;
    for(int i = 0 ;i<contacts.size();i++)
    {
        int state = 1;
        for(int j=0;j<Members.size();j++)
        {
            if(contacts[i]==Members[j])
            {
                state = 0;
                break;
            }
        }
        if(state)
            Show.append(contacts[i]);
    }
    for(int i = 0; i<Show.size();i++)
    {
        QPushButton* btn = new QPushButton(Show[i].toString());
        connect(btn, SIGNAL(clicked()), this, SLOT(on_btn_Clicked()));
        QListWidgetItem *item = new QListWidgetItem(ui->listWidget);
        ui->listWidget->addItem(item);
        ui->listWidget->setItemWidget(item, btn);
    }
}

Add_Member::~Add_Member()
{
    delete ui;
}
