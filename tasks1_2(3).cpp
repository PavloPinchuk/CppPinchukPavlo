#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter n = ";
	cin >> n;
	cout << n << "! = 1";
	for (int i = 2; i <= n; i++)
	{
		cout << "*" << i;
	}
	cout << endl;
	system("pause");
}