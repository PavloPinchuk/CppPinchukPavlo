#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	double a, sum = 0;
	for (int i = 0; i > -2; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a;
		sum += a;
		if (a == 0)
			break;
	}
	cout << "Sum: " << sum << endl;
	system("pause");
}
