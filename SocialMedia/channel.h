#ifndef CHANNEL_H
#define CHANNEL_H

#include "chat.h"
#include <QMainWindow>
#include"user.h"
#include<iostream>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QFile>
#include<QMessageBox>

namespace Ui {
class Channel;
}

class Channel : public QMainWindow, public Chat
{
    Q_OBJECT
//channel class to impliment chennels in social media
public:
    explicit Channel(QWidget *parent = nullptr);
    explicit Channel(QString Chat_page_name,User* Current_User,QWidget *parent = nullptr);

    QVector<User> getAdmins() const;
    User getCreator() const;
    QString getChannelName() const;
    void setChannelName(QString channelName);
    void setAdmins(QVector<User> admins);
    void addAdmin(User admin);
    void setCreator(User creator);
    void addMember(User member);
    // checking if someone is an admin
    bool checkAdmin(QString checkUser);
    void Updating_page(QString Chat_page);
    ~Channel();

private slots:
    void on_Send_btn_clicked();

    void on_Add_admin_btn_clicked();

    void on_Delete_member_btn_clicked();

    void on_Add_Member_clicked();

    void on_Refresh_clicked();

private:
    User creator;
    QVector<User> admins;
    User* Current_User;
    Ui::Channel *ui;

};

#endif // CHANNEL_H
