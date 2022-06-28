#include "channel.h"
#include "ui_channel.h"

Channel::Channel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Channel)
{
    ui->setupUi(this);
}

Channel::Channel(QVector<Message> messages, QVector<User> members, User creator, QVector<User> admins, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Channel)
{
    setMessages(messages);
    setMembers(members);
    setCreator(creator);
    setAdmins(admins);
    ui->setupUi(this);
}

QVector<User> Channel::getAdmins() const
{
    return admins;
}

User Channel::getCreator() const
{
    return creator;
}

void Channel::setAdmins(QVector<User> admins)
{
    this->admins = admins;
}

void Channel::addAdmin(User admin)
{
    admins.push_front(admin);
}

void Channel::setCreator(User creator)
{
    this->creator = creator;
}

void Channel::addMember(User member)
{
    getMembers().push_front(member);
}

Channel::~Channel()
{
    delete ui;
}
