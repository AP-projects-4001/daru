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
        QJsonObject All_User;
        QFile F_R_Users("All_User.json");
        if(F_R_Users.open(QIODevice::ReadOnly))
        {
            QByteArray a = F_R_Users.readAll();
            QJsonDocument b = QJsonDocument::fromJson(a);
            All_User = b.object();
            F_R_Users.close();
        }
        QList Users_Keys = All_User.keys();
        QJsonObject Test_User;
        for(int i = 0;i<Users_Keys.size();i++)
        {
            Test_User = All_User[Users_Keys.at(i).toLocal8Bit().constData()].toObject();
            if(Test_User["ID"] == currentUser.getID())
            {
                Test_User["Username"] = ui->usernameChangetxt->text();
            }
        }
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
        QJsonObject All_User;
        QFile F_R_Users("All_User.json");
        if(F_R_Users.open(QIODevice::ReadOnly))
        {
            QByteArray a = F_R_Users.readAll();
            QJsonDocument b = QJsonDocument::fromJson(a);
            All_User = b.object();
            F_R_Users.close();
        }
        QList Users_Keys = All_User.keys();
        QJsonObject Test_User;
        for(int i = 0;i<Users_Keys.size();i++)
        {
            Test_User = All_User[Users_Keys.at(i).toLocal8Bit().constData()].toObject();
            if(Test_User["ID"] == currentUser.getID())
            {
                Test_User["ID"] = ui->IDChangetxt->text();
                All_User.remove(currentUser.getID());
                All_User[ui->IDChangetxt->text()] = Test_User;
            }

        }
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
        QJsonObject All_User;
        QFile F_R_Users("All_User.json");
        if(F_R_Users.open(QIODevice::ReadOnly))
        {
            QByteArray a = F_R_Users.readAll();
            QJsonDocument b = QJsonDocument::fromJson(a);
            All_User = b.object();
            F_R_Users.close();
        }
        QList Users_Keys = All_User.keys();
        QJsonObject Test_User;
        for(int i = 0;i<Users_Keys.size();i++)
        {
            Test_User = All_User[Users_Keys.at(i).toLocal8Bit().constData()].toObject();
            if(Test_User["ID"] == currentUser.getID())
            {
                Test_User["Phone"] = ui->phoneChangetxt->text();
            }

        }
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
        QJsonObject All_User;
        QFile F_R_Users("All_User.json");
        if(F_R_Users.open(QIODevice::ReadOnly))
        {
            QByteArray a = F_R_Users.readAll();
            QJsonDocument b = QJsonDocument::fromJson(a);
            All_User = b.object();
            F_R_Users.close();
        }
        QList Users_Keys = All_User.keys();
        QJsonObject Test_User;
        for(int i = 0;i<Users_Keys.size();i++)
        {
            Test_User = All_User[Users_Keys.at(i).toLocal8Bit().constData()].toObject();
            if(Test_User["ID"] == currentUser.getID())
            {
                Test_User["Password"] = ui->passChangetxt->text();
            }

        }
    }
    catch(out_of_range &y)
    {
        QMessageBox x;
        x.setText(y.what());
        x.exec();
    }
}


void Profile::on_profileChangeButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Choose"), "", tr("Images (*.png *.jpg *.jpeg)"));
    if (QString::compare(fileName, QString()) != 0){
        QImage image;
        bool valid = image.load(fileName);

        if (valid){
            image = image.scaledToWidth(ui->profilePicLabel->width(), Qt::SmoothTransformation);
            ui->profilePicLabel->setPixmap(QPixmap::fromImage(image));
        }
        else{
            QMessageBox::information(this, "Failure", "Something went wrong, please try again later", QMessageBox::Close);
        }
    }
}




