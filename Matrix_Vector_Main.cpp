#include "Matrix.h"
#include "Vector.h"
#include"time.h"

int main()
{
	srand(time(0));
	Matrix a(3, 3);
	a.Print();
	cout << a.GetCol() << endl;
	cout << "-------------" << endl;
	a.Mnozhenia_Na_Chislo(3);
	a.Print();
	cout << "--------------" << endl;
	Matrix b(2, 2);
	b = a + a;
	b.Print();
	cout << "--------------" << endl;
	b = a*a;
	b.Print();
	cout << "--------------" << endl;
	b.SetElement(0, 0, 1);
	b.Print();
	cout << b.GetElement(0, 0) << endl;
	cout << "--------------" << endl;
	cout << b << endl;
	cout << "-------------------------------" << endl;
	a.Print();
	Vector c(3, 2);
	c[2] = 1;
	c.Print();
	c = a*c;
	c.Print();
	Matrix d(3, 3);
	d.Print();
	cout << "Norma: " << d.Abs() << " det: " << d.Det() << endl;
	system("pause");
}
