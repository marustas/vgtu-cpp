#include "Date.h"
#include <iomanip>
#include <iostream>
using namespace std;
Date::Date(int day, int month, int year)
    : m_day{day}, m_month{Month(month)}, m_year{year} {}

Date::Date(int day, Month m, int year)
    : m_day{day}, m_month{(Month)m}, m_year{year} {}

int Date::getDay() const
{
    return m_day;
}
Month Date::getMonth() const
{
    return m_month;
}

int Date::getYear() const
{
    return m_year;
}

void Date::print() const
{
    cout << m_year << "/" << setw(2) << setfill('0') << (int)m_month << "/"
         << setw(2) << setfill('0') << m_day << endl;
}

void Date::addDay()
{
    static const int monthDays[13]{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m_day == 31 && (int)m_month == 12)
        ++m_year;
    ++m_day;
    if (monthDays[(int)m_month], m_day)
    {
        m_day = 1;
        m_month = ((int)m_month == 12) ? Month(1) : Month((int)m_month + 1);
    }
}