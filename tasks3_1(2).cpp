#include<iostream>
#include<math.h>

using namespace std;

double *ReserveArray(int n) {
void FreeArray(double *mas) {
void CopyArray(double *mas1, double *mas2, int n)
{
	for (int i = 0; i < n; i++)
}
int SquaresArray(double *mas, int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
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
	for (int i = 0; i < n; i++)
		
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
	int cnt = EnterArray(mas, n);
	FreeArray(arr);
	system("pause");
}