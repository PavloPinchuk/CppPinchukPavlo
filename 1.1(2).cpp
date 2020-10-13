#include <iostream>
#include <cmath>

using namespace std;

void Max(double a, double b, double c)
{
	if (abs(a) > abs(b))
	{
		if (abs(a) > abs(c))
		{
			cout << "abs(a) - max" << endl;
		}
		else
		{
			cout << "abs(c) - max" << endl;
		}
	}
	else
	{
		if (abs(b) > abs(c))
		{
			cout << "abs(b) - max" << endl;
		}
		else
		{
			cout << "abs(c) - max" << endl;
		}
	}
}

void Min(double a, double b, double c)
{
	if (abs(a) < abs(b))
	{
		if (abs(a) < abs(c))
		{
			cout << "abs(a) - min" << endl;
		}
		else
		{
			cout << "abs(c) - max" << endl;
		}
	}
	else
	{
		if (abs(b) < abs(c))
		{
			cout << "abs(b) - min" << endl;
		}
		else
		{
			cout << "abs(c) - min" << endl;
		}
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
	Max(a, b, c);
	Min(a, b, c);
	system("pause");
}
