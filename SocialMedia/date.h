#ifndef DATE_H
#define DATE_H
#include <iostream>

using namespace std;
// defining date class for storing user birth date and potentially for showing date in the app
class Date
{
    int day;
    int month;
    int year;
public:
    Date();
    Date(int day, int month, int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
};

#endif // DATE_H
