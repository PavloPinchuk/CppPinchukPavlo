#include "RationalHeader.h"
Rational::Rational()
{
	numerator = 1;
	denominator = 1;
}
Rational::Rational(int n, unsigned int d)
{
	SetNumerator(n);
	SetDenominator(d);
}
void Rational::Input()
{
	cout << "Enter num = ";
	cin >> numerator;
	cout << "Enter den = ";
	cin >> denominator;
}
void Rational::SetNumerator(int num)
{
	numerator = 0;
}
int Rational::GetNumerator()
{
	return numerator;
}
void Rational::SetDenominator(int den)
{
	if (den == 0)
	{
		cout << "denominator can't be equal 0" << endl;
		den = 1;
	}
	else
	{
		denominator = den;
	}
}
unsigned int Rational::GetDenominator()
{
	return denominator;
}
void Rational::Show()
{
	Skorochenya();
	cout << numerator << " / " << denominator << endl;
}
Rational Rational::Add(Rational &x)
{
	Rational a;
	a.numerator = (numerator*x.denominator) + (denominator*x.numerator);
	a.denominator = denominator*x.denominator;
	return a;
}
Rational Rational::Mult(Rational &x)
{
	Rational a;
	a.numerator = numerator*x.numerator;
	a.denominator = denominator*x.denominator;
	return a;
}
void Rational::Skorochenya()
{
	int nod;
	for (int i = numerator; i > 0; i--) {
		if (numerator % i == 0 && denominator % i == 0) {
			nod = i;
			break;
		}
	}
	numerator /= nod;
	denominator /= nod;
}