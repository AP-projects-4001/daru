#ifndef ADD_ADMIN_H
#define ADD_ADMIN_H

#include <QDialog>

namespace Ui {
class Add_Admin;
}

class Add_Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Admin(QWidget *parent = nullptr);
    ~Add_Admin();

private:
    Ui::Add_Admin *ui;
};

#endif // ADD_ADMIN_H
