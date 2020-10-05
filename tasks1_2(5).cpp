#include<iostream>
using namespace std;

int main()
{
	//Зі зростанням
	int n, y = 1;
	cout << "Enter n = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		y *= i;
	}
	cout << "y = " << y << endl;
	//Зі спаданням
	y = 1;

	for (int i = n; i >= 1; i--)
	{
		y *= i;
	}
	cout << "y = " << y << endl;
	system("pause");
}