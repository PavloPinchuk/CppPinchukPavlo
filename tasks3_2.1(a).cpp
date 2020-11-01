#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "23ab+cd+5";
	char b[10];
	int k = 0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
		{
			continue;
		}
		b[k] = a[i];
		k++;
		if (a[i] == '+')
		{
			b[k] = a[i];
			k++;
		}
	}

	for (int i = 0; i < strlen(b); i++)
	{
		printf("%c", b[i]);
	}

	getchar();
}
