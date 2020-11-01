#include<stdio.h>
#include<string.h>

int main()
{
	char a[30] = "abc er ere rrrrr";
	int cnt1 = 1, cnt2 = 0;
	char c = 'e';
	for (int i = 0; i < 28; i++)
	{
		if (a[i]!=' ' && a[i + 1] == ' ' && a[i + 2] != ' ')
		{
			cnt1++;
		}
		if (a[i] != ' ' && a[i + 1] == ' ' && a[i + 2] == c)
		{
			cnt2++;
		}
	}
	printf("%d\n", cnt1);
	printf("%d\n", cnt2);
	getchar();
}
