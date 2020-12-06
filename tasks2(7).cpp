#include<iostream>
#include<cstdio>
using namespace std;

void Enter_arr(int n, double arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

void Print_arr(int n, const double arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << "  ";
	}
	cout << endl;
}

void Sum_arr(int n, double arr1[], double arr2[], double arr3[])
{
	for (int i = 0; i < n; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}
}

double Dob_arr(int n, double arr1[], double arr2[])
{
	double dob = 0;
	for (int i = 0; i < n; i++)
	{
		dob += arr1[i] * arr2[i];
	}
	return dob;
}

int main()
{
	const size_t size = 4;
	double arr1[size];
	Enter_arr(size, arr1);
	Print_arr(size, arr1);
	double arr2[size];
	Enter_arr(size, arr2);
	Print_arr(size, arr2);
	double arr3[size];
	Sum_arr(size, arr1, arr2, arr3);
	Print_arr(size, arr3);
	cout << "Dob: " << Dob_arr(size, arr1, arr2) << endl;
	system("pause");
}
