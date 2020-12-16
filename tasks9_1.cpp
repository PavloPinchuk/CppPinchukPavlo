#include<iostream>
#include"RationalHeader.h"
int main()
{
	Rational a, b;
	cin >> a;
	cout << a << endl;
	cin >> b;
	cout << b << endl;
	cout << "----------------" << endl;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	a = b;
	cout << "----------------" << endl;
	cout << a;
	system("pause");
}
