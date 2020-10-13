#include<iostream>
#include<cstdio>
using namespace std;

int Enter_arr(int n, int arr[])
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter arr[" << i << "] = ";
		cin >> arr[i];
		if (arr[i] == 0)
			break;
		cnt++;
	}
	return cnt;
}

int Dob_arr(int n, int arr[])
{
	int dob = 1;
	for (int i = 0; i < n; i++)
	{
		dob *= arr[i];
	}
	return dob;
}

double Seredne_arr(int n, int arr[])
{
	double s = 0.0;
	for (int i = 0; i < n; i++)
	{
		s += 1.0/arr[i];
	}
	return n / s;
}

int main()
{
	const size_t size = 20;
	int arr[size];
	int cnt, dob;
	double s;
	cnt = Enter_arr(size, arr);
	dob = Dob_arr(cnt, arr);
	s = Seredne_arr(cnt, arr);
	cout << "Count = " << cnt << endl << "Dob = " << dob << endl << "Seredne = " << s << endl;
	system("pause");
}
