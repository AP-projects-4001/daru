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
#include"forget_pass.h"

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
}


Darugram::~Darugram()
{
    delete ui;
}
