#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	if (fabs(a - b) < 0.000000000001)
		cout << "A == B" << endl;
	else
	{
		if (a > b)
			cout << "A > B" << endl;
		else
			cout << "B > A" << endl;
	}
	system("pause");
}
