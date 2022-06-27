#include "chatpage.h"
#include "ui_chatpage.h"
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
#include"mainwindow.h"


ChatPage::ChatPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChatPage)
{
    ui->setupUi(this);
}

ChatPage::~ChatPage()
{
    delete ui;
}

void ChatPage::Add_Perso(User *U)
{
    currentUser = U;
}
