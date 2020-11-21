#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream f1;
	f1.open("1.txt");

	fstream f2;
	f2.open("2.txt", ios::out);

	string data;
	string arr[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	if (f1)
	{
		while (!(f1 >> data).eof())
		{
			if (f1.bad())
			{
				cerr << "Wrong reading" << endl;
				return 2;
			}
			cout << data << "; ";

			for (int i = 0; i < 4; i++)
			{
				if (data.find(arr[i]) != string::npos)
				{
					int m = data.find(arr[i]);
					data.replace(m, m + arr[i].size(), to_string(i + 1));
				}
			}
			cout << data << endl;
			f2 << data << " ";
		}
	}

	f1.close();
	f2.close();
}
