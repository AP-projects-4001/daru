#ifndef PROFILE_H
#define PROFILE_H

#include "user.h"
#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class Profile;
}

class Profile : public QMainWindow
{
    Q_OBJECT

public:
    explicit Profile(QWidget *parent = nullptr);
    explicit Profile(User currentUser, QWidget *parent = nullptr);
    ~Profile();

private slots:
    void on_usernameChangebtn_clicked();

    void on_IDChangebtn_clicked();

    void on_phoneChangebtn_clicked();

    void on_passChangebtn_clicked();

private:
    Ui::Profile *ui;

    User currentUser;
};

#endif // PROFILE_H
