#include<stdio.h>
#include<string.h>

int main()
{
	char a[100] = "23ph+cd+5";
	char b[100];
	int k = 0, i = 0;
	while(i < strlen(a))
	{
		if (a[i] == 'p' && (i+1 < strlen(a) && a[i + 1] == 'h'))
		{
			b[k] = 'f';
			k++;
			i += 2;
		}
		else
		{
			b[k] = a[i];
			k++;
			i += 1;
		}
	}
	b[k] = '\0';
	puts(b);

	getchar();
}
