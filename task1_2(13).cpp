#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	double sum = 0, n;
	int i = 0;
	do
	{
		cout << "a[" << i << "] = ";
		cin >> n;
		sum += n;
	} while (n != 0);
	cout << "—ума всiх чисел = " << sum << endl;
	system("pause");
}
