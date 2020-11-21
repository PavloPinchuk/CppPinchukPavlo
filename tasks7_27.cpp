#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream f1;
	f1.open("1.txt");

	string data;
	string sum_words = "";

	if (!f1.bad())
	{
		while (!(f1 >> data).eof())
		{
			if (f1.bad())
			{
				cerr << "Wrong reading" << endl;
				return 2;
			}

			cout << data << "; ";
			sum_words += data;
		}
	}
	f1.close();
	f1.open("1.txt");

	int freq[26] = { 0, };
	freq['s' - 'a'] = 0;
	if (!f1.bad())
	{
		while (!(f1 >> data).eof())
		{
			if (f1.bad())
			{
				cerr << "Wrong reading" << endl;
				return 2;
			}

			for (int i = 0; i < data.size(); ++i)
			{
				char c = data[i];
				for (int j = 0; j < sum_words.size(); i++)
				{
					if (c == sum_words[j])
						freq[c - 'a']++;
				}
			}

			for (int i = 0; i < 26; i++)
			{
				cout << static_cast<char>('a' + i) << ":" << freq[i] << '\t';
				freq[i] = 0;
			}
			cin.get();
		}
	}

	f1.close();

	for (int i = 0; i < 25; i++)
	{
		cout << static_cast<char>('a' + i) << ":" << freq[i] << '\t';
	}
}
