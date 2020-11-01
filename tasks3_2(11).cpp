#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "+3-45**42";
	int cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] == '+' || a[i] == '-' || a[i] == '*')
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	getchar();
}
