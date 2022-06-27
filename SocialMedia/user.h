#ifndef USER_H
#define USER_H
#include <iostream>
#include <QString>
#include "date.h"

// defining user class for storing user data : name, phone number, etc
class User
{
    QString userName;
    QString password;
    QString phoneNumber;
    QString email;
    // id parameter for texting people without their number
    QString ID;
    QString birthDate;
public:
    User();
    User(QString userName, QString password, QString phoneNumber, QString email, QString ID, QString birthDate);

    QString getUserName() const;
    QString getPassword() const;
    QString getPhoneNumber() const;
    QString getEmail() const;
    QString getID() const;
    QString getBirthDate();

    void setUserName(QString userName);
    void setPassword(QString password);
    void setPhoneNumber(QString phoneNumber);
    void setEmail(QString email);
    void setID(QString ID);
    void setBirthDate(QString birthDate);

};

#endif // USER_H
