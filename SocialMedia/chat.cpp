#include "chat.h"

Chat::Chat()
{
    ;
}

Chat::Chat(QVector<QString> messages, QVector<User> members)
{
    setMessages(messages);
    setMembers(members);
}

QVector<QString> Chat::getMessages() const
{
    return messages;
}

QVector<User> Chat::getMembers() const
{
    return members;
}

QString Chat::get_Chat_page_name() const
{
    return Chat_page_name;
}

/*int Chat::getNewMessageCount() const
{
    return newMessageCount;
}*/

void Chat::setMembers(QVector<User> members)
{
    this->members = members;
}

void Chat::setMessages(QVector<QString> messages)
{
    this->messages = messages;
}

void Chat::set_Chat_page_name(QString chat_page)
{
    this->Chat_page_name = chat_page;
}

/*void Chat::addNewMessageCount()
{
    newMessageCount++;
}*/


