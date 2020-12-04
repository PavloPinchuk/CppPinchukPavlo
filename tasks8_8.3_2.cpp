#include<iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{
	string name;
	unsigned byear;
public:
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

class Route
{
public:
	string departureCity;
	string arrivalCity;
	unsigned distance;
	void input()
	{
		cout << "DepartureCity: ";
		getline(cin, departureCity);
		cout << "ArrivalCity: ";
		getline(cin, arrivalCity);
		cout << "Distance: ";
		cin >> distance;
		cin.ignore();
	}
	void print()
	{
		cout << "DepartureCity: " << departureCity << "\nArrivalCity: " << arrivalCity << "\nDistance: " << distance << endl;
	}
	friend std::ostream& operator<< (std::ostream &out, const Route &r)
	{
		out << "DepartureCity: " << r.departureCity << "\nArrivalCity: " << r.arrivalCity << "\nDistance: " << r.distance << endl;
		return out;
	}
	friend std::istream& operator >> (std::istream &in, Route &r)
	{
		cout << "DepartureCity: ";
		getline(in, r.departureCity);
		cout << "ArrivalCity: ";
		getline(in, r.arrivalCity);
		cout << "Distance: ";
		in.ignore();
		in >> r.distance;
		return in;
	}
};

class Passenger : public Person
{
	string departureCity;
	string arrivalCity;
public:
	void input()
	{
		Person::input();
		cout << "DepartureCity: ";
		getline(cin, departureCity);
		cout << "ArrivalCity: ";
		getline(cin, arrivalCity);
	}
	void print()
	{
		Person::print();
		cout << "DepartureCity: " << departureCity << "\nArrivalCity: " << arrivalCity << endl;
	}
	unsigned Rozrahunok(vector<Route> v, unsigned plata)
	{
		for (unsigned int i = 0; i < v.size(); i++)
		{
			if (v[i].arrivalCity == arrivalCity && v[i].departureCity == departureCity)
			{
				return v[i].distance*plata;
			}
		}
		return 0;
	}
};

int main()
{
	Route a, b, c;
	a.input();
	b.input();
	c.input();
	vector<Route> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	Passenger p;
	p.input();
	cout << p;
	cout << "Plata: " << p.Rozrahunok(v, 20) << endl;
	system("pause");
}
