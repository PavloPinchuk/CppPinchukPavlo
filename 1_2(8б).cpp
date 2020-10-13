#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n = ";
	cin >> n;
	double y = sqrt(3 * n);
	if (n < 0)
	{
		cout << "Wrong param" << endl;
		system("pause");
		return 0;
	}
	while (n > 1)
	{
		y = sqrt(3 * (n-1) + y);
		n--;
	}
	cout << "y = " << y << endl;
	system("pause");
}
