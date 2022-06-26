#include "register.h"
#include "ui_register.h"
#include"user.h"
#include"date.h"
#include<iostream>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QFile>
#include<QMessageBox>
#include<QDebug>
Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_Cancel_Button_clicked()
{
    this->destroy();
}


void Register::on_Register_Button_clicked()
{
    try{
        User *Reg_user = new User(ui->User_Line->text(),ui->Pass_Line->text(),ui->Phone_Line->text(),ui->Pass_Line->text(),ui->ID_Line->text(),ui->Birthday_Line->text());
        QJsonObject All_User;
        QFile F_R_Users("All_User.json");
        int state=1;
        if(F_R_Users.open(QIODevice::ReadOnly))
        {
            QByteArray a = F_R_Users.readAll();
            QJsonDocument b = QJsonDocument::fromJson(a);
            All_User = b.object();
            F_R_Users.close();
        }
        QList Users_Keys = All_User.keys();
        QJsonObject Current_User;
        QJsonObject Test_User;
        for(int i = 0;i<Users_Keys.size();i++)
        {
            Test_User = All_User[Users_Keys.at(i).toLocal8Bit().constData()].toObject();
            if(Test_User["ID"]==Reg_user->getID()||Test_User["Phone"]==Reg_user->getPhoneNumber()||Test_User["Email"]==Reg_user->getEmail())
            {
                state=0;
                break;
            }

        }
        if(state==1)
        {
            Current_User["Username"] = Reg_user->getUserName();
            Current_User["ID"] = Reg_user->getID();
            Current_User["Birthday"] = Reg_user->getBirthDate();
            Current_User["Phone"] = Reg_user->getPhoneNumber();
            Current_User["Password"] = Reg_user->getPassword();
            Current_User["Email"] = Reg_user->getEmail();
            All_User[Reg_user->getID()]=Current_User;
            QJsonDocument All_User_File(All_User);
            QFile F_W_Users("All_User.json");
            if(F_W_Users.open(QIODevice::WriteOnly))
            {
                F_W_Users.write(All_User_File.toJson());
                F_W_Users.close();
                this->destroy();
                QMessageBox x;
                x.setText("Registeration complete");
                x.exec();
            }
            else{
                QMessageBox x;
                x.setText("Files Not Opening");
                x.exec();
            }
        }
        else
        {
            QMessageBox::warning(this,"Reg_Problem","Same ID or Phone Number or Email");
            this->destroy();
        }
    }
    catch(out_of_range y)
    {
        QMessageBox x;
        x.setText(y.what());
        x.exec();
    }

}

