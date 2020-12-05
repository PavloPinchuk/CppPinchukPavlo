#include "Perestanovki_Pinchuk.h"

Permutation::Permutation() = default;

Permutation::Permutation(unsigned int size)
{
	this->size = size;
	arr = new int[size];
}

Permutation::Permutation(const Permutation & obj)
{
	size = obj.getSize();
	arr = new int[size] {};
	for (unsigned int i = 0; i < size; i++) {
		arr[i] = obj.arr[i];
	}
}

unsigned int Permutation::getSize() const
{
	return size;
}

int Permutation::getElement(int position)
{
	return arr[position];
}

void Permutation::input()
{
	cout << "Enter n = ";
	cin >> size;
	arr = new int[size];
	for (unsigned int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void Permutation::show()
{
	for (unsigned int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Permutation::input_txtFile(char * filename)
{
	ifstream f(filename);
	if (!f.good())
	{
		cerr << "Error opening file!" << endl;
		return;
	}
	int i = 0;
	int *mas = new int[10];
	while (f >> mas[i])
	{
		i++;
	}
	f.close();
	size = i;
	arr = new int[size];
	for (int j = 0; j < i; j++)
	{
		arr[j] = mas[j];
	}
	return;
}

void Permutation::output_txtFile(char * filename)
{
	ofstream f(filename);
	for (unsigned int i = 0; i < size; i++)
	{
		f << arr[i];
		f << " ";
	}
	f.close();
}

int Permutation::myPow(int x, int deg)
{
	if (x == 0)
		return 0;

	int answer = 1;
	for (int i = 0; i < deg; i++)
	{
		answer *= x;
	}

	return answer;
}

int Permutation::factorial(unsigned int n)
{
	int answer = 1;
	for (unsigned int i = 2; i <= n; i++)
	{
		answer *= i;
	}
	return answer;
}

int Permutation::combinations(unsigned int n, unsigned int k)
{
	if (n <= 0 || k <= 0 || n < k)
		return 0;

	return factorial(n) / (factorial(n - k) * factorial(k));
}

void Permutation::sort(vector<Permutation> &obj, unsigned int n)
{
	vector<Permutation> a = obj;
	unsigned int cnt = a.size();
	Permutation *tmp = new Permutation[cnt];
	for (unsigned int i = 0; i < cnt; i++)
	{
		tmp[i] = a[i];
	}
	for (unsigned int i = 0; i < cnt; i++)
	{
		for (unsigned int j = i + 1; j < cnt; j++)
		{
			if (check_bigger(tmp[i], tmp[j]))
			{
				swap_Permutations(&tmp[i], &tmp[j]);
			}
		}
	}
	obj.clear();
	for (unsigned int i = 0; i < cnt; i++)
	{
		obj.push_back(tmp[i]);
	}
}

void Permutation::swap_i_j(unsigned int i, unsigned int j, Permutation * s)
{
	int temp = s->arr[i];
	s->arr[i] = s->arr[j];
	s->arr[j] = temp;
}

void Permutation::swap_Permutations(Permutation * a, Permutation * b)
{
	swap(a->size, b->size);
	swap(a->arr, b->arr);
}

bool Permutation::check_bigger(const Permutation & a, const Permutation & b)
{
	if (a.size < b.size)
	{
		return false;
	}
	else if (a.size > b.size)
	{
		return true;
	}
	else
	{
		for (size_t i = 0; i < a.size; i++)
		{
			if (a.arr[i] > b.arr[i])
			{
				return true;
			}
			else if (a.arr[i] < b.arr[i])
			{
				return false;
			}
		}
		return false;
	}
}

bool Permutation::check_equal(Permutation s1, Permutation s2)
{
	if (!check_bigger(s1, s2) && !check_bigger(s2, s1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Permutation::_generate_subsets(Permutation * s, Permutation s_old, unsigned int index, vector<Permutation> &subsets, unsigned int * indices)
{
	if (index >= s->size)
		return;

	Permutation s_new(s_old.size + 1);

	for (unsigned long i = 0; i < s_old.size; i++)
	{
		s_new.arr[i] = s_old.arr[i];
	}

	s_new.arr[s_old.size] = s->arr[index];

	subsets.push_back(s_new);
	indices[s_old.size + 1] += 1;

	_generate_subsets(s, s_new, index + 1, subsets, indices);
	_generate_subsets(s, s_old, index + 1, subsets, indices);
}

vector<Permutation> Permutation::get_generated_subsets(Permutation * s, unsigned int *n)
{
	*n = myPow(2, s->size);
	vector<Permutation> subsets;
	unsigned int *indices = new unsigned int[s->size + 1];
	for (unsigned long i = 0; i < s->size + 1; i++)
	{
		if (i == 0)
			indices[i] = 0;
		else if (i == 1)
			indices[i] = 1;
		else
			indices[i] = combinations(s->size, i - 1) + indices[i - 1];
	}

	Permutation s_empty(0);
	subsets.push_back(s_empty);

	_generate_subsets(s, s_empty, 0, subsets, indices);

	return subsets;
}

vector<Permutation> Permutation::task_A_get_subsets_unsorted(Permutation * s, unsigned int *n)
{
	return get_generated_subsets(s, n);
}

vector<Permutation> Permutation::task_A_get_subsets_sorted(Permutation * s, unsigned int *n)
{
	vector<Permutation> subsets = get_generated_subsets(s, n);
	sort(subsets, myPow(2, s->size));
	return subsets;
}

vector<Permutation> Permutation::task_B_get_k_size_subsets_unsorted(Permutation * s, unsigned int *n, unsigned int k)
{
	unsigned int n_all_subsets;
	vector<Permutation> subsets = task_A_get_subsets_unsorted(s, &n_all_subsets);
	*n = combinations(s->size, k);
	vector<Permutation> answer;
	unsigned int index = 0;
	for (unsigned int i = 0; i < n_all_subsets; i++)
	{
		if (subsets[i].size == k)
		{
			answer.push_back(subsets[i]);
		}
	}
	return answer;
}

vector<Permutation> Permutation::task_B_get_k_size_subsets_sorted(Permutation * s, unsigned int *n, unsigned int k)
{
	vector<Permutation> subsets = task_B_get_k_size_subsets_unsorted(s, n, k);
	sort(subsets, *n);
	return subsets;
}

void Permutation::_unsorted_permutations_without_repetitions(Permutation * s, unsigned int k, vector<Permutation> &perms, unsigned int *index)
{
	if (k == s->size - 1)
	{
		perms.push_back(*s);
		(*index)++;
	}
	else
	{
		for (unsigned int j = k; j < s->size; j++)
		{
			Permutation s2(s->size);
			for (unsigned long i = 0; i < s->size; i++)
			{
				s2.arr[i] = s->arr[i];
			}
			swap_i_j(k, j, &s2);

			_unsorted_permutations_without_repetitions(&s2, k + 1, perms, index);

			swap_i_j(k, j, s);
		}
	}
}

vector<Permutation> Permutation::task_C_permutations_without_repetitions_unsorted(Permutation * s, unsigned int *n)
{
	vector<Permutation> perms;
	_unsorted_permutations_without_repetitions(s, 0, perms, n);
	return perms;
}

vector<Permutation> Permutation::task_C_permutations_without_repetitions_sorted(Permutation * s, unsigned int *n)
{
	vector<Permutation> perms = task_C_permutations_without_repetitions_unsorted(s, n);
	sort(perms, *n);
	return perms;
}

vector<Permutation> Permutation::task_D_get_subsets_with_repeat_unsorted(Permutation * s, unsigned int *n)
{
	unsigned int n_subsets;
	vector<Permutation> subsets = task_A_get_subsets_sorted(s, &n_subsets);
	vector<Permutation> answer;
	Permutation *pivot = &subsets[0];
	*n = 0;
	(*n)++;
	answer.push_back(*pivot);
	for (size_t i = 1; i < n_subsets; i++)
	{
		if (!check_equal(subsets[i], *pivot))
		{
			pivot = &subsets[i];
			answer.push_back(*pivot);
			(*n)++;
		}
	}
	return answer;
}

vector<Permutation> Permutation::task_D_get_subsets_with_repeat_sorted(Permutation * s, unsigned int *n)
{
	vector<Permutation> answer = task_D_get_subsets_with_repeat_unsorted(s, n);
	sort(answer, *n);
	return answer;
}

vector<Permutation> Permutation::task_D_get_k_size_subsets_with_repeat_unsorted(Permutation * s, unsigned int *n, unsigned int k)
{
	unsigned int n_subsets;
	vector<Permutation> subsets = task_A_get_subsets_unsorted(s, &n_subsets);
	vector<Permutation> ans;
	for (unsigned int i = 0; i < n_subsets; i++)
	{
		if (subsets[i].size == k)
		{
			ans.push_back(subsets[i]);
		}
	}

	return ans;
}

vector<Permutation> Permutation::task_D_get_k_size_subsets_with_repeat_sorted(Permutation * s, unsigned int *n, unsigned int k)
{
	vector<Permutation> subsets = task_D_get_k_size_subsets_with_repeat_unsorted(s, n, k);
	sort(subsets, *n);
	return subsets;
}

ostream & operator<<(ostream & out, const Permutation & obj)
{
	for (unsigned int i = 0; i < obj.size; i++)
	{
		out << obj.arr[i] << " ";
	}
	out << "\n";
	return out;
}

istream & operator >> (istream & in, Permutation & obj)
{
	for (unsigned int i = 0; i < obj.size; i++)
	{
		in >> obj.arr[i];
	}
	return in;
}

Permutation::~Permutation()
{
	if (size != 0 && arr!=nullptr)
		delete[]arr;
}
