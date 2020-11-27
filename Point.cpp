#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point & p)
{
	this->x = p.GetX();
	this->y = p.GetY();
}

void Point::SetX(double x)
{
	this->x = x;
}

double Point::GetX() const
{
	return this->x;
}

void Point::SetY(double y)
{
	this->y = y;
}

double Point::GetY() const
{
	return this->y;
}

void Point::Input()
{
	cout << "Enter Point (x,y) = ";
	cin >> this->x >> this->y;
}

void Point::Show()
{
	cout << "Point (" << this->x << ", " << this->y << ")" << endl;
}

Point Point::Add(const Point & p)
{
	Point tmp;
	tmp.SetX(this->x + p.GetX());
	tmp.SetY(this->y + p.GetY());
	return tmp;
}

Point Point::Diff(const Point & p)
{
	Point tmp;
	tmp.SetX(this->x - p.GetX());
	tmp.SetY(this->y - p.GetY());
	return tmp;
}
