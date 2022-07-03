#ifndef CHAT_H
#define CHAT_H
#include <QVector>
#include "message.h"
#include "user.h"

// a class for showing the chat screen
class Chat
{
    QVector<QString> messages;
    QVector<User> members;
    QString Chat_page_name;
    //int newMessageCount;
public:
    Chat();
    Chat(QVector<QString> messages, QVector<User> members);

    QVector<QString> getMessages() const;
    QVector<User> getMembers() const;
    QString get_Chat_page_name() const;
    //int getNewMessageCount() const;

    void setMembers(QVector<User> members);
    void setMessages(QVector<QString> messages);
    void set_Chat_page_name(QString chat_page);
    //void addNewMessageCount();

    //void addMessage(Message msg);
};

#endif // CHAT_H
