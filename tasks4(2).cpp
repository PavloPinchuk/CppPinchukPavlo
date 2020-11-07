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
	fclose(file);
	printf("\n");
	if (isdigit(mas[0]) && isdigit(mas[1]))
	{
		if (int(mas[1]) % 2 == 0)
		{
			printf("parne\n");
		}
		else
			printf("neparne\n");
	}
	else
		printf("ne chisla");

	getchar();
}
