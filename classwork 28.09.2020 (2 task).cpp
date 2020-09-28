#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cout << "Enter n =";
	cin >> n;
	double x;
	cout << "Enter x =";
	cin >> x;
	double y = 0;
	for (int i = n; i > 0; i--)
	{
		y += pow(x, i);
	}
	cout << "y = " << y << endl;
	system("pause");
}