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

	FILE *file1 = fopen("txt1_reverse.txt", "wt");

	for (int i = k - 2; i > -1; i--)
	{
		fputc(mas[i], file1);
		printf("%c", mas[i]);
	}
	printf("\n");
	fclose(file1);
	system("pause");
}
