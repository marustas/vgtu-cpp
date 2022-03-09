//#pragma once - newer way to avoid multiple definition
#ifndef DATE_H // if not defined
#define DATE_H
enum class Month {
    jan=1, feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};
class Date
{
public:
    Date(int day=1, int month=1, int year=2000);
    Date (int day, Month m, int year);
    int getYear() const;
    Month getMonth() const;
    int getDay() const;
    void print() const;
    void addDay();
private:
    int m_year;
    Month m_month;
    int m_day;
};

#endif