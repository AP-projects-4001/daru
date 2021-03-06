#ifndef PROFILE_H
#define PROFILE_H

#include "user.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QFileDialog>
#include <QCheckBox>
#include <QDir>

namespace Ui {
class Profile;
}

class Profile : public QMainWindow
{
    Q_OBJECT

public:
    explicit Profile(QWidget *parent = nullptr);
    explicit Profile(User *currentUser = new User(), QWidget *parent = nullptr);
    ~Profile();

private slots:
    void on_usernameChangebtn_clicked();

    void on_IDChangebtn_clicked();

    void on_phoneChangebtn_clicked();

    void on_passChangebtn_clicked();

    void on_profileChangeButton_clicked();

    //void on_removeProfileButton_clicked();

    void on_check_clicked(bool x, QString id);

private:
    Ui::Profile *ui;

    User *currentUser;
};

#endif // PROFILE_H
