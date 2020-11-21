#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s, s2 = "";
	getline(cin, s);
	char c;
	c = ' ';
	int cnt = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			s2.push_back(s[i]);
			c = ' ';
			continue;
		}
		if (c == ' ' && s[i] != ' ')
		{
			c = s[i];
			continue;
		}
		if (s[i] != c && (s[i+1] == ' ' || s[i+1]=='.' || s[i+1] == ',' || i == s.length() - 2))
		{
			cnt++;
		}
		s2.push_back(s[i]);
	}
	cout << cnt << endl;
	system("pause");
}
