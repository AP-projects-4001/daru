#include "add_admin.h"
#include "ui_add_admin.h"
#include<iostream>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QFile>
#include<QMessageBox>
#include<QPushButton>
#include<QListWidget>

void Add_Admin::on_btn_Clicked()
{
    QPushButton* buttonSender = qobject_cast<QPushButton*>(sender()); // retrieve the button you have clicked
    QString buttonText = buttonSender->text(); // retrive the text from the button clicked
    QJsonObject All_Channel;
    QFile F_R_Channel("All_Channel.json");
    if(F_R_Channel.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Channel.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Channel = b.object();
        F_R_Channel.close();
    }
    QJsonObject This_Channel = All_Channel[Chat_name].toObject();
    QJsonArray Admins = This_Channel["Admins"].toArray();
    Admins.append(buttonText);
    This_Channel["Admins"] = Admins;
    All_Channel[Chat_name] = This_Channel;
    QFile F_W_Channel("All_Channel.json");
    if(F_W_Channel.open(QIODevice::WriteOnly))
    {
        QJsonDocument Channel_file(All_Channel);
        F_W_Channel.write(Channel_file.toJson());
        F_W_Channel.close();
    }
    QMessageBox::information(this,"operation Succesful",buttonText+" add to admins");
    this->destroy();
}

Add_Admin::Add_Admin(QString Chat_Name,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Admin)
{
    ui->setupUi(this);
    this->Chat_name=Chat_Name;
    QJsonObject All_Channel;
    QFile F_R_Channel("All_Channel.json");
    if(F_R_Channel.open(QIODevice::ReadOnly))
    {
        QByteArray a = F_R_Channel.readAll();
        QJsonDocument b = QJsonDocument::fromJson(a);
        All_Channel = b.object();
        F_R_Channel.close();
    }
    QJsonObject This_Channel = All_Channel[Chat_Name].toObject();
    QJsonArray Admins = This_Channel["Admins"].toArray();
    QJsonArray Member=This_Channel["Members"].toArray();
    QJsonArray Show;
    for(int i=0;i<Member.size();i++)
    {
        int state = 1;
        for(int j = 0; j<Admins.size();j++)
        {
            if(Member[i]==Admins[j])
                state = 0;
        }
        if(state)
        {
            Show.append(Member[i]);
        }

    }
    for(int i = 0; i<Show.size();i++)
    {
        QPushButton* btn = new QPushButton(Show[i].toString());
        connect(btn, SIGNAL(clicked()), this, SLOT(on_btn_Clicked()));
        QListWidgetItem *item = new QListWidgetItem(ui->listWidget);
        ui->listWidget->addItem(item);
        ui->listWidget->setItemWidget(item, btn);
    }


}

Add_Admin::~Add_Admin()
{
    delete ui;
}
