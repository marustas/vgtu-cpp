#include<iostream>
#include "Date.h"
using namespace std;

int main()
{
   const Date cd{15, Month::feb, 2022};
   Date dd{31,Month::dec,2021};
   // cout << d.getYear() << "/" << d.getMonth() << "/" << d.getDay() << endl;
    cd.print();
    dd.print();
    dd.addDay();
    dd.print();
}