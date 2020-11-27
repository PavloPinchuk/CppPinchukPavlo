#include "Point.h"

int main()
{
	Point a(2, 3);
	a.Show();
	Point b(a);
	b.SetX(10);
	Point c;
	cout << "Add" << endl;
	c = a.Add(b);
	c.Show();
	cout << "Diff" << endl;
	c = b.Diff(a);
	c.Show();
	system("pause");
}
