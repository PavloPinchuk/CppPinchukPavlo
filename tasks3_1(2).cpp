#include<iostream>
#include<math.h>

using namespace std;

double *ReserveArray(int n) {	double *mas = new double[n];	return mas;}
void FreeArray(double *mas) {	delete[]mas;}int EnterArray(double *mas, int n){	int cnt = 0;	for (int i = 0; i < n; i++)	{		cout << "mas[" << i << "] = ";		cin >> mas[i];		cnt++;		if (mas[i] == 0)			break;	}	return cnt-1;}void PrintArray(double *mas, int n){	for (int i = 0; i < n; i++)		cout << "\t" << mas[i];	cout << endl;}
void CopyArray(double *mas1, double *mas2, int n)
{
	for (int i = 0; i < n; i++)		mas1[i] = mas2[i];
}
int SquaresArray(double *mas, int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)	{
		if (sqrt(mas[i]) == int(sqrt(mas[i])))
		{
			cnt++;
		}
	}
	return cnt;
}
int CubesArray(double *mas, int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)	{
		
		if (pow(mas[i], 1.0/3.0) == int(pow(mas[i], 1.0/3.0)))
		{
			cnt++;
		}
	}
	return cnt;
}
int main()
{
	int n = 10;
	double *mas = ReserveArray(n);
	int cnt = EnterArray(mas, n);	PrintArray(mas, cnt);	double *arr = ReserveArray(cnt);	CopyArray(arr, mas, cnt);	FreeArray(mas);	PrintArray(arr, cnt);	cout << "Squares: " << SquaresArray(arr, cnt) << endl;	cout << "Cubes: " << CubesArray(arr, cnt) << endl;
	FreeArray(arr);
	system("pause");
}
