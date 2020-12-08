#include <iostream>
#include<vector>
#include<string>

using namespace std;

class Sportsman
{
	string name;
	vector<int> notes;
public:
	Sportsman()
	{
		name = "";
	}

	Sportsman(unsigned n)
	{
		cout << "Name: ";
		getline(cin, name);
		int x;
		for (unsigned i = 0; i < n; i++)
		{
			cout << "Notes[" << i << "] = ";
			cin >> x;
			if (x < 0)
				x *= -1;
			notes.push_back(x);
		}
		cin.ignore();
	}

	void deleteMaxAndMin()
	{
		int max = notes[0], min = notes[0];
		for (unsigned i = 1; i < notes.size(); i++)
		{
			if (notes[i] > max)
				max = notes[i];
			if (notes[i] < min)
				min = notes[i];
		}
		vector<int> tmp;
		bool f1 = false, f2 = false;
		for (unsigned i = 0; i < notes.size(); i++)
		{
			if (notes[i] == max && !f1)
			{
				f1 = true;
				continue;
			}
			if (notes[i] == min && !f2)
			{
				f2 = true;
				continue;
			}
			tmp.push_back(notes[i]);
		}
		notes = tmp;
	}

	void print()
	{
		cout << "Name: " << name << endl << "Notes: ";
		for (unsigned i = 0; i < notes.size(); i++)
		{
			cout << notes[i] << " ";
		}
		cout << endl;
	}

	double GetNote()
	{
		double note = 0;
		for (unsigned i = 0; i < notes.size(); i++)
		{
			note += notes[i];
		}
		note /= notes.size();
		return note;
	}

	const string &getName()const
	{
		return name;
	}
};

int main()
{
	Sportsman s(5);
	Sportsman s2(6);
	Sportsman s3(5);
	s.deleteMaxAndMin();
	s2.deleteMaxAndMin();
	s3.deleteMaxAndMin();
	vector<Sportsman> v;
	v.push_back(s);
	v.push_back(s2);
	v.push_back(s3);
	unsigned index = 0;
	double max = v[0].GetNote();
	for (unsigned i = 1; i < v.size(); i++)
	{
		if (v[i].GetNote() > max)
		{
			max = v[i].GetNote();
			index = i;
		}
	}
	cout << "Winner - " << v[index].getName() << endl;
	system("pause");
}