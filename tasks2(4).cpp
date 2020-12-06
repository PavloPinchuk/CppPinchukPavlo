#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	const size_t size = 5;
	int arr[size];
	int max;
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
		if (i == 0)
			max = arr[0];
		if (max < arr[i])
			max = arr[i];

	}
	cout << "Max: " << max << endl;
	system("pause");
}
