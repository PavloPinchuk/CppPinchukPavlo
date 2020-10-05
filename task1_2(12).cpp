#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	int cnt = 0;
	double a = 1.0;
	while (1 != 1 + a)
	{
		a = a / 2.0;
		cnt++;
	}
	cout << "Кiлькiсть iтерацiй = " << cnt << endl;
	system("pause");
}