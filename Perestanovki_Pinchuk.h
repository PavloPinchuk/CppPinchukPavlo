#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include "windows.h"

using namespace std;

class Permutation
{
	unsigned int size;//����� ������
	int *arr = nullptr;//�����
public:
	Permutation();//����������� �� �������������
	Permutation(unsigned int size);//����������� �� ���������� ����� ������ �� ������ ���'���
	Permutation(const Permutation &obj);//����������� ���������
	unsigned int getSize()const;//��������� ������ ������
	int getElement(int position);//��������� �������� ������ �� �������
	void input();//���
	void show();//�����
	void input_txtFile(char* filename);//���, �������� � �����
	void output_txtFile(char* filename);//����� � ����

	//������� �������
	int myPow(int x, int deg);//������ � ������
	int factorial(unsigned int n);//�������� �����
	int combinations(unsigned int n, unsigned int k);//��������� �� n �� k
	void sort(vector<Permutation> &obj, unsigned int n);//���������� �������
	void swap_i_j(unsigned int i, unsigned int j, Permutation *s);//������� ������ �-��� �� j-��� ������� ������������
	void swap_Permutations(Permutation *a, Permutation *b);//swap ������������
	bool check_bigger(const Permutation &a,const Permutation &b);//��������, �� ��������� ��� �� �������
	bool check_equal(Permutation s1, Permutation s2);//��������, �� ��� �� ������������

	void _generate_subsets(Permutation *s, Permutation s_old, unsigned int index, vector<Permutation> &subsets, unsigned int *indices);//��������� �������� ������������
	vector<Permutation> get_generated_subsets(Permutation *s, unsigned int *n);//�������� ������� 
	vector<Permutation> task_A_get_subsets_unsorted(Permutation *s, unsigned int *n);//�������� �,(� ��������� �������)
	vector<Permutation> task_A_get_subsets_sorted(Permutation *s, unsigned int*n);//�������� �,(� ������������� �������)

	vector<Permutation> task_B_get_k_size_subsets_unsorted(Permutation *s, unsigned int *n, unsigned int k);//�������� � (� ��������� �������)
	vector<Permutation> task_B_get_k_size_subsets_sorted(Permutation *s, unsigned int *n, unsigned int k);//�������� � (� ������������� �������)

	void _unsorted_permutations_without_repetitions(Permutation *s, unsigned int k, vector<Permutation> &perms, unsigned int *index);//�������� �������
	vector<Permutation> task_C_permutations_without_repetitions_unsorted(Permutation *s, unsigned int *n);//�������� �, �� �_� (� ��������� �������)
	vector<Permutation> task_C_permutations_without_repetitions_sorted(Permutation *s, unsigned int *n);//�������� �, �� �_� (� ������������� �������)

	vector<Permutation> task_D_get_subsets_with_repeat_unsorted(Permutation *s, unsigned int *n);//�������� �_�,(� ��������� �������)
	vector<Permutation> task_D_get_subsets_with_repeat_sorted(Permutation *s, unsigned int *n);//�������� �_�,(� ������������� �������)

	vector<Permutation> task_D_get_k_size_subsets_with_repeat_unsorted(Permutation *s, unsigned int *n, unsigned int k);//�������� �_� (� ��������� �������)
	vector<Permutation> task_D_get_k_size_subsets_with_repeat_sorted(Permutation *s, unsigned int *n, unsigned int k);//�������� �_� (� ������������� �������)

	friend ostream& operator<<(ostream &out, const Permutation &obj);//�������������� ��������� <<
	friend istream& operator>>(istream &in, Permutation &obj);//�������������� ��������� >>
	~Permutation();//����������
};
