#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int mas[10];
	double y;
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}

	for (int i = 0; i < n; i++)
	{
		y = sqrt(mas[i]);
		cout << fixed;
		cout.precision(2);
		cout << y << endl;
	}
	system("pause");
}