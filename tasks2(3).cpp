#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	const size_t size = 10;
	double arr[size];
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
		if (arr[i] > 2.7182)
		{
			sum += arr[i];
		}
	}
	cout << "Sum: " << sum << endl;
	system("pause");
}
