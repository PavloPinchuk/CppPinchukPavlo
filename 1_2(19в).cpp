#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	double x, y = 1, f = 1;
	int k;
	cout << "Enter x = ";
	cin >> x;
	cout << "Enter k = ";
	cin >> k;
	if (k < 0)
	{
		cout << "Wrong param" << endl;
		system("pause");
		return 0;
	}
	while (k > 0)
	{
		y *= x;
		f *= k;
		k--;
	}
	cout << y << " " << f << endl;
	cout << "x(k) = " << y / f << endl;
	system("pause");
}
