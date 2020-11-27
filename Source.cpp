#include "RationalHeader.h"
using namespace std;

//class Rational
//{
//private:
//	int numerator;
//	unsigned int denominator;
//
//	void Skorochenya()
//	{
//		int nod;
//		for (int i = numerator; i > 0; i--) {
//			if (numerator % i == 0 && denominator % i == 0) {
//				nod = i;
//				break;
//			}
//		}
//		numerator /= nod;
//		denominator /= nod;
//	}
//
//public:
//	Rational()
//	{
//		numerator = 1;
//		denominator = 1;
//	}
//	Rational(int n, unsigned int d)
//	{
//		SetNumerator(n);
//		SetDenominator(d);
//	}
//
//	void Input()
//	{
//		cout << "Enter num = ";
//		cin >> numerator;
//		cout << "Enter den = ";
//		cin >> denominator;
//	}
//
//	void SetNumerator(int num)
//	{
//		numerator = 0;
//	}
//
//	int GetNumerator()
//	{
//		return numerator;
//	}
//
//	void SetDenominator(int den)
//	{
//		if (den == 0)
//		{
//			cout << "denominator can't be equal 0" << endl;
//			den = 1;
//		}
//		else
//		{
//			denominator = den;
//		}
//	}
//
//	unsigned int GetDenominator()
//	{
//		return denominator;
//	}
//
//	void Show()
//	{
//		Skorochenya();
//		cout << numerator << " / " << denominator << endl;
//	}
//
//	Rational Add(Rational &x)
//	{
//		Rational a;
//		a.numerator = (numerator*x.denominator) + (denominator*x.numerator);
//		a.denominator = denominator*x.denominator;
//		return a;
//	}
//
//	Rational Mult(Rational &x)
//	{
//		Rational a;
//		a.numerator = numerator*x.numerator;
//		a.denominator = denominator*x.denominator;
//		return a;
//	}
//};

int main()
{
	Rational a;
	a.Input();
	a.Show();
	Rational b;
	b.Input();
	b.Show();
	Rational c = a.Add(b);
	c.Show();
	Rational d = a.Mult(b);
	d.Show();

	system("pause");
}
