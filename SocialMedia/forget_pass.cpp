#include "forget_pass.h"
#include "ui_forget_pass.h"
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

forget_pass::forget_pass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forget_pass)
{
    ui->setupUi(this);
}

forget_pass::~forget_pass()
{
    delete ui;
}

void forget_pass::on_Cancel_btn_clicked()
{
    this->destroy();
}


void forget_pass::on_Pass_btn_clicked()
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
        Test_User = All_User.find(ui->ID_Line->text())->toObject();
        if(Test_User!=All_User.end()->toObject())
        {
            if(Test_User["Username"]==ui->Username_line->text())
            {
                User *U = new User();
                try{
                    U->setPassword(ui->Pass_line->text());
                    Test_User["Password"] = ui->Pass_line->text();
                    All_User[ui->ID_Line->text()] = Test_User;
                    QFile F_W_Users("All_User.json");
                    if(F_W_Users.open(QIODevice::WriteOnly))
                    {
                        QJsonDocument All_User_File(All_User);
                        F_W_Users.write(All_User_File.toJson());
                        F_W_Users.close();
                        this->destroy();
                        QMessageBox x;
                        x.setText("Password been changed");
                        x.exec();
                    }
                }
                catch(out_of_range y)
                {
                      QMessageBox::information(this,"Reson not working",y.what());
                }

            }
            else{
                QMessageBox::information(this,"Reson not working","Wrong Username");
            }
        }
        else
        {
            QMessageBox::information(this,"Reson not working","Wrong ID");
        }

    }
}

