#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 100

bool CheckUnic(char mas[], int n, char c)
{
	for (int i = 0; i < n; i++)
	{
		if (mas[i] == c)
			return false;
	}
	return true;
}

void swap(char *xp, char *yp)
{
	char temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void SortByCharNumber(char mas[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if ((int)mas[j] >(int)mas[j + 1])
			{
				swap(&mas[j], &mas[j + 1]);
			}
		}
	}
}

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

	char arr[N];
	int n = 0;
	arr[0] = mas[0];
	n++;
	for (int i = 0; i < k; i++)
	{
		if (CheckUnic(arr, n, mas[i]))
		{
			arr[n] = mas[i];
			n++;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%c", arr[i]);
	}
	printf("\n");

	SortByCharNumber(arr, n);
	for (int i = 0; i < n; ++i)
	{
		printf("%c", arr[i]);
	}
	printf("\n");

	FILE *file1 = fopen("txt1_sorted.txt", "wt");

	for (int i = 1; i < n; i++)
	{
		fputc(arr[i], file1);
	}
	fclose(file1);
	system("pause");
}
