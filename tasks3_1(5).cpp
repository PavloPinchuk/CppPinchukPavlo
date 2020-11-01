#include<iostream>

using namespace std;

double **ReserveArray(int r) {	double **mas = new double *[r];	for (int i = 0; i < r; i++)		mas[i] = new double[r];	return mas;}
void FreeArray(double **mas, int r) {	for (int i = 0; i < r; i++)		delete[]mas[i];	delete[]mas;}void EnterArray(double **mas, int row){	for (int i = 0; i < row; i++)		for (int j = 0; j < row; j++)		{			cout << "mas[" << i << "][" << j << "] = ";			cin >> mas[i][j];		}}void PrintArray(double **mas, int row){	for (int i = 0; i < row; i++)	{		for (int j = 0; j < row; j++)			cout << "\t" << mas[i][j];		cout << endl;	}}

double **MultMatr(double **mas1, double **mas2, int row)
{
	double **mas3 = ReserveArray(row);
	for (int i = 0; i < row; i++)	{		for (int j = 0; j < row; j++)		{			mas3[i][j] = 0;			for (int k = 0; k < row; k++)			{				mas3[i][j] += mas1[i][k] * mas2[k][j];			}		}	}
	return mas3;
}

int main()
{
	size_t row;	cout << " Enter row = ";	cin >> row;	double **mas1 = ReserveArray(row);	EnterArray(mas1, row);	PrintArray(mas1, row);	cout << "----------------------------" << endl;	double **mas2 = ReserveArray(row);	EnterArray(mas2, row);	PrintArray(mas2, row);	cout << "----------------------------" << endl;	double **mas3 = MultMatr(mas1, mas2, row);	PrintArray(mas3, row);	FreeArray(mas1, row);	FreeArray(mas2, row);	FreeArray(mas3, row);	system("pause");
}
