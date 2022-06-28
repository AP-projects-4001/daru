#include "chat.h"

Chat::Chat()
{
    ;
}

Chat::Chat(QVector<Message> messages, QVector<User> members)
{
    setMessages(messages);
    setMembers(members);
}

QVector<Message> Chat::getMessages() const
{
    return messages;
}

QVector<User> Chat::getMembers() const
{
    return members;
}

void Chat::setMembers(QVector<User> members)
{
    this->members = members;
}

void Chat::setMessages(QVector<Message> messages)
{
    this->messages = messages;
}

void Chat::addMessage(Message msg)
{
    this->messages.push_front(msg);
}
