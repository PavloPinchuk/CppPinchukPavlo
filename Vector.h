#pragma once
#include <iostream>
using namespace std;
class Vector
{
	int capacity = 0;
	int size = 0;
	double *arr = nullptr;
public:
	Vector(int n, int val);
	Vector(const Vector& obj);
	Vector();
	~Vector();
	int Size() const;
	int Capacity() const;
	void setSize(int s);
	void pushBack(int element);
	void popBack();
	void Print() const;
	Vector& operator=(const Vector& obj);
	bool operator==(Vector& obj);
	bool operator>(Vector& obj);
	bool operator<(Vector& obj);
	bool operator>=(Vector& obj);
	bool operator<=(Vector& obj);
	bool operator!=(Vector& obj);
	bool empty();
	void setMark(int position, double value);
	double getMark(int position) const;
	double& operator[](int position);
	void Clear();
	void reSize(int s);
};
