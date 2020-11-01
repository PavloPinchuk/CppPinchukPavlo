#include<iostream>

using namespace std;

double *ReserveArray(int n) {	double *mas = new double [n];	return mas;}
void FreeArray(double *mas) {	delete[]mas;}void EnterArray(double *mas, int n){	for (int i = 0; i < n; i++)	{		cout << "mas[" << i << "] = ";		cin >> mas[i];	}}void PrintArray(double *mas, int n){	for (int i = 0; i < n; i++)		cout << "\t" << mas[i];	cout << endl;}
void PowArray(double *mas, int n)
{
	for (int i = 0; i < n; i++)		cout << "\t" << mas[i]*mas[i];	cout << endl;
}
int main()
{
	int n;
	cout << "Enter n = ";
	cin >> n;
	double *mas = ReserveArray(n);
	EnterArray(mas, n);	PrintArray(mas, n);	PowArray(mas, n);	FreeArray(mas);
	system("pause");
}
