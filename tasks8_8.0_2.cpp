#include<iostream>

using namespace std;

class Vector
{
private:
	double *arr;
	unsigned int size;

public:
	Vector()
	{
		size = 0;
		arr = nullptr;
	}
	Vector(unsigned int n)
	{
		size = n;
		arr = new double[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = 0;
		}
	}
	Vector(double *arr, unsigned int n)
	{
		size = n;
		this->arr = new double[size];
		for (int i = 0; i < size; i++)
		{
			this->arr[i] = arr[i];
		}
	}
	Vector(const Vector &v)
	{
		size = v.GetSize();
		this->arr = new double[size];
		for (unsigned int i = 0; i < size; i++)
		{
			this->arr[i] = v.Get(i);
		}
	}
	unsigned int GetSize() const
	{
		return size;
	}

	double Get(unsigned int n) const
	{
		if (n >= size || n < 0)
		{
			cout << "Wrong index" << endl;
			return -1;
		}
		else
		{
			return arr[n];
		}
	}
	void Set(unsigned int n, double value)
	{
		if (n >= size || n < 0)
		{
			cout << "Wrong index" << endl;
		}
		else
		{
			arr[n] = value;
		}
	}
	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	~Vector()
	{
		if (arr != nullptr)
		{
			delete[]arr;
		}
	}
};

int main()
{
	Vector a(3);
	a.Set(0, 1);
	a.Set(1, 2);
	a.Set(2, 3);
	a.Print();
	Vector b(a);
	b.Print();
	system("pause");
}
