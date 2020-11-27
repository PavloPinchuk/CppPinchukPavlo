#pragma once
#include<iostream>

using namespace std;
class Rational
{
private:
	int numerator;
	unsigned int denominator;

	void Skorochenya();

public:
	Rational();
	Rational(int n, unsigned int d);
	void Input();
	void SetNumerator(int num);
	int GetNumerator();
	void SetDenominator(int den);
	unsigned int GetDenominator();
	void Show();
	Rational Add(Rational &x);
	Rational Mult(Rational &x);
};