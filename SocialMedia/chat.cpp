#include "chat.h"

chat::chat(QVector<Message> messages, QVector<User> members)
{
    setMessages(messages);
    setMembers(members);
}

QVector<Message> chat::getMessages() const
{
    return messages;
}

QVector<User> chat::getMembers() const
{
    return members;
}

void chat::setMembers(QVector<User> members)
{
    this->members = members;
}

void chat::setMessages(QVector<Message> messages)
{
    this->messages = messages;
}
