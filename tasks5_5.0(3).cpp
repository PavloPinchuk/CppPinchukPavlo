#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>

typedef
struct Rational
{
	int numerator;
	unsigned int denominator;
}Rational;

Rational vvod()
{
	Rational res;
	printf("numerator = ");
	scanf("%d", &res.numerator);
	printf("denominator = ");
	scanf("%d", &res.denominator);
	return res;
}

void vyvod(const Rational p)
{
	printf("%d/%d\n", p.numerator, p.denominator);
}

Rational Suma(const Rational a, const Rational b)
{
	Rational c;
	c.numerator = a.numerator*b.denominator + b.numerator*a.denominator;
	c.denominator = a.denominator*b.denominator;
	return c;
}

Rational Riznitsa(const Rational a, const Rational b)
{
	Rational c;
	c.numerator = a.numerator*b.denominator - b.numerator*a.denominator;
	c.denominator = a.denominator*b.denominator;
	return c;
}

Rational Dobutok(const Rational a, const Rational b)
{
	Rational c;
	c.numerator = a.numerator * b.numerator;
	c.denominator = a.denominator*b.denominator;
	return c;
}

void Porivniania(const Rational a, const Rational b)
{
	if ((double)a.numerator / (double)a.denominator > (double)b.numerator / (double)b.denominator)
	{
		printf("a > b\n");
	}
	else
	{
		if ((double)a.numerator / (double)a.denominator < (double)b.numerator / (double)b.denominator)
		{
			printf("a < b\n");
		}
		else
		{
			printf("a == b\n");
		}
	}
}

long NSD(int a, int b) {

	if (a == b) {
		return a;
	}
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	return NSD(a, b - a);
}

Rational Skorochenya(const Rational a)
{
	Rational tmp;
	int nsd = NSD(a.numerator, a.denominator);
	tmp.numerator = a.numerator / nsd;
	tmp.denominator = a.denominator / nsd;
	return tmp;
}

int main()
{
	Rational a;
	a = vvod();
	vyvod(a);

	Rational b;
	b = vvod();
	vyvod(b);

	Rational c;
	printf("Suma: ");
	c = Suma(a, b);
	vyvod(c);

	printf("Riznitsa: ");
	c = Riznitsa(a, b);
	vyvod(c);

	printf("Dobutok: ");
	c = Dobutok(a, b);
	vyvod(c);

	Porivniania(a, b);

	c = Skorochenya(c);
	vyvod(c);
	getchar();
	getchar();
}
