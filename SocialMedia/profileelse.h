#ifndef PROFILEELSE_H
#define PROFILEELSE_H

#include <QDialog>
#include <QPixmap>
#include "user.h"
#include <QFile>

namespace Ui {
class profileElse;
}

class profileElse : public QDialog
{
    Q_OBJECT

public:
    explicit profileElse(QWidget *parent = nullptr);
    explicit profileElse(QWidget *parent = nullptr, User* currentUser = new User());
    ~profileElse();

private slots:
    void on_pushButton_clicked();

private:
    Ui::profileElse *ui;

    User* currentUser;

};

#endif // PROFILEELSE_H
