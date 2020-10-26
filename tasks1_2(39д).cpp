#include<iostream>
#include<math.h>
using namespace std;

double factorial(double f)
{
	if (f == 0)
		return 1;
	return(f * factorial(f - 1));
}


int main()
{
	double a0 = 1.0, ak, sum = 0;
	int n;
	cout << "Enter n = ";
	cin >> n;
	double k = 1.0;
	while(k < n)
	{
		ak = k*a0 + 1.0 / k;
		sum += (pow(2, k) / factorial(k))*ak;
		k += 1.0;
		a0 = ak;
	}
	cout << "Sum = " << sum << endl;
	system("pause");
}
