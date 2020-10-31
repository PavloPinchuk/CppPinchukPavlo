#include<iostream>

using namespace std;

int **ReserveArray(int r, int c) {	int **mas = new int *[r];	for (int i = 0; i < r; i++)		mas[i] = new int[c];	return mas;}
void FreeArray(int **mas, int r) {	for (int i = 0; i < r; i++)		delete[]mas[i];	delete[]mas;}void EnterArray(int **mas, int row, int col){	for (int i = 0; i < row; i++)		for (int j = 0; j < col; j++)		{			cout << "mas[" << i << "][" << j << "] = ";			cin >> mas[i][j];		}}void PrintArray(int **mas, int row, int col){	for (int i = 0; i < row; i++)	{		for (int j = 0; j < col; j++)			cout << "\t" << mas[i][j];		cout << endl;	}}

void ZsuvOfColums(int **mas, int row, int col, int n){	int **arr = ReserveArray(row, col);	for (int i = 0; i < row; i++)	{		for (int j = 0; j < col; j++)		{			arr[i][j] = mas[i][(j + (col - n)) % col];		}	}	for (int i = 0; i < row; i++)	{		for (int j = 0; j < col; j++)		{			mas[i][j] = arr[i][j];		}	}	FreeArray(arr, row);}

int main()
{
	size_t row, col;	cout << " Enter row = ";	cin >> row;	cout << " Enter col = ";	cin >> col;	int **mas = ReserveArray(row, col);	EnterArray(mas, row, col);	PrintArray(mas, row, col);	int n;	cout << "Enter n: ";	cin >> n;	ZsuvOfColums(mas, row, col, n);	cout << "-------------------------" << endl;	PrintArray(mas, row, col);	FreeArray(mas, row);	system("pause");
}
