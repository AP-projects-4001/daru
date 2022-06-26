#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include"register.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Register_Button_clicked()
{
    Register* R=new Register(this);
    R->show();
}

