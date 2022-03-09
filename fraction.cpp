#include "fraction.h"
#include <iostream>
using namespace std;
Fraction::Fraction(int n, int d)
{
    Numerator = n;
    Denominator = d;

    if (d == 0)
        cout << "Hey don't make blackholes by dividing by zero!";
}

int Fraction::getNumerator() const { return Numerator; }
int Fraction::getDenominator() const { return Denominator; }
Fraction Fraction::operator+(const Fraction f2) const
{
    Fraction ReturnObj;

    if (Denominator == f2.Denominator)
    {
        ReturnObj.Numerator = Numerator + f2.Numerator;
        ReturnObj.Denominator = Denominator;
    }
    else
    {
        ReturnObj.Numerator = Numerator * f2.Denominator + f2.Numerator * Denominator;
        ReturnObj.Denominator = Denominator * f2.Denominator;
    }
    return ReturnObj;
}
int main()
{
    Fraction f1(1, 2);
    Fraction f2(1, 4);
    cout << " 1/2 +1/4 = " << (f1 + f2).getNumerator() << "/" << (f1 + f2).getDenominator() << endl;
    return 0;
}
