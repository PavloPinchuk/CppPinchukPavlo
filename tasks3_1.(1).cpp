#include<iostream>

using namespace std;

double *ReserveArray(int n) {
void FreeArray(double *mas) {
void PowArray(double *mas, int n)
{
	for (int i = 0; i < n; i++)
}
int main()
{
	int n;
	cout << "Enter n = ";
	cin >> n;
	double *mas = ReserveArray(n);
	EnterArray(mas, n);
	system("pause");
}