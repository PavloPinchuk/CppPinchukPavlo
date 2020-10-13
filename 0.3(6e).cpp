#include <iostream>
#include <cmath>

using namespace std;

double SoftPlus(double x)
{
	return log(1 + pow(2.718281, x));
}

int main()
{
	double x, y;
	cout << "Enter x = ";
	cin >> x;
	y = SoftPlus(x);
	cout << "y = " << y << endl;
	system("pause");
}
