#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 100

int main()
{
	char mas[N];

	FILE *file = fopen("txt1.txt", "rt");
	char c;
	int k = 0;
	while (1)
	{
		if (feof(file)) break;
		c = getc(file);
		mas[k++] = (char)c;
	}

	for (int i = 0; i < k; ++i)
	{
		printf("%c", mas[i]);
	}
	printf("\n");
	fclose(file);

	char s;
	printf("Enter s = ");
	scanf("%c", &s);
	int cnt = 0;
	for (int i = 0; i < k; i++)
	{
		if (mas[i] == s)
		{
			cnt++;
		}
	}
	printf("Count: %d\n", cnt);
	system("pause");
}
