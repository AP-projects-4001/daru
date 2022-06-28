#ifndef CHANNEL_H
#define CHANNEL_H

#include "chat.h"
#include <QMainWindow>

namespace Ui {
class Channel;
}

class Channel : public QMainWindow, public Chat
{
    Q_OBJECT
//channel class to impliment chennels in social media
public:
    explicit Channel(QWidget *parent = nullptr);
    explicit Channel(QVector<Message> messages, QVector<User> members, User creator, QVector<User> admins, QWidget *parent = nullptr);

    QVector<User> getAdmins() const;
    User getCreator() const;
    void setAdmins(QVector<User> admins);
    void addAdmin(User admin);
    void setCreator(User creator);
    void addMember(User member);
    // checking if someone is an admin
    bool checkAdmin(QString checkUser);

    ~Channel();

private:
    User creator;
    QVector<User> admins;
    Ui::Channel *ui;
};

#endif // CHANNEL_H
