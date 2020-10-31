#include<iostream>
#include<math.h>

using namespace std;

int IsDegree2(int n)
{
	int s = 1;
	int t = 1;
	while (t < n)
	{
		s++;
		t *= 2;
	}
	return t == n;
}

int IsDegree3(int n)
{
	int s = 1;
	int t = 1;
	while (t < n)
	{
		s++;
		t *= 3;
	}
	return t == n;
}

int main()
{
	int *mas = new int[100];
	int cnt = 0;
	for (int i = 0; i < 100; i++)
	{
		cout << "Enter mas[" << i << "] = ";
		cin >> mas[i];
		if (mas[i] == 0)
		{
			break;
		}
		cnt++;
	}
	int *arr = new int[cnt];
	for (int i = 0; i < cnt; i++)
	{
		arr[i] = mas[i];
	}
	int cnt2 = 0, cnt3 = 0;
	for (int i = 0; i < cnt; i++)
	{
		if (IsDegree2(mas[i]))
		{
			cnt2++;
		}
		if (IsDegree3(mas[i]))
		{
			cnt3++;
		}
	}
	cout << "Degree 2: " << cnt2 << endl;
	cout << "Degree 3: " << cnt3 << endl;
	system("pause");
}
