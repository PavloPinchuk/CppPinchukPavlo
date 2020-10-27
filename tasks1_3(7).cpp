#include<iostream>

using namespace std;

int main()
{
	unsigned m;
	cout << "Enter m = ";
	cin >> m;
	long long unsigned b = m;
	int n;
	cout << "Enter n = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		m &= ~(1 << i);
		b &= ~(1 << i);
	}
	for (int i = 16; i >= 16 - n; i--)
	{
		m &= ~(1 << i);
	}
	for (int i = 32; i >= 32 - n; i--)
	{
		b &= ~(1 << i);
	}
	cout << m << endl;
	cout << hex << b << endl;
	system("pause");
}
