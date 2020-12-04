#include<iostream>
#include<string>
#include<vector>
#include<time.h>

using namespace std;

class Person
{
	string name;
	unsigned byear;
public:
	Person() = default;
	Person(string n, unsigned b)
	{
		name = n;
		byear = b;
	}
	void input()
	{
		cout << "Name: ";
		getline(cin, name);
		cout << "Year: ";
		cin >> byear;
		cin.ignore();
	}
	void print()
	{
		cout << "Name: " << name << "\nYear: " << byear << endl;
	}
	friend std::ostream& operator<< (std::ostream &out, const Person &p)
	{
		out << "Name: " << p.name << "\nYear: " << p.byear << endl;
		return out;
	}
	friend std::istream& operator >> (std::istream &in, Person &p)
	{
		cout << "Name: ";
		getline(in, p.name);
		cout << "Year: ";
		in >> p.byear;

		return in;
	}
};

class Student : public Person
{
	unsigned notes_5[7];
	unsigned notes_100[7];
public:
	Student() :Person(){}
	Student(string n, unsigned b) :Person(n, b)
	{
		for (int i = 0; i < 7; i++)
		{
			notes_5[i] = rand() % 4 + 2;
		}
		for (int i = 0; i < 7; i++)
		{
			notes_100[i] = rand() % 40 + 60;
		}
	}
	template<size_t N>
	Student(string n, unsigned b, unsigned (&n1)[N], unsigned (&n2)[N]):Person(n,b)
	{
		static_assert(N == 7, "Array must contain 7 elements");
		for (int i = 0; i < 7; i++)
		{
			notes_5[i] = n1[i];
		}
		for (int i = 0; i < 7; i++)
		{
			notes_100[i] = n2[i];
		}
	}
	void input()
	{
		Person::input();
		cout << "Enter notes_5: ";
		for (int i = 0; i < 7; i++)
		{
			cin >> notes_5[i];
		}
		cout << "Enter notes_100: ";
		for (int i = 0; i < 7; i++)
		{
			cin >> notes_100[i];
		}
	}
	void print()
	{
		Person::print();
		cout << "Notes_5: ";
		for (int i = 0; i < 7; i++)
		{
			cout << notes_5[i] << " ";
		}
		cout << endl;
		cout << "Notes_100: ";
		for (int i = 0; i < 7; i++)
		{
			cout << notes_100[i] << " ";
		}
	}

	bool Stupendia_5()
	{
		for (int i = 0; i < 7; i++)
		{
			if (notes_5[i] < 4)
				return false;
		}
		return true;
	}

	bool Stupendia_100(vector<Student> v)
	{
		double sered = seredniyBal();
		unsigned cnt = 0;
		for (unsigned i = 0; i < v.size(); i++)
		{
			if (sered < v[i].seredniyBal())
			{
				cnt++;
				if (cnt > v.size() / 5 * 2)
				{
					return false;
				}
			}
		}
		return true;
	}

	double seredniyBal()
	{
		double sum = 0.0;
		for (int i = 0; i < 7; i++)
		{
			sum += notes_100[i];
		}
		return sum / 7.0;
	}
};


int main()
{
	vector<Student> v;
	string s = "Pasha";
	unsigned m1[7] = { 4,4,5,4,5,5,5 };
	unsigned m2[7] = { 85,80,95,88,100,97,94 };
	Student s1(s, 2002, m1, m2);
	s = "Misha";
	Student s2(s, 2002);
	s = "Dasha";
	Student s3(s, 2001);
	s = "Masha";
	Student s4(s, 2001);
	s = "Arsen";
	Student s5(s, 1985);
	v.push_back(s1);
	v.push_back(s2);
	v.push_back(s3);
	v.push_back(s4);
	v.push_back(s5);
	cout << "s1 - Stupendia_5? - " << s1.Stupendia_5() << endl;
	cout << "s1 - Stupendia_100? - " << s1.Stupendia_100(v) << endl;
	system("pause");
}
