#ifndef ADD_MEMBER_H
#define ADD_MEMBER_H

#include <QDialog>

namespace Ui {
class Add_Member;
}

class Add_Member : public QDialog
{
    Q_OBJECT

public slots:
    void on_btn_Clicked();
public:
    explicit Add_Member(QString Current_user,QString Chat_Page,QWidget *parent = nullptr);
    ~Add_Member();

private:
    Ui::Add_Member *ui;
    QString Chat_name;
};

#endif // ADD_MEMBER_H
