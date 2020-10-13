#include<iostream>

using namespace std;

bool PunktA(int n)
{
	return n % 2 == 0;
}

bool PunktB(int n)
{
	return n % 10 == 0;
}

bool PunktC(int n, int m)
{
	return n % m == 0;
}

int main()
{
	int n;
	cout << "Enter n = ";
	cin >> n;
	cout << endl;
	cout << "Parne n - " << PunktA(n) << endl;
	cout << "Ostanne nul - " << PunktB(n) << endl;
	cout << "Kratne 3 - " << PunktC(n, 3) << endl;
	system("pause");
}
