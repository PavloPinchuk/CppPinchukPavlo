#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	int n, r = 0;
	cout << "Enter n = ";
	cin >> n;
	while (pow(2, r) <= n)
	{
		r++;
	}
	cout << "Найменше таке число = " << pow(2, r) << endl;
	system("pause");
}