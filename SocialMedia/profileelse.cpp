#include "profileelse.h"
#include "ui_profileelse.h"

profileElse::profileElse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profileElse)
{
    ui->setupUi(this);
}

profileElse::profileElse(QWidget *parent, User* currentUser) :
    QDialog(parent),
    ui(new Ui::profileElse)
{
    ui->setupUi(this);
    ui->labelEmail->setText(currentUser->getEmail());
    ui->labelUsername->setText(currentUser->getUserName());
    ui->labelID->setText(currentUser->getID());
    ui->labelPhonenumber->setText(currentUser->getPhoneNumber());
    QPixmap pix(":/image/profiles/" + currentUser->getID() + ".jpg");
    int width = ui->profilePic->width();
    int height = ui->profilePic->height();
    ui->profilePic->setPixmap(pix.scaled(width, height, Qt::KeepAspectRatio));
}


profileElse::~profileElse()
{
    delete ui;
}

void profileElse::on_pushButton_clicked()
{
    this->close();
}

