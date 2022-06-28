#include "pv.h"
#include "ui_pv.h"

Pv::Pv(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pv)
{
    ui->setupUi(this);
}

Pv::Pv(QVector<Message> messages, QVector<User> members, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pv)
{
    this->setMessages(messages);
    this->setMembers(members);
    ui->setupUi(this);
}

Pv::~Pv()
{
    delete ui;
}
