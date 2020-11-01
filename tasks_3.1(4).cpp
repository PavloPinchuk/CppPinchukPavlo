#include<iostream>

using namespace std;

double *ReserveArray(int n) {	double *mas = new double[n];	return mas;}
void FreeArray(double *mas) {	delete[]mas;}void EnterArray(double *mas, int n){	for (int i = 0; i < n; i++)	{		cout << "mas[" << i << "] = ";		cin >> mas[i];	}}void PrintArray(double *mas, int n){	for (int i = 0; i < n; i++)		cout << "\t" << mas[i];	cout << endl;}
double *VectDob(double *mas1, double *mas2)
{
	double *mas3 = ReserveArray(3);
	mas3[0] = mas1[1] * mas2[2] - mas1[2] * mas2[1];
	mas3[1] = mas1[2] * mas2[0] - mas1[0] * mas2[2];
	mas3[2] = mas1[0] * mas2[1] - mas1[1] * mas2[0];
	return mas3;
}
int main()
{
	int n;
	cout << "Enter n = ";
	cin >> n;
	double *mas1 = ReserveArray(n);
	double *mas2 = ReserveArray(n);
	EnterArray(mas1, n);	PrintArray(mas1, n);	EnterArray(mas2, n);	PrintArray(mas2, n);	if (n == 3)	{		double *mas3 = VectDob(mas1, mas2);		cout << "VectDob: " << endl;		PrintArray(mas3, n);		FreeArray(mas3);	}	else	{		cout << "Wrong dimention of vector. N must be equal 3." << endl;	}	FreeArray(mas1);
	FreeArray(mas2);
	system("pause");
}
