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
#include"creat_channele.h"
#include"forget_pass.h"
#include"channel.h"

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

    //adding every chat to the main page
    QJsonObject allUsers;
    QJsonObject current;
    QFile F_R_Users("All_User.json");
    if(F_R_Users.open(QIODevice::ReadOnly)){
        QByteArray a = F_R_Users.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        allUsers = b.object();
        F_R_Users.close();
    }
    current = allUsers[Current_User->getID()].toObject();
    for (int i = 0; i < current["Chats"].toArray().size(); i++){
        QPushButton *btn = new QPushButton(current["Chats"].toArray()[i].toString());
        //btn->setMinimumHeight(50);
        connect(btn, SIGNAL(clicked()), this, SLOT(on_Chat_btn_clicked()));
        QListWidgetItem *item = new QListWidgetItem(ui->chatList);
        ui->chatList->addItem(item);
        ui->chatList->setItemWidget(item, btn);
    }
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
        QJsonArray d = Test_User["Contacts"].toArray();
        c.append(Cantact->getID());
        d.append(Current_User->getID());
        Current["Contacts"] = c;
        Test_User["Contacts"] = d;
        QJsonArray e = Current["AorD"].toArray();
        QJsonArray f = Test_User["AorD"].toArray();
        e.append(1);
        f.append(1);
        Current["AorD"] = e;
        Test_User["AorD"] = f;
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

void Darugram::on_Chat_btn_clicked()
{
    QPushButton* buttonSender = qobject_cast<QPushButton*>(sender()); // retrieve the button you have clicked
    QString buttonText = buttonSender->text(); // retrive the text from the button clicked
    QJsonObject All_Channel;
    QVector<QString> Messages;
    QJsonObject Test_User;
    QJsonObject All_User;
    QJsonObject All_Messages;
    int group=0;
    QFile F_R_Channel("All_Channel.json");
    if(F_R_Channel.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Channel.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Channel = b.object();
        F_R_Channel.close();
    }
    QJsonObject this_chat = All_Channel[buttonText].toObject();
    if(this_chat != All_Channel.end()->toObject())
    {
        group = 1;
    }
    if(group)
    {
        Channel* this_ch = new Channel(buttonText,Current_User,this);
        this_ch->show();
    }
    else{
        User* Cantact=new User();
        QFile F_R_Users("All_User.json");
        if(F_R_Users.open(QIODevice::ReadOnly))
        {
            QByteArray a = F_R_Users.readAll();
            QJsonDocument b = QJsonDocument::fromJson(a);
            All_User = b.object();
            F_R_Users.close();
        }
        QFile F_R_Messages("All_Message.json");
        if(F_R_Messages.open(QIODevice::ReadOnly))
        {
            QByteArray a = F_R_Messages.readAll();
            QJsonDocument b = QJsonDocument::fromJson(a);
            All_Messages = b.object();
            F_R_Messages.close();
        }
        QJsonObject Chat_page_messages=All_Messages[buttonText].toObject();
        QJsonArray Messeag = Chat_page_messages["Messages"].toArray();
        for(int i = 0; i<Messeag.size() ; i++)
        {
            Messages.append(Messeag[i].toString());
        }
        QVector<QString> ID;
        ID=buttonText.split("-");
        if(Current_User->getID()==ID[0])
        {
            Test_User=All_User[ID[1]].toObject();
            Cantact->setUserName(Test_User["Username"].toString());
            Cantact->setBirthDate(Test_User["Birthday"].toString());
            Cantact->setEmail(Test_User["Email"].toString());
            Cantact->setID(Test_User["ID"].toString());
            Cantact->setPhoneNumber(Test_User["Phone"].toString());
        }
        else
        {
            Test_User=All_User[ID[0]].toObject();
            Cantact->setUserName(Test_User["Username"].toString());
            Cantact->setBirthDate(Test_User["Birthday"].toString());
            Cantact->setEmail(Test_User["Email"].toString());
            Cantact->setID(Test_User["ID"].toString());
            Cantact->setPhoneNumber(Test_User["Phone"].toString());
        }
        QVector<User> Chat_User;
        Chat_User.push_front(*Current_User);
        Chat_User.push_front(*Cantact);
        delete Cantact;
        Pv *new_chat = new Pv(Messages,Chat_User,buttonText,this);

        new_chat->show();
    }

}


void Darugram::on_CreatGroup_clicked()
{
    Creat_channele *x = new Creat_channele(Current_User,this);
    x->show();
}


void Darugram::on_profile_btn_clicked()
{
    QJsonObject Test_User;
    QJsonObject All_User;
    User* profileUser = new User();
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
            if(Test_User["Username"].toString()==ui->Name_Lable->text())
            {
                break;
            }
        }
        for (int i = 0; i < Test_User["Contacts"].toArray().size(); i++){
            if (Current_User->getID() == Test_User["Contacts"].toArray()[i].toString()){
                if (Test_User["AorD"].toArray()[i].toInteger() == 1){
                    profileUser->setUserName(Test_User["Username"].toString());
                    profileUser->setBirthDate(Test_User["Birthday"].toString());
                    profileUser->setEmail(Test_User["Email"].toString());
                    profileUser->setID(Test_User["ID"].toString());
                    profileUser->setPhoneNumber(Test_User["Phone"].toString());
                    profileElse* pe = new profileElse(this, profileUser);
                    pe->show();
                }
                else{
                    QMessageBox::information(this, "Failure", "You're not allowed to see this user's profile!", QMessageBox::Close);
                }
            }
        }
    }
}

