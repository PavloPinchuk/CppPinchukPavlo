#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cout << "Enter n = ";
	cin >> n;
	if (n < 100 || n > 999)
	{
		cout << "Wrong param" << endl;
		system("pause");
		return 0;
	}
	int h = n / 100, d = n / 10 % 10, u = n % 10;
	cout << "Hundreds: " << h << endl;
	cout << "Dozens: " << d << endl;
	cout << "Units: " << u << endl;
	cout << "Sum: " << h + d + u << endl;
	cout << "Reverse: " << u << d << h << endl;
	system("pause");
}
