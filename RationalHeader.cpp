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
	if (denominator == 0)
	{
		cout << "Denominator can't be equal zero" << endl;
		denominator = 1;
	}
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
Rational &Rational::operator=(const Rational & obj)
{
	numerator = obj.numerator;
	denominator = obj.denominator;
	return *this;

}
Rational Rational::operator+(const Rational & obj)
{
	Rational a;
	a.numerator = (numerator*obj.denominator) + (denominator*obj.numerator);
	a.denominator = denominator*obj.denominator;
	a.Skorochenya();
	return a;
}
Rational Rational::operator-(const Rational & obj)
{
	Rational a;
	a.numerator = (numerator*obj.denominator) - (denominator*obj.numerator);
	a.denominator = denominator*obj.denominator;
	a.Skorochenya();
	return a;
}
Rational Rational::operator*(const Rational & obj)
{
	Rational a;
	a.numerator = numerator*obj.numerator;
	a.denominator = denominator*obj.denominator;
	a.Skorochenya();
	return a;
}
Rational Rational::operator/(const Rational & obj)
{
	Rational a;
	a.numerator = numerator*obj.denominator;
	if (obj.numerator < 0)
	{
		a.denominator = denominator * (obj.numerator * (-1));
	}
	else
	{
		a.denominator = denominator*obj.numerator;
	}
	a.Skorochenya();
	return a;
}
void Rational::Skorochenya()
{
	int nod;
	int i = numerator;
	if (numerator == 0 || denominator == 0)
	{
		return;
	}
	if (numerator < 0)
		i *= -1;
	for (; i > 0; i--) {
		if (numerator % i == 0 && denominator % i == 0) {
			nod = i;
			break;
		}
	}
	numerator /= nod;
	denominator /= nod;
}

ostream & operator<<(ostream & out, const Rational & obj)
{
	out << obj.numerator << " / " << obj.denominator;
	return out;
}

istream & operator >> (istream & in, Rational & obj)
{
	cout << "Enter num = ";
	in >> obj.numerator;
	cout << "Enter den = ";
	in >> obj.denominator;
	return in;
}
