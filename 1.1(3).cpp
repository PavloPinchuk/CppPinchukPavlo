#include <iostream>
#include <cmath>

using namespace std;

void Max_1(double x, double y, double z)
{
	double a = x + y + z;
	double b = x*y - x*z + y*z;
	double c = x*y*z;
	if (a > b)
	{
		if (a > c)
		{
			cout << "x + y + z - max" << endl;
		}
		else
		{
			cout << "x*y*z - max" << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "x*y - x*z + y*z - max" << endl;
		}
		else
		{
			cout << "x*y*z - max" << endl;
		}
	}
}

void Max_2(double x, double y, double z)
{
	double a = x*y;
	double b = x*z;
	double c = y*z;
	if (a > b)
	{
		if (a > c)
		{
			cout << "x*y - max" << endl;
		}
		else
		{
			cout << "y*z - max" << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "x*z - max" << endl;
		}
		else
		{
			cout << "y*z - max" << endl;
		}
	}
}

int main()
{
	double x, y, z;
	cout << "Enter x = ";
	cin >> x;
	cout << "Enter y = ";
	cin >> y;
	cout << "Enter z = ";
	cin >> z;
	cout << "Max_1: ";
	Max_1(x, y, z);
	cout << "Max_2: ";
	Max_2(x, y, z);
	system("pause");
}
