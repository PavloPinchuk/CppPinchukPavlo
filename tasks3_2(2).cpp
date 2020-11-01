#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "23,4ar,tr";
	int firstInd = 20, lastInd = 20, cnt = 0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i] == ',')
		{
			if (firstInd == 20)
				firstInd = i;
			lastInd = i;
			cnt++;
		}
	}
	if (firstInd == 20 || lastInd == 20)
		printf("',' isn't in a");
	else
	{
		printf("%d\n", firstInd);
		printf("%d\n", lastInd);
	}
	printf("%d", cnt);
	getchar();
}
