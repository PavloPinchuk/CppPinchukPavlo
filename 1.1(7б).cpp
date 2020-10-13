#include<iostream>

using namespace std;

int main()
{
	double a, b, c, x1, x2, x3, x4, t1, t2, d, D; bool log = false;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a == 0) {
		if (b != 0) {
			if (c == 0)
			{ 
				cout << "X=0";
			}
			else {
				if (c / b<0) {
					x1 = sqrt(-(c / b));
					x2 = -sqrt(-(c / b));
					cout << "X1=" << x1 << "; X2=" << x2;
				}
				else 
				{ 
					cout << "There are no solutions";
				}
			}
		}
		else {
			if (c != 0)
			{ 
				cout << "There are no solutions";
			}
			else
			{ 
				cout << "X is any";
			}

		}
	}
	else {
		D = (b * b - 4 * a * c);
		if (D<0) 
		{ 
			cout << "There are no solutions";
		}
		else {
			d = sqrt(D);
			t1 = (-b + d) / 2.0 / a;
			t2 = (-b - d) / 2.0 / a;
			if (t1>0) 
			{
				x1 = sqrt(t1);
				x2 = -sqrt(t1);
				cout << "X1=" << x1 << "; X2=" << x2 << "; ";
				log = true;
			}
			if (t2>0) {
				x3 = sqrt(t2);
				x4 = -sqrt(t2);
				if (log == true) 
				{ 
					cout << "X3=" << x3 << "; X4=" << x4 << ";";
				}
				if (log == false) 
				{ 
					cout << "X1=" << x3 << "; X2=" << x4 << ";";
				}
			}
		}
	}
	system("pause");
}
