#include<iostream>
#include<math.h>

using namespace std;

int Fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int n;
	cout << "Enter n = ";
	cin >> n;
	cout << "Fib(" << n << ") = " << Fib(n) << endl;
	system("pause");
}