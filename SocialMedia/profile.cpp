#include "profile.h"
#include "ui_profile.h"

Profile::Profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::on_usernameChangebtn_clicked()
{
    try{
        currentUser.setUserName(ui->usernameChangetxt->text());
    }
    catch(out_of_range &y)
    {
        QMessageBox x;
        x.setText(y.what());
        x.exec();
    }
}


void Profile::on_IDChangebtn_clicked()
{
    try{
        currentUser.setID(ui->IDChangetxt->text());
    }
    catch(out_of_range &y)
    {
        QMessageBox x;
        x.setText(y.what());
        x.exec();
    }
}


void Profile::on_phoneChangebtn_clicked()
{
    try{
        currentUser.setPhoneNumber(ui->phoneChangetxt->text());
    }
    catch(out_of_range &y)
    {
        QMessageBox x;
        x.setText(y.what());
        x.exec();
    }
}


void Profile::on_passChangebtn_clicked()
{
    try{
        currentUser.setPassword(ui->passChangetxt->text());
    }
    catch(out_of_range &y)
    {
        QMessageBox x;
        x.setText(y.what());
        x.exec();
    }
}

