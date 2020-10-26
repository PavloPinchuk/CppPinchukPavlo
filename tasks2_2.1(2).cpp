#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
	const size_t row = 3, col = 3;
	double a[row][col] = { { 1.0,2.0,3.0 },{ 4.0,5.0,6.0 },{ 7.0,8.0,9.0 } };
	int b[row][col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			b[i][j] = a[j][i];
		}
	}
	int i, j;
	cout << "Enter i = ";
	cin >> i;
	cout << "Enter j = ";
	cin >> j;
	if (i >= 0 && i < 3 && j >= 0 && j < 3)
	{
		double a;
		cout << "Enter a = ";
		cin >> a;
		b[i][j] = a;
	}
	else
	{
		cout << "Indexes are incorrect." << endl;
	}
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}
