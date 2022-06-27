#ifndef MESSAGE_H
#define MESSAGE_H
#include <QString>

using namespace std;

//simple message class for saving chat messages
class Message
{
    QString msg;
    //names of sender and reciever
    QString sender;
    QString reciever;
    //  Date msgDate
    //  Time msgTime

public:
    Message();

    QString getMsg() const;
    QString getSender() const;
    QString getReciever() const;

    void setMsg(QString msg);
    void setSender(QString sender);
    void setReciever(QString reciever);
};

#endif // MESSAGE_H
