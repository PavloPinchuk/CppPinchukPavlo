#include<iostream>
using namespace std;

int main()
{
	int n, y = 1;
	cout << "Enter n = ";
	cin >> n;
	int i;
	if (n % 2 == 0)
	{
		i = 2;
	}
	else
		i = 1;
	for (; i <= n; i+=2)
	{
		y *= i;
	}
	cout << "y = " << y << endl;
	system("pause");
}