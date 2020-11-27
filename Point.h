#pragma once
#include<iostream>

using namespace std;
class Point
{
	double x;
	double y;
public:
	Point();
	Point(double x, double y);
	Point(const Point &p);
	void SetX(double x);
	double GetX()const;
	void SetY(double y);
	double GetY()const;
	void Input();
	void Show();
	Point Add(const Point &p);
	Point Diff(const Point &p);
};