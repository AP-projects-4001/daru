#include "mainwindow.h"
#include "ui_mainwindow.h"
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
#include"darugram.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Register_Button_clicked()
{
    Register* R=new Register(this);
    R->show();
}


void MainWindow::on_Login_Button_clicked()
{
    QJsonObject Test_User;
    QJsonObject All_User;
    int state = 0;
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
            if(Test_User["Username"]==ui->User_Line->text()&&Test_User["Password"]==ui->Line_Pass->text())
            {
                CurrentUser->setPassword(Test_User["Password"].toString());
                CurrentUser->setUserName(Test_User["Username"].toString());
                CurrentUser->setBirthDate(Test_User["Birthday"].toString());
                CurrentUser->setEmail(Test_User["Email"].toString());
                CurrentUser->setID(Test_User["ID"].toString());
                CurrentUser->setPhoneNumber(Test_User["Phone"].toString());
                state = 1;
                Darugram* D=new Darugram(this,CurrentUser);
                D->show();
                break;

            }
        }
        if(state==0)
            QMessageBox::warning(this,"Reason for Not working","Wrong Username or Password");
    }
    else
    {
        QMessageBox::information(this,"Reason for Not working","cannot open the file");
    }

}


void MainWindow::on_Forgot_Button_clicked()
{
    forget_pass *f = new forget_pass();
    f->show();
}

