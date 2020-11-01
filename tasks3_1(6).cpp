#include<iostream>

using namespace std;

double **ReserveArray(int r, int c) {	double **mas = new double *[r];	for (int i = 0; i < r; i++)		mas[i] = new double[c];	return mas;}
void FreeArray(double **mas, int r) {	for (int i = 0; i < r; i++)		delete[]mas[i];	delete[]mas;}void EnterArray(double **mas, int row, int col){	for (int i = 0; i < row; i++)		for (int j = 0; j < col; j++)		{			cout << "mas[" << i << "][" << j << "] = ";			cin >> mas[i][j];		}}void PrintArray(double **mas, int row, int col){	for (int i = 0; i < row; i++)	{		for (int j = 0; j < col; j++)			cout << "\t" << mas[i][j];		cout << endl;	}}

double GetDeterminant(double **a, int n, double epsilon)
{
	double det = 1;
	for (int i = 0; i < n; ++i)
	{
		int k = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (abs(a[j][i]) > abs(a[k][i]))
				k = j;
		}
		if (abs(a[k][i] < epsilon))
		{
			det = 0;
			break;
		}
		swap(a[i], a[k]);
		if (i != k)
			det = -det;
		det *= a[i][i];
		for (int j = i + 1; j <= n; ++j)
		{
			a[i][j] /= a[i][i];
		}
		for (int j = 0; j < n; ++j)
		{
			if (j != i && abs(a[i][j]) > epsilon)
				for (int k = i + 1; k < n; ++k)
					a[j][k] -= a[i][k] * a[j][i];
		}
	}
	return det;
}
int l_min(int a, int b)
{
	if (a >= b)return b; else return a;
}
int Rank(double **A, int i, int j, double epsilon)
{
	int r = 0;
	int q = 1;

	while (q <= l_min(i, j)) 
	{ 
		double **B = new double*[q];
		for (int w = 0; w<q; w++) B[w] = new double[q];

		for (int a = 0; a<(i - (q - 1)); a++)
		{
			for (int b = 0; b<(j - (q - 1)); b++)
			{
				for (int c = 0; c<q; c++)
				{
					for (int d = 0; d<q; d++)
					{
						B[c][d] = A[a + c][b + d];
					}
				}

				if (!(GetDeterminant(B, q, epsilon) == 0)) 
				{ 
					r = q; 
				}
			}
		}
		q++;
	}

	return r;
}
int main()
{
	size_t row, col;	cout << " Enter row = ";	cin >> row;	cout << " Enter col = ";	cin >> col;	double **mas = ReserveArray(row, col);	EnterArray(mas, row, col);	PrintArray(mas, row, col);	cout << GetDeterminant(mas, row, 0.0001) << endl;	cout << Rank(mas, row, col, 0.0001) << endl;	FreeArray(mas, row);	system("pause");
}
