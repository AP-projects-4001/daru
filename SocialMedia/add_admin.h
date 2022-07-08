#ifndef ADD_ADMIN_H
#define ADD_ADMIN_H

#include <QDialog>

namespace Ui {
class Add_Admin;
}

class Add_Admin : public QDialog
{
    Q_OBJECT
public slots:
    void on_btn_Clicked();
public:
    explicit Add_Admin(QString Chat_Name,QWidget *parent = nullptr);
    ~Add_Admin();

private:
    Ui::Add_Admin *ui;
    QString Chat_name;
};

#endif // ADD_ADMIN_H
