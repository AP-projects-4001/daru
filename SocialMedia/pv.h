#ifndef PV_H
#define PV_H

#include "chat.h"
#include <QMainWindow>

namespace Ui {
class Pv;
}

class Pv : public QMainWindow , public Chat
{
    Q_OBJECT

public:
    explicit Pv(QWidget *parent = nullptr);
    explicit Pv(QVector<QString> messages, QVector<User> members, QWidget *parent = nullptr);
    explicit Pv(QVector<QString> messages,QVector<User> members,QString Chat_page_name,QWidget *parent = nullptr);
    ~Pv();

private slots:
    void on_Send_btn_clicked();

private:
    Ui::Pv *ui;
};

#endif // PV_H
