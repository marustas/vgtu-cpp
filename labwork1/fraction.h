#ifndef _FRACTION_
#define _FRACTION_
class Fraction
{
public:
  Fraction();
  Fraction(int initNumerator, int initDenominator);
  int GetNumerator() const;
  int GetDenominator() const;

  Fraction Add(Fraction frac1) const;
  Fraction Subtract(Fraction frac1) const;
  Fraction Multiply(Fraction frac1) const;
  Fraction Divide(Fraction frac1) const;

private:
  int Numerator, Denominator;
};

#endif