#include "user.h"

User::User()
{
    userName = "";
    password = "";
    phoneNumber = "";
    email = "";
    ID = "";
    birthDate = "";
}

User::User(QVector<User> contacts, QVector<QString> chatNames, QString userName, QString password, QString phoneNumber, QString email, QString ID, QString birthDate)
{
    setContacts(contacts);
    setChatNames(chatNames);
    setUserName(userName);
    setPassword(password);
    setPhoneNumber(phoneNumber);
    setEmail(email);
    setID(ID);
    setBirthDate(birthDate);
}

QVector<User> User::getContacts() const
{
    return contacts;
}

QString User::getUserName() const
{
    return userName;
}

QString User::getPassword() const
{
    return password;
}

QString User::getPhoneNumber() const
{
    return phoneNumber;
}
QString User::getEmail() const
{
    return email;
}

QString User::getID() const
{
    return ID;
}

QString User::getBirthDate()
{
    return birthDate;
}

QVector<QString> User::getChatNames() const
{
    return chatNames;
}

void User::setContacts(QVector<User> contacts)
{
    this->contacts = contacts;
}

void User::setUserName(QString userName)
{
    for (int i = 0; i < userName.length(); i++){
        if (isalpha(userName.toStdString()[i]) == 0 && isdigit(userName.toStdString()[i]) == 0)
            throw out_of_range("Username can only contain characters and numbers");
    }
    this->userName = userName;
}

void User::setPassword(QString password)
{
    if (password.length() < 7){
        throw out_of_range("Password should at least contain 7 characters");
    }
    for (int i = 0; i < password.length(); i++){
        if (isalpha(password.toStdString()[i]) == 0 && isdigit(password.toStdString()[i]) == 0)
            throw out_of_range("Password can only contain characters and numbers");
    }
    for (int i = 0; i < password.length(); i++){
        if (islower(password.toStdString()[i])){
            for (int j = 0; j < password.length(); j++){
                if (isupper(password.toStdString()[j])){
                    for (int k = 0; k < password.length(); k++){
                        if (isdigit(password.toStdString()[k])){
                            this->password = password;
                            return;
                        }
                    }
                }
            }
        }
    }
    throw out_of_range("Password should contain at least 1 capital letter, 1 small letter and 1 number");
}

void User::setPhoneNumber(QString phoneNumber)
{
    if (phoneNumber.length() != 10){
        throw out_of_range("Phone number should contain 10 numbers");
    }
    for (int i = 0; i < phoneNumber.length(); i++){
        if (isdigit(phoneNumber.toStdString()[i])){
            this->phoneNumber = phoneNumber;
            return;
        }

    }
    throw out_of_range("invalid phone number");
}

void User::setEmail(QString email)
{
    this->email = email;
}

void User::setID(QString ID)
{
    this->ID = ID;
}

void User::setBirthDate(QString birthDate)
{
    this->birthDate = birthDate;
}

void User::setChatNames(QVector<QString> chatNames)
{
    this->chatNames = chatNames;
}
