#ifndef REGISTER_H
#define REGISTER_H
#include<iostream>
#include <QDialog>
#include"user.h"
#include"date.h"

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_Cancel_Button_clicked();

    void on_Register_Button_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
