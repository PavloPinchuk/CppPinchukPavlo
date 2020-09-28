#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double x;
	int n;
	cout << "Enter x = ";
	cin >> x;
	cout << "Enter n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		x = sin(x);
	}
	cout << "x = " << x << endl;
	system("pause");
}