#include "Perestanovki_Pinchuk.h"

void test_get_unsorted_subsets()
{
	cout << "Тест завдання А,(у довільному порядку)" << endl;
	Permutation s;
	s.input_txtFile("txtTest_unique.txt");
	unsigned int n;
	vector<Permutation> subsets = s.task_A_get_subsets_unsorted(&s, &n);
	for (size_t i = 0; i < subsets.size(); i++)
	{
		cout << subsets[i];
	}
}

void test_get_sorted_subsets()
{
	cout << "Тест завдання А,(у відсортованому порядку)" << endl;
	Permutation s;
	s.input_txtFile("txtTest_unique.txt");
	unsigned int n;
	vector<Permutation> subsets = s.task_A_get_subsets_sorted(&s, &n);
	for (size_t i = 0; i < subsets.size(); i++)
	{
		cout << subsets[i];
	}
}

void test_get_k_size_unsorted_subsets()
{
	cout << "Тест завдання Б (у довільному порядку)" << endl;
	Permutation s;
	s.input_txtFile("txtTest_unique.txt");
	unsigned int k;
	cout << "k = ";
	cin >> k;
	unsigned int n;
	vector<Permutation> subsets = s.task_B_get_k_size_subsets_unsorted(&s, &n, k);
	for (size_t i = 0; i < subsets.size(); i++)
	{
		cout << subsets[i];
	}
}

void test_get_k_size_sorted_subsets()
{
	cout << "Тест завдання Б (у відсортованому порядку)" << endl;
	Permutation s;
	s.input_txtFile("txtTest_unique.txt");
	unsigned int k;
	cout << "k = ";
	cin >> k;
	unsigned int n;
	vector<Permutation> subsets = s.task_B_get_k_size_subsets_sorted(&s, &n, k);
	for (size_t i = 0; i < subsets.size(); i++)
	{
		cout << subsets[i];
	}
}

void test_unsorted_permutations_without_repetitions()
{
	cout << "Тест завдання В, та Г_В (у довільному порядку)" << endl;
	Permutation s;
	s.input_txtFile("txtTest_unique.txt");
	unsigned int n = 0;
	vector<Permutation> subsets = s.task_C_permutations_without_repetitions_unsorted(&s, &n);
	for (size_t i = 0; i < subsets.size(); i++)
	{
		cout << subsets[i];
	}
}

void test_sorted_permutations_without_repetitions()
{
	cout << "Тест завдання В, та Г_В (у відсортованому порядку)" << endl;
	Permutation s;
	s.input_txtFile("txtTest_unique.txt");
	unsigned int n = 0;
	vector<Permutation> subsets = s.task_C_permutations_without_repetitions_sorted(&s, &n);
	for (size_t i = 0; i < subsets.size(); i++)
	{
		cout << subsets[i];
	}
}

void test_get_unsorted_subsets_wse()
{
	cout << "Тест завдання Г_А,(у довільному порядку)" << endl;
	Permutation s;
	s.input_txtFile("txtTest_repeat.txt");
	unsigned int n = 0;
	vector<Permutation> subsets = s.task_D_get_subsets_with_repeat_unsorted(&s, &n);
	for (size_t i = 0; i < subsets.size(); i++)
	{
		cout << subsets[i];
	}
}

void test_get_sorted_subsets_wse()
{
	cout << "Тест завдання Г_А,(у відсортованому порядку)" << endl;
	Permutation s;
	s.input_txtFile("txtTest_repeat.txt");
	unsigned int n = 0;
	vector<Permutation> subsets = s.task_D_get_subsets_with_repeat_sorted(&s, &n);
	for (size_t i = 0; i < subsets.size(); i++)
	{
		cout << subsets[i];
	}
}

void test_get_k_size_unsorted_subsets_wse()
{
	cout << "Тест завдання Г_Б (у довільному порядку)" << endl;
	Permutation s;
	s.input_txtFile("txtTest_repeat.txt");
	unsigned int k;
	cout << "k = ";
	cin >> k;
	unsigned int n = 0;
	vector<Permutation> subsets = s.task_D_get_k_size_subsets_with_repeat_unsorted(&s, &n, k);
	for (size_t i = 0; i < subsets.size(); i++)
	{
		cout << subsets[i];
	}

}

void test_get_k_size_sorted_subsets_wse()
{
	cout << "Тест завдання Г_Б (у відсортованому порядку)" << endl;
	Permutation s;
	s.input_txtFile("txtTest_repeat.txt");
	unsigned int k;
	cout << "k = ";
	cin >> k;
	unsigned int n = 0;
	vector<Permutation> subsets = s.task_D_get_k_size_subsets_with_repeat_sorted(&s, &n, k);
	for (size_t i = 0; i < subsets.size(); i++)
	{
		cout << subsets[i];
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	test_get_unsorted_subsets();
	test_get_sorted_subsets();

	test_get_k_size_unsorted_subsets();
	test_get_k_size_sorted_subsets();

	test_unsorted_permutations_without_repetitions();
	test_sorted_permutations_without_repetitions();

	test_get_unsorted_subsets_wse();
	test_get_sorted_subsets_wse();

	test_get_k_size_unsorted_subsets_wse();
	test_get_k_size_sorted_subsets_wse();

	system("pause");
}
