#include <iostream>
#include<cmath>

using namespace std;

double eLu(double a, double x)
{
	if (x >= 0)
	{
		return 0;
	}
	else
	{
		return a*(pow(2.7182, x) - 1);
	}
}

double eLu_prime(double a, double x)
{
	if (x >= 0)
	{
		return 0;
	}
	else
	{
		return a*pow(2.7182, x);
	}
}

int main()
{
	double a, x;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter x = ";
	cin >> x;
	cout << "eLu(a,x) = " << eLu(a, x) << endl;
	cout << "Derivative eLu(a,x) = " << eLu_prime(a, x) << endl;
	system("pause");
}
