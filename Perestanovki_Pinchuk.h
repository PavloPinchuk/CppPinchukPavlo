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
	unsigned int size;//Розмір масиву
	int *arr = nullptr;//Масив
public:
	Permutation();//Конструктор за замовчуванням
	Permutation(unsigned int size);//Конструктор що встановлює розмір масиву та виділяє пам'ять
	Permutation(const Permutation &obj);//Конструктор копіювання
	unsigned int getSize()const;//Отримання розміру масива
	int getElement(int position);//Отримання елемента масива по індексу
	void input();//Ввід
	void show();//Виввід
	void input_txtFile(char* filename);//Ввід, зчитуючи з файлу
	void output_txtFile(char* filename);//Запис в файл

	//Допоміжні функції
	int myPow(int x, int deg);//Ввести в степінь
	int factorial(unsigned int n);//Факторіал числа
	int combinations(unsigned int n, unsigned int k);//Комбінація із n по k
	void sort(vector<Permutation> &obj, unsigned int n);//Сортування вектора
	void swap_i_j(unsigned int i, unsigned int j, Permutation *s);//Поміняти місцями і-тий та j-тий елемент перестановки
	void swap_Permutations(Permutation *a, Permutation *b);//swap перестановок
	bool check_bigger(const Permutation &a,const Permutation &b);//Перевірка, за допомогою якої ми сортуємо
	bool check_equal(Permutation s1, Permutation s2);//Перевірка, чи рівні дві перестановки

	void _generate_subsets(Permutation *s, Permutation s_old, unsigned int index, vector<Permutation> &subsets, unsigned int *indices);//Генерація підмножин перестановки
	vector<Permutation> get_generated_subsets(Permutation *s, unsigned int *n);//Допоміжна функція 
	vector<Permutation> task_A_get_subsets_unsorted(Permutation *s, unsigned int *n);//Завдання А,(у довільному порядку)
	vector<Permutation> task_A_get_subsets_sorted(Permutation *s, unsigned int*n);//Завдання А,(у відсортованому порядку)

	vector<Permutation> task_B_get_k_size_subsets_unsorted(Permutation *s, unsigned int *n, unsigned int k);//Завдання Б (у довільному порядку)
	vector<Permutation> task_B_get_k_size_subsets_sorted(Permutation *s, unsigned int *n, unsigned int k);//Завдання Б (у відсортованому порядку)

	void _unsorted_permutations_without_repetitions(Permutation *s, unsigned int k, vector<Permutation> &perms, unsigned int *index);//Допоміжна функція
	vector<Permutation> task_C_permutations_without_repetitions_unsorted(Permutation *s, unsigned int *n);//Завдання В, та Г_В (у довільному порядку)
	vector<Permutation> task_C_permutations_without_repetitions_sorted(Permutation *s, unsigned int *n);//Завдання В, та Г_В (у відсортованому порядку)

	vector<Permutation> task_D_get_subsets_with_repeat_unsorted(Permutation *s, unsigned int *n);//Завдання Г_А,(у довільному порядку)
	vector<Permutation> task_D_get_subsets_with_repeat_sorted(Permutation *s, unsigned int *n);//Завдання Г_А,(у відсортованому порядку)

	vector<Permutation> task_D_get_k_size_subsets_with_repeat_unsorted(Permutation *s, unsigned int *n, unsigned int k);//Завдання Г_Б (у довільному порядку)
	vector<Permutation> task_D_get_k_size_subsets_with_repeat_sorted(Permutation *s, unsigned int *n, unsigned int k);//Завдання Г_Б (у відсортованому порядку)

	friend ostream& operator<<(ostream &out, const Permutation &obj);//Перевантаження оператора <<
	friend istream& operator>>(istream &in, Permutation &obj);//Перевантаження оператора >>
	~Permutation();//Деструктор
};
