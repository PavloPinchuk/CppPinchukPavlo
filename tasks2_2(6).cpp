#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <stdio.h>
#include<math.h>

using namespace std;

int **ReserveArray(int r, int c) {
	int **mas = new int *[r];
	for (int i = 0; i < r; i++)
		mas[i] = new int[c];
	return mas;
}

void FreeArray(int **mas, int r) {
	for (int i = 0; i < r; i++)
		delete[]mas[i];
	delete[]mas;
}

void EnterArray(int **mas, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		printf("row %d:  ", i);
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &mas[i][j]);
		}
	}
}

void PrintArray(int **mas, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << "\t" << mas[i][j];
		cout << endl;
	}
}

int Calc(int **mas, int row, int col, int k)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i - j == k)
			{
				sum += mas[i][j];
			}
		}
	}
	return sum;
}

int main()
{
	size_t row, col;
	cout << " Enter row = ";
	cin >> row;
	cout << " Enter col = ";
	cin >> col;
	int **mas = ReserveArray(row, col);
	EnterArray(mas, row, col);
	int k;
	cout << "Enter k = ";
	cin >> k;
	PrintArray(mas, row, col);
	cout << "Sum: " << Calc(mas, row, col, k) << endl;
	FreeArray(mas, row);
	system("pause");
}
