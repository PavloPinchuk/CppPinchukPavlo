#include<iostream>

using namespace std;

void Func(double a, double b, double c)
{
	if (a == 0)
	{
		if (b != 0)
		{
			cout << "x = " << (-1 * c) / b << endl;
		}
		else
		{
			cout << "Ne isnue" << endl;
		}
	}
	if (b == 0)
	{
		if (c < 0)
		{
			cout << "x1 = " << sqrt(-1 * c) << endl;
			cout << "x2 = " << -1 * sqrt(-1 * c) << endl;
		}
		else
		{
			cout << "Ne isnue" << endl;
		}
	}
	double d = b*b - 4 * a*c;
	if (d < 0)
	{
		cout << "Ne isnue" << endl;
	}
	if (d == 0)
	{
		cout << "x = " << -1 * b / (2 * a) << endl;
	}
	if (d > 0)
	{
		cout << "x1 = " << (-1 * b + sqrt(d)) / (2 * a) << endl;
		cout << "x2 = " << (-1 * b - sqrt(d)) / (2 * a) << endl;
	}
}

int main()
{
	double a, b, c;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "Enter c = ";
	cin >> c;
	Func(a, b, c);
	system("pause");
}
