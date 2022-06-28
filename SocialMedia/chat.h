#ifndef CHAT_H
#define CHAT_H
#include <QVector>
#include "message.h"
#include "user.h"

// a class for showing the chat screen
class Chat
{
    QVector<Message> messages;
    QVector<User> members;
public:
    Chat();
    Chat(QVector<Message> messages, QVector<User> members);

    QVector<Message> getMessages() const;
    QVector<User> getMembers() const;

    void setMembers(QVector<User> members);
    void setMessages(QVector<Message> messages);

    void addMessage(Message msg);
};

#endif // CHAT_H
