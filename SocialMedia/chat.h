#ifndef CHAT_H
#define CHAT_H
#include <QVector>
#include "message.h"
#include "user.h"

// a class for showing the chat screen
class chat
{
    QVector<Message> messages;
    QVector<User> members;
public:
    chat(QVector<Message> messages, QVector<User> members);

    QVector<Message> getMessages() const;
    QVector<User> getMembers() const;

    void setMembers(QVector<User> members);
    void setMessages(QVector<Message> messages);
};

#endif // CHAT_H
