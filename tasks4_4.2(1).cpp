#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 100

int main()
{
	char *fname1 = "txt1.txt";
	char *fname2 = "txt2.txt";

	FILE *fp1 = fopen(fname1, "rt");
	FILE *fp2 = fopen(fname2, "rt");
	char *fname = "txt3.txt";
	FILE *fp3 = fopen(fname, "wt");
	if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
	{
		printf("Cant open file");
		return -1;
	}

	char buf1[N], buf2[N], buf3[N];

	char *file1_mas[N];
	char *file2_mas[N];

	int file_end = 0;
	int k1 = 0;
	int k2 = 0;

	while (1)
	{
		if (feof(fp1))
		{
			if (file_end == 2)
			{
				break;
			}

			file_end = 1;
		}
		else
		{
			fgets(buf1, N, fp1);
			strcpy(file1_mas[k1], buf1);
			k1++;
		}

		if (feof(fp2))
		{
			if (file_end == 1)
				break;
			file_end = 2;
		}
		else
		{
			fgets(buf2, N, fp2);
			strcpy(file2_mas[k2], buf2);
			k2++;
		}
	}
	fclose(fp1);
	fclose(fp2);

	int k3 = k2 > k1 ? k2 : k1;

	for (int i = 0; i < k3; ++i)
	{
		int i1 = i%k1;
		int i2 = i%k2;
		strcpy(buf3, file1_mas[i1]);
		buf3[strlen(buf3)] = '+';
		strcat(buf3, file2_mas[i2]);
		fputs(buf3, fp3);
	}

	fclose(fp3);
}
