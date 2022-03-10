#include "fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction()
{
    Numerator = 0;
    Denominator = 0;
}

Fraction::Fraction(int initNumerator, int initDenominator)
{
    Numerator = initNumerator;
    Denominator = initDenominator;
}

int Fraction::GetNumerator() const { return Numerator; }
int Fraction::GetDenominator() const { return Denominator; }

Fraction Fraction::Add(Fraction frac1) const
{
    Fraction ReturnObj;

    if (Denominator == frac1.Denominator)
    {
        ReturnObj.Numerator = Numerator + frac1.Numerator;
        ReturnObj.Denominator = Denominator;
    }
    else
    {
        ReturnObj.Numerator = Numerator * frac1.Denominator + frac1.Numerator * Denominator;
        ReturnObj.Denominator = Denominator * frac1.Denominator;
    }
    return ReturnObj;
}

Fraction Fraction::Subtract(Fraction frac1) const
{
    Fraction ReturnObj;

    if (Denominator == frac1.Denominator)
    {
        ReturnObj.Numerator = Numerator - frac1.Numerator;
        ReturnObj.Denominator = Denominator;
    }
    else
    {
        ReturnObj.Numerator = Numerator * frac1.Denominator - frac1.Numerator * Denominator;
        ReturnObj.Denominator = Denominator * frac1.Denominator;
    }
    return ReturnObj;
}

Fraction Fraction::Multiply(Fraction frac1) const
{
    Fraction ReturnObj;
    ReturnObj.Numerator = Numerator * frac1.Numerator;
    ReturnObj.Denominator = Denominator * frac1.Denominator;
    return ReturnObj;
}

Fraction Fraction::Divide(Fraction frac1) const
{
    Fraction ReturnObj;
    ReturnObj.Numerator = Numerator * frac1.Denominator;
    ReturnObj.Denominator = Denominator * frac1.Numerator;
    return ReturnObj;
}
int main()
{
    Fraction f1(1, 2);
    Fraction f2(1, 4);

    Fraction f3 = f1.Add(f2);
    cout << "Test of the Add operation:\n";
    cout << "1/2 + 1/4 = " << f3.GetNumerator() << "/" << f3.GetDenominator() << endl;

    Fraction f4 = f1.Subtract(f2);
    cout << "Test of the Subtract operation:\n";
    cout << "1/2 - 1/4 = " << f4.GetNumerator() << "/" << f4.GetDenominator() << endl;

    Fraction f5 = f1.Multiply(f1);
    cout << "Test of the Multiply operation:\n";
    cout << "1/2 * 1/2 = " << f5.GetNumerator() << "/" << f5.GetDenominator() << endl;

    Fraction f6 = f1.Divide(f1);
    cout << "Test of the Divide operation:\n";
    cout << "1/2 / 1/2 = " << f6.GetNumerator() << "/" << f6.GetDenominator() << endl;
    return 0;
}
