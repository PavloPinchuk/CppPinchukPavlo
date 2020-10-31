#include<iostream>

using namespace std;

double **ReserveArray(int r) {	double **mas = new double *[r];	for (int i = 0; i < r; i++)		mas[i] = new double[r];	return mas;}
void FreeArray(double **mas, int r) {	for (int i = 0; i < r; i++)		delete[]mas[i];	delete[]mas;}void EnterArray(double **mas, int row){	for (int i = 0; i < row; i++)		for (int j = 0; j < row; j++)		{			cout << "mas[" << i << "][" << j << "] = ";			cin >> mas[i][j];		}}void PrintArray(double **mas, int row){	for (int i = 0; i < row; i++)	{		for (int j = 0; j < row; j++)			cout << "\t" << mas[i][j];		cout << endl;	}}

double FindMaxByAbs(double **mas, int row)
{
	double max = abs(mas[0][0]);
	for (int i = 0; i < row; i++)	{		for (int j = 0; j < row; j++)		{			if (abs(mas[i][j]) > abs(max))			{				max = mas[i][j];			}		}	}
	return max;
}

int main()
{
	size_t row;	cout << " Enter row = ";	cin >> row;	double **mas = ReserveArray(row);	EnterArray(mas, row);	PrintArray(mas, row);	cout << "Max by abs: " << FindMaxByAbs(mas, row) << endl;	FreeArray(mas, row);	system("pause");
}
