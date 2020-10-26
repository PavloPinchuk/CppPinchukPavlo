#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
	const size_t row = 3, col = 3;
	int a[row][col] = { {1,2,3},{4,5,6},{7,8,9} };
	int b[row][col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			b[i][j] = a[j][i];
		}
	}
	int m, n;
	cout << "Enter m = ";
	cin >> m;
	cout << "Enter n = ";
	cin >> n;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (b[i][j] == m)
			{
				b[i][j] = n;
			}
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}
