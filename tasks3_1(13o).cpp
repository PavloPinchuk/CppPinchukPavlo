#include<iostream>
#include<time.h>

using namespace std;

double **ReserveArray(int r, int col) {
void FreeArray(double **mas, int r) {
void PrintArray(double **mas, int row, int col)

double **DeleteEvenRows(double **mas, int row, int col)
{

	double **t = ReserveArray(row / 2, col);
	for (int i = 0, k = 0; i < row; i++)
	{
		if (i % 2 == 0)
			continue;
		for (int j = 0; j < col; j++)
		{
			t[k][j] = mas[i][j];
		}
		k++;
	}
	FreeArray(mas, row);
	return t;
}

int main()
{
	srand(time(0));
	size_t row, col;
}