#pragma once
#include<iostream>
#include"Vector.h"
#include<cmath>

using namespace std;
class Matrix
{
	double **arr = nullptr;
	int row;
	int col;
public:
	Matrix();
	Matrix(int r, int c);
	Matrix(const Matrix &obj);
	Matrix(Matrix &&obj);
	int GetRow()const;
	int GetCol()const;
	void Print();
	void Mnozhenia_Na_Chislo(double n);
	Matrix operator+(const Matrix &obj);
	Matrix operator-(const Matrix &obj);
	Matrix operator*(const Matrix &obj);
	Matrix &operator=(const Matrix &obj);
	Matrix &operator=(Matrix &&obj);
	double GetElement(int pos_row, int pos_col)const;
	void SetElement(int pos_row, int pos_col, int val);
	friend ostream &operator<<(ostream &os, const Matrix &obj);
	Vector operator*(const Vector &obj);
	double Abs() const;
	double Det() const;
	~Matrix();
};