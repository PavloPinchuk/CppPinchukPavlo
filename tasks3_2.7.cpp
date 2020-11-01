#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int ToSystem(unsigned n, unsigned b, char* word)
{
	char digit[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f' };
	int i = 0;
	unsigned m = n;
	while (m)
	{
		int d = m%b;

		word[i] = digit[d];
		m /= b;
		i++;
	}

	word[i] = '\0';

	for (int j = 0; j < (i + 1) / 2; j++)
	{
		char tmp = word[j];
		word[j] = word[i - j - 1];
		word[i - j - 1] = tmp;
	}

	return 0;
}

int main()
{
	unsigned n, m, i, b;

	char *word = new char[100];

	scanf("%u", &n);

	scanf("%u", &b);

	if (b <= 1 || b > 10)
	{
		printf("%d is forbidden base radix", b);
		return 1;
	}

	for (int i = 1; i < n; i++)
	{
		ToSystem(i, b, word);

		printf("w = %s\n", word);
	}
}
