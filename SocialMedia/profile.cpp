#include "profile.h"
#include "ui_profile.h"

Profile::Profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
}

Profile::Profile(User *currentUser, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
    QPixmap pix(":/image/images/download.png");
    int width = ui->labelPandN->width();
    int height = ui->labelPandN->height();
    ui->labelPandN->setPixmap(pix.scaled(width, height, Qt::KeepAspectRatio));
    QPixmap pix2(":/image/profiles/" + currentUser->getID() + ".jpg");
    width = ui->profilePicLabel->width();
    height = ui->profilePicLabel->height();
    ui->profilePicLabel->setPixmap(pix2.scaled(width, height, Qt::KeepAspectRatio));
    QJsonObject allUsers;
    QJsonObject current;
    QFile F_R_Users("All_User.json");
    if(F_R_Users.open(QIODevice::ReadOnly)){
        QByteArray a = F_R_Users.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        allUsers = b.object();
        F_R_Users.close();
    }
    current = allUsers[currentUser->getID()].toObject();
    for (int i = 0; i < current["Contacts"].toArray().size(); i++){
        QCheckBox *check = new QCheckBox(current["Contacts"].toArray()[i].toString(), this);
        if (current["AorD"].toArray()[i].toInteger()){
            check->setChecked(1);
        }
        //btn->setMinimumHeight(50);
        connect(check, SIGNAL(stateChanged(int)), this, SLOT(on_check_clicked(check->isChecked(), check->text())));
        QListWidgetItem *item = new QListWidgetItem(ui->listOfPermission);
        ui->listOfPermission->addItem(item);
        ui->listOfPermission->setItemWidget(item, check);
    }
}

Profile::~Profile()
{
    delete ui;
}

void Profile::on_usernameChangebtn_clicked()
{
    try{
        currentUser->setUserName(ui->usernameChangetxt->text());
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
            if(Test_User["ID"] == currentUser->getID())
            {
                Test_User["Username"] = ui->usernameChangetxt->text();
                break;
            }
        }
        All_User[currentUser->getID()] = Test_User;
        QJsonDocument All_User_File(All_User);
        QFile F_W_Users("All_User.json");
        if(F_W_Users.open(QIODevice::WriteOnly))
        {
            F_W_Users.write(All_User_File.toJson());
            F_W_Users.close();
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
        currentUser->setID(ui->IDChangetxt->text());
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
            if(Test_User["ID"] == currentUser->getID())
            {
                Test_User["ID"] = ui->IDChangetxt->text();
                All_User.remove(currentUser->getID());
                All_User[ui->IDChangetxt->text()] = Test_User;
                break;
            }

        }
        QJsonDocument All_User_File(All_User);
        QFile F_W_Users("All_User.json");
        if(F_W_Users.open(QIODevice::WriteOnly))
        {
            F_W_Users.write(All_User_File.toJson());
            F_W_Users.close();
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
        currentUser->setPhoneNumber(ui->phoneChangetxt->text());
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
            if(Test_User["ID"] == currentUser->getID())
            {
                Test_User["Phone"] = ui->phoneChangetxt->text();
                break;
            }

        }
        All_User[currentUser->getID()] = Test_User;
        QJsonDocument All_User_File(All_User);
        QFile F_W_Users("All_User.json");
        if(F_W_Users.open(QIODevice::WriteOnly))
        {
            F_W_Users.write(All_User_File.toJson());
            F_W_Users.close();
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
        currentUser->setPassword(ui->passChangetxt->text());
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
            if(Test_User["ID"] == currentUser->getID())
            {
                Test_User["Password"] = ui->passChangetxt->text();
                break;
            }

        }
        All_User[currentUser->getID()] = Test_User;
        QJsonDocument All_User_File(All_User);
        QFile F_W_Users("All_User.json");
        if(F_W_Users.open(QIODevice::WriteOnly))
        {
            F_W_Users.write(All_User_File.toJson());
            F_W_Users.close();
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
        QPixmap image;
        bool valid = image.load(fileName);

        if (valid){
            QDir dir;
            dir.mkdir(":/image/profiles");
            image.save(QString(":/image/profiles/" + currentUser->getID() + ".jpg"));
            image = image.scaledToWidth(ui->profilePicLabel->width(), Qt::SmoothTransformation);
            ui->profilePicLabel->setPixmap(image);
        }
        else{
            QMessageBox::information(this, "Failure", "Something went wrong, please try again later", QMessageBox::Close);
        }
    }
}


/*void Profile::on_removeProfileButton_clicked()
{
    ui->profilePicLabel->clear();
}*/

void Profile::on_check_clicked(bool x, QString id)
{
    QJsonObject allUsers;
    QJsonObject current;
    QFile F_R_Users("All_User.json");
    if(F_R_Users.open(QIODevice::ReadOnly)){
        QByteArray a = F_R_Users.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        allUsers = b.object();
        F_R_Users.close();
    }
    current = allUsers[currentUser->getID()].toObject();
    for (int i = 0; i < current["Contacts"].toArray().size(); i++){
        if (current["Contacts"].toArray()[i].toString() == id){
            if (x){
                current["AorD"].toArray()[i] = 1;
            }
            else{
                current["AorD"].toArray()[i] = 0;
            }
        }
    }
}
