#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "Enter c = ";
	cin >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "Wrong param" << endl;
		system("pause");
		return 0;
	}
	double alpha, beta, gamma;
	alpha = acos((b * b + c * c - a * a) / (2 * b * c));
	cout << "Alpha(rad) = " << alpha << ", degrees: " << (alpha * 180.0/3.14159265) << endl;
	beta = acos((a * a + c * c - b * b) / (2 * a * c));
	cout << "Beta(rad) = " << beta << ", degrees: " << (beta * 180.0 / 3.14159265) << endl;
	gamma = acos((a * a + b * b - c * c) / (2 * a * b));
	cout << "Gamma(rad) = " << gamma << ", degrees: " << (gamma * 180.0 / 3.14159265) << endl;
	system("pause");
}
