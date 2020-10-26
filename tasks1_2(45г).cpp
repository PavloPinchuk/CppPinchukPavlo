#include<iostream>
#include<math.h>
using namespace std;

double factorial(double f)
{
	if (f == 0)
		return 1;
	return(f * factorial(f - 1));
}

int main()
{
	double y = 0, y1 = -1, e = 0.0000001;
	int k = 0;
	double x;
	cout << "Enter x = ";
	cin >> x;
	while (abs(y - y1) > e)
	{
		y1 = y;
		y += (pow(x, k) / factorial(k));
		k += 2;
	}
	cout << "y = " << y << endl;
	cout << "cosh = " << cosh(x) << endl;
	system("pause");
}
