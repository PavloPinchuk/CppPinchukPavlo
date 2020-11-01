#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	char a[13] = "12-22+12=";
	double sum = 0;
	int k = 0;
	char *b = new char[10];
	
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] <= '0' || a[i] >= '9')
		{
			if (a[i] == '+')
			{
				if (b != nullptr)
				{
					sum += atoi(b);
					b = new char[10];
					k = 0;
				}
				else
				{
					cout << "Wrong param" << endl;
				}
			}
			if (a[i] == '-')
			{
				if (b != nullptr)
				{
					sum += atoi(b);
					b = new char[10];
					k = 0;
					b[k] = '-';
					k++;
				}
				else
				{
					cout << "Wrong param" << endl;
				}
			}
			if (a[i] == '=')
			{
				if (b != nullptr)
				{
					sum += atoi(b);
					delete[]b;
				}
				else
				{
					cout << "Wrong param" << endl;
				}
			}

		}
		else
		{
			b[k] = a[i];
			k++;
		}
	}
	cout << "Sum = " << sum << endl;
	system("pause");
}
