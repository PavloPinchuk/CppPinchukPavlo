#include<iostream>
#include<time.h>

using namespace std;

double **ReserveArray(int r) {	double **mas = new double *[r];	for (int i = 0; i < r; i++)		mas[i] = new double[r];	return mas;}
void FreeArray(double **mas, int r) {	for (int i = 0; i < r; i++)		delete[]mas[i];	delete[]mas;}void EnterArray(double **mas, int row){	for (int i = 0; i < row; i++)		for (int j = 0; j < row; j++)		{			mas[i][j] = rand() % 10;		}}void PrintArray(double **mas, int row){	for (int i = 0; i < row; i++)	{		for (int j = 0; j < row; j++)			cout << "\t" << mas[i][j];		cout << endl;	}}

double **MultMatr(double **mas1, double **mas2, int row)
{
	double **mas3 = ReserveArray(row);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			mas3[i][j] = 0;
			for (int k = 0; k < row; k++)
			{
				mas3[i][j] += mas1[i][k] * mas2[k][j];
			}
		}
	}
	return mas3;
}

double **MultMatrMas(int n, int row)
{
	double ***mas = new double**[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = ReserveArray(row);
		EnterArray(mas[i], row);
	}
	double **t = ReserveArray(row);
	t = mas[0];
	for (int i = 1; i < n; i++)
	{
		t = MultMatr(t, mas[i], row);
	}
	for (int i = 0; i < n; i++)
	{
		FreeArray(mas[i], row);
	}
	delete[]mas;
	return t;
}

int main()
{
	srand(time(0));
	size_t row, col;	cout << " Enter row = ";	cin >> row;	double **mas = ReserveArray(row);	mas = MultMatrMas(3, 3);	PrintArray(mas, row);	FreeArray(mas, row);	system("pause");
}
