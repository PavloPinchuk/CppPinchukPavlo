#include "Vector.h"

Vector::Vector() = default;

Vector::Vector(int n, int val)
{
	capacity = n;
	size = n;
	arr = new double[capacity] {};
	for (int i = 0; i < size; i++) {
		arr[i] = val;
	}
}
Vector::Vector(const Vector &obj)
{
	capacity = obj.capacity;
	size = obj.size;
	arr = new double[size] {};
	for (int i = 0; i < size; i++) {
		arr[i] = obj.arr[i];
	}
}

Vector::~Vector()
{
	if (size != 0)
		delete[]arr;
}
void Vector::Print() const
{
	cout << "Elements: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
bool Vector::empty()
{
	if (size == 0)
		return true;
	else
		return false;
}
int Vector::Size() const
{
	return size;
}
void Vector::setSize(int s)
{
	Vector::capacity = s;
	Vector::size = s;
}
int Vector::Capacity() const
{
	return capacity;
}
void Vector::pushBack(int element)
{
	if (size == 0)
		arr = new double[1];
	else
	{
		double *tmp = new double[size + 1];
		for (int i = 0; i < size; i++)
		{
			tmp[i] = arr[i];
		}
		delete[]arr;
		arr = tmp;
	}
	arr[size++] = element;
}
Vector& Vector::operator=(const Vector &obj)
{
	if (this == &obj)
		return *this;
	capacity = obj.capacity;
	size = obj.size;
	if (size)
		delete[]arr;
	size = obj.size;
	arr = new double[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = obj.arr[i];
	}
	return *this;
}

bool Vector::operator==(Vector &obj)
{
	if (size == obj.size)
		return true;
	else
		return false;
}
bool Vector::operator>(Vector &obj)
{
	if (size > obj.size)
		return true;
	else
		return false;
}
bool Vector::operator<(Vector &obj)
{
	if (size < obj.size)
		return true;
	else
		return false;
}
bool Vector::operator>=(Vector &obj)
{
	if (size >= obj.size)
		return true;
	else
		return false;
}
bool Vector::operator<=(Vector &obj)
{
	if (size <= obj.size)
		return true;
	else
		return false;
}
bool Vector::operator!=(Vector &obj)
{
	if (size != obj.size)
		return true;
	else
		return false;
}
void Vector::setMark(int position, double value)
{
	if (position >= 0 && position < size)
		arr[position] = value;
}
double Vector::getMark(int position) const
{
	if (position >= 0 && position < size)
		return arr[position];
	else
		return -1;
}
double& Vector::operator[](int position) {
	return arr[position];
}
void Vector::Clear()
{
	size = 0;
}
void Vector::reSize(int s)
{
	if (size > s)
		size = s;
	else {
		capacity = s;
		size = s;
	}
}
void Vector::popBack()
{
	if (size == 0)
		return;
	if (size == 1)
	{
		delete[]arr;
		size = 0;
		return;
	}
	double *tmp = new double[--size];
	for (int i = 0; i < size; ++i)
	{
		tmp[i] = arr[i];
	}
	delete[]arr;
	arr = tmp;
}
