#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s, s2 = "";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
		{
			s2.push_back(s[i]);
		}
	}
	int cnt = s2.length();

	for (int i = 0; i < cnt / 2; i++)
		swap(s2[i], s2[cnt - i - 1]);

	int k = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
		{
			s[i] = s2[k++];
		}
	}
	cout << s << endl;
	system("pause");
}
