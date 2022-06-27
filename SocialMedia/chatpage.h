#ifndef CHATPAGE_H
#define CHATPAGE_H
#include <QMainWindow>
#include"user.h"
namespace Ui {
class ChatPage;
}

class ChatPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChatPage(QWidget *parent = nullptr);
    ~ChatPage();
    void Current_Person_Make();
private slots:
    void Add_Perso(User *U);

private:
    Ui::ChatPage *ui;
    User *currentUser = new User();
};

#endif // CHATPAGE_H
