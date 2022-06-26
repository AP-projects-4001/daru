#include "date.h"

Date::Date()
{
    day = 1;
    month = 1;
    year = 2000;
}

Date::Date(int day, int month, int year)
{
    setDay(day);
    setMonth(month);
    setYear(year);
}

int Date::getDay() const
{
    return day;
}

int Date::getMonth() const
{
    return month;
}

int Date::getYear() const
{
    return year;
}

void Date::setDay(int day)
{
    if (day < 1 || day > 30){
        throw out_of_range("invalid day");
    }
    this->day = day;
}

void Date::setMonth(int month)
{
    if (month < 1 || month > 12){
        throw out_of_range("invalid month");
    }
    this->month = month;
}

void Date::setYear(int year)
{
    if (year < 1900 || year > 2022){
        throw out_of_range("invalid year");
    }
    this->year = year;
}
