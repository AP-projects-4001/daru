#include "message.h"

Message::Message()
{
    setMsg("");
    setSender("");
    setReciever("");
}

QString Message::getMsg() const
{
    return msg;
}

QString Message::getSender() const
{
    return sender;
}

QString Message::getReciever() const
{
    return reciever;
}

void Message::setMsg(QString msg)
{
    this->msg = msg;
}

void Message::setSender(QString sender)
{
    this->sender = sender;
}

void Message::setReciever(QString reciever)
{
    this->reciever = reciever;
}
