#ifndef DARUGRAM_H
#define DARUGRAM_H
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
#include <QMainWindow>
#include <QPushButton>
#include <QListWidget>
#include <QDebug>

namespace Ui {
class Darugram;
}

class Darugram : public QMainWindow
{
    Q_OBJECT

public:
    explicit Darugram(QWidget *parent = nullptr);
    Darugram(QWidget *parent = nullptr,User *Current_User = new User());
    void on_Chat_btn_clicked(QString b);
    ~Darugram();

private slots:
    void on_Search_btn_clicked();

    void on_Start_chat_btn_clicked();

<<<<<<< HEAD
    void on_Chat_btn_clicked();

    void on_CreatGroup_clicked();

=======
>>>>>>> 684f6a979e37557544d1655ca0436f3f8e7f2d92
private:
    Ui::Darugram *ui;
    User *Current_User;
};

#endif // DARUGRAM_H
