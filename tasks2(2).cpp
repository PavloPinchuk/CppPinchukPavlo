#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	const size_t size = 4;
	int arr[size] = { 5,112,4,3 };
	for (int i = size-1; i >= 0; i--)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	system("pause");
}
