#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<iostream>
#include <QMainWindow>
#include"user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
signals:
    void Person_Add(User*);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Register_Button_clicked();
    void on_Login_Button_clicked();
    void on_Forgot_Button_clicked();

private:
    Ui::MainWindow *ui;
    User *CurrentUser = new User();
};
#endif // MAINWINDOW_H
