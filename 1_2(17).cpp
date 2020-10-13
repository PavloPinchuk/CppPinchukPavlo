#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	double n, max, min;
	bool p = 0;//Щоб перевірити чи є від'ємні члени послідовності
	int i = 0;
	cout << "a[" << i << "] = ";
	cin >> n;
	max = n;
	min = n;
	do
	{
		if (i == 0)
		{
			i++;
			continue;
		}
		cout << "a[" << i << "] = ";
		cin >> n;
		if (n == 0)
		{
			break;
		}
		if (n < 0)
		{
			p = 1;
			if (max < n)
			{
				max = n;
			}
		}
		else
		{
			if (min > n)
			{
				min = n;
			}
		}
		i++;
	} while (n != 0);
	if (p == 1)
	{
		cout << "Max of negative: " << max << endl;
	}
	else
	{
		cout << "Min of positive: " << min << endl;
	}
	system("pause");
}
