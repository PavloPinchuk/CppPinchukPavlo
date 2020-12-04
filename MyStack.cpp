#include<iostream>
#include<stack>
#include <string>

using namespace std;

template <class T, unsigned N = 100>
class MyStack
{
	T a[N];
	unsigned num;
public:
	MyStack() { num = 0; }
	T top()
	{
		return a[num];
	}

	bool push(T b)
	{
		if (num + 1 >= N)
			return false;
		a[num++] = b;
		return true;
	}

	T pop()
	{
		if (num == 0)
			return 0;
		return a[--num];
	}

	void print()
	{
		for (unsigned int i = 0; i < num; i++)
		{
			cout << a[i] << " ";
		}
	}
};

int main()
{
	MyStack<int> s1;
	MyStack<string> s2;

	s1.push(1);
	s1.push(2);
	s1.push(3);

	s2.push("aaa");
	s2.push("bbb");
	s2.print();
	cout << endl;

	stack<int> t1;
	stack<string> t2;

	t1.push(1);
	t1.push(2);

	while (!t1.empty())
	{
		cout << t1.top() << "; ";
		t1.pop();
	}
	cout << endl;
	t2.push("ccc");
	t2.push("ddd");
	while (!t2.empty())
	{
		cout << t2.top() << "; ";
		t2.pop();
	}
	cout << endl;

	system("pause");
}
