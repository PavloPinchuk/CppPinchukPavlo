#pragma once
#include<iostream>

using namespace std;
class Rational
{
private:
	int numerator;
	unsigned int denominator;

public:
	Rational();
	Rational(int n, unsigned int d);
	void Skorochenya();
	void Input();
	void SetNumerator(int num);
	int GetNumerator();
	void SetDenominator(int den);
	unsigned int GetDenominator();
	void Show();
	Rational Add(Rational &x);
	Rational Mult(Rational &x);
	Rational &operator=(const Rational &obj);
	Rational operator+(const Rational &obj);
	Rational operator-(const Rational &obj);
	Rational operator*(const Rational &obj);
	Rational operator/(const Rational &obj);
	friend ostream &operator<<(ostream &out, const Rational &obj);
	friend istream &operator>>(istream &in, Rational &obj);
};