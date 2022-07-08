#ifndef DELETEMEMBER_H
#define DELETEMEMBER_H

#include <QDialog>

namespace Ui {
class DeleteMember;
}

class DeleteMember : public QDialog
{
    Q_OBJECT
public slots:
    void on_btn_Clicked();

public:
    explicit DeleteMember(QString Chat_Name,QWidget *parent = nullptr);
    ~DeleteMember();

private:
    Ui::DeleteMember *ui;
    QString Chat_name;
};

#endif // DELETEMEMBER_H
