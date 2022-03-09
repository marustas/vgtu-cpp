#ifndef _FRACTION_   
#define _FRACTION_
class Fraction
{
public:
  Fraction(int n = 0, int d = 1);
  int getNumerator() const;
  int getDenominator() const;

  Fraction operator+(const Fraction f2) const;
private:
  int Numerator,Denominator; 
};

#endif