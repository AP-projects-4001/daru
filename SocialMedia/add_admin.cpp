#include "add_admin.h"
#include "ui_add_admin.h"

Add_Admin::Add_Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Admin)
{
    ui->setupUi(this);
}

Add_Admin::~Add_Admin()
{
    delete ui;
}
