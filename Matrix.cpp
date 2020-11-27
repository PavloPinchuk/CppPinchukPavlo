#include "Matrix.h"

#include "Matrix.h"
Matrix::Matrix()
{
	this->row = 3;
	this->col = 3;
}
int Matrix::GetRow()const
{
	return row;
}
int Matrix::GetCol()const
{
	return col;
}
double Matrix::GetElement(int pos_row, int pos_col)const
{
	return arr[pos_row][pos_col];
}
void Matrix::SetElement(int pos_row, int pos_col, int val)
{
	arr[pos_row][pos_col] = val;
}

Matrix::Matrix(const int r, const int c)
{
	this->row = r;
	this->col = c;
	arr = new double*[row];
	for (int i = 0; i < row; i++)
		arr[i] = new double[col];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
		}
}

Matrix::Matrix(const Matrix&obj)
{
	this->row = obj.row;
	this->col = obj.col;
	arr = new double*[row];
	for (int i = 0; i < row; i++)
		arr[i] = new double[col];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = obj.arr[i][j];
		}
}
Matrix::Matrix(Matrix&&obj)
{
	swap(row, obj.row);
	swap(col, obj.col);
	swap(arr, obj.arr);
}
void Matrix::Print()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			cout << "\t" << arr[i][j];
		}
		cout << endl;
	}
}
void Matrix::Mnozhenia_Na_Chislo(double n)
{
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++) {
			arr[i][j] *= n;
		}
}
Matrix &Matrix::operator=(const Matrix &obj)
{
	if (this == &obj)
		return *this;
	row = obj.row;
	col = obj.col;
	for (int i = 0; i < obj.row; i++)
		for (int j = 0; j < obj.col; j++) {
			arr[i][j] = obj.arr[i][j];
		}
	return *this;
}
Matrix &Matrix::operator=(Matrix &&obj)
{
	if (this == &obj)
		return *this;
	swap(row, obj.row);
	swap(col, obj.col);
	swap(arr, obj.arr);
	return *this;
}
Matrix Matrix::operator+(const Matrix &obj)
{
	if (row != obj.row || col != obj.col)
	{
		cout << "Nepravilna rozmirnist" << endl;
		return *this;
	}
	Matrix tmp(row, col);
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++) {
			tmp.arr[i][j] = arr[i][j] + obj.arr[i][j];
		}
	return tmp;
}
Matrix Matrix::operator-(const Matrix &obj)
{
	if (row != obj.row || col != obj.col)
	{
		cout << "Nepravilna rozmirnist" << endl;
		return *this;
	}
	Matrix tmp(row, col);
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++) {
			tmp.arr[i][j] = arr[i][j] - obj.arr[i][j];
		}
	return tmp;
}
Matrix Matrix::operator*(const Matrix &obj)
{
	if (col != obj.row)
	{
		cout << "Nepravilna rozmirnist" << endl;
		return *this;
	}
	double **tmp = new double*[row];
	for (int i = 0; i < row; i++)
	{
		tmp[i] = new double[obj.col];
		for (int j = 0; j < obj.col; j++)
		{
			tmp[i][j] = 0;
			for (int k = 0; k < col; k++) {
				tmp[i][j] += arr[i][k] * obj.arr[k][j];
			}
		}
	}
	Matrix t(row, obj.col);
	for (int i = 0; i<row; i++)
		for (int j = 0; j < obj.col; j++)
		{
			t.arr[i][j] = tmp[i][j];
		}
	return t;
}
ostream &operator<<(ostream & os, const Matrix & obj)
{
	for (int i = 0; i < obj.row; i++) {
		for (int j = 0; j < obj.col; j++)
			os << obj.arr[i][j] << " ";
		cout << endl;
	}
	return os;
}
Vector Matrix::operator*(const Vector & obj)
{
	if (col != obj.Size())
	{
		cout << "Nepravilna rozmirnist" << endl;
		return obj;
	}
	double *tmp = new double[row];
	/*for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < obj.Size(); j++)
		{
			tmp[i] = 0;
			for (int k = 0; k < col; k++) {
				tmp[i][j] += arr[i][k] * obj.getMark(k);
			}
		}
	}
	Matrix t(row, obj.Size());
	for (int i = 0; i<row; i++)
		for (int j = 0; j < obj.Size(); j++)
		{
			t.arr[i][j] = tmp[i][j];
		}*/
	Vector t(row, 0);
	double tmp2 = arr[0][0] * obj.getMark(0) + arr[0][1] * obj.getMark(1) + arr[0][2] * obj.getMark(2);
	t.setMark(0, tmp2); 
	tmp2 = arr[1][0] * obj.getMark(0) + arr[1][1] * obj.getMark(1) + arr[1][2] * obj.getMark(2);
	t.setMark(1, tmp2);
	tmp2 = arr[2][0] * obj.getMark(0) + arr[2][1] * obj.getMark(1) + arr[2][2] * obj.getMark(2);
	t.setMark(2, tmp2);
	return t;
}
double Matrix::Abs() const
{
	double max = 0;
	for (int i = 0; i < row; i++)
	{
		double s = 0.0;
		for (int j = 0; j < col; j++)
		{
			s += arr[i][j];
		}
		if (s > max)
			max = s;
	}
	return max;
}

double Matrix::Det() const
{
	double d = (this->arr[0][0] * this->arr[1][1] * this->arr[2][2]) + (this->arr[0][1] * this->arr[1][2] * this->arr[2][0]) + (this->arr[0][2] * this->arr[1][0] * this->arr[2][1]) - (this->arr[0][2] * this->arr[1][1] * this->arr[2][0]) - (this->arr[0][0] * this->arr[2][1] * this->arr[1][2]) - (this->arr[0][1] * this->arr[1][0] * this->arr[2][2]);
	return d;
}

Matrix::~Matrix()
{
	if (col != 0 || row != 0) {
		for (int i = 0; i < row; i++)
			delete[]arr[i];
		delete[]arr;
	}
}

