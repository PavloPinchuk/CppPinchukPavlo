#include<iostream>

using namespace std;

int IsDegree2(int n)
{
	int s = 1;
	int t = 1;
	while (t < n)
	{
		s++;
		t *= 2;
	}
	return t == n;
}

int main()
{
	const size_t n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "] = ";
		cin >> mas[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (IsDegree2(mas[i]))
		{
			cnt++;
		}
	}
	cout << "Count: " << cnt << endl;
	system("pause");
}
