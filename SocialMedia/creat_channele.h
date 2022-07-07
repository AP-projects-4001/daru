#ifndef CREAT_CHANNELE_H
#define CREAT_CHANNELE_H
#include"register.h"
#include"user.h"
#include"date.h"
#include<iostream>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QFile>
#include<QMessageBox>
#include"pv.h"
#include"forget_pass.h"
#include <QDialog>

namespace Ui {
class Creat_channele;
}

class Creat_channele : public QDialog
{
    Q_OBJECT

public:
    explicit Creat_channele(User *Current_User,QWidget *parent = nullptr);
    ~Creat_channele();
public slots:
    void CheckboxChanged(int check_state);
private slots:
    void on_Create_G_B_clicked();

    void on_Cancel_clicked();

    void on_Create_C_B_clicked();

private:
    User* Current_User;
    QVector<QString> *Groupmember = new QVector<QString>;
    Ui::Creat_channele *ui;
};

#endif // CREAT_CHANNELE_H
