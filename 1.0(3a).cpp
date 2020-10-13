#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long int a, b, c;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "Enter c = ";
	cin >> c;
	if (abs(a) >= pow(2,10) || abs(b) >= pow(2,10) || abs(c) >= pow(2,10))
	{
		cout << "Wrong param" << endl;
		system("pause");
		return 0;
	}
	cout << "Dobutok: " << a*b*c << endl;
	system("pause");
}
