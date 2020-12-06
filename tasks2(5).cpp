#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	const size_t size = 5;
	int arr[size];
	int sum_odd = 0; //Непарні
	int sum_even = 0; //Парні
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
		if (arr[i] % 2 == 0)
			sum_even += arr[i];
		else
			sum_odd += arr[i];

	}
	cout << "Sum_odd: " << sum_odd << endl;
	cout << "Sum_even: " << sum_even << endl;
	system("pause");
}
