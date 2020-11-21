#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int vvod(int* arr, int n, char* fname)
{
	FILE* fp = fopen(fname, "wb");
	if (fp == NULL)
	{
		printf("problem with file write");
		return -1;
	}

	fwrite(arr, n, sizeof(arr[0]), fp);

	fclose(fp);

	return EXIT_SUCCESS;
}

int vyvod(char* fname)
{
	FILE* fp = fopen(fname, "rb");
	int res;
	if (fp == NULL)
	{
		printf("problem with file read");
		return -1;
	}

	while (!feof(fp))
	{
		int item;
		res = fread(&item, 1, sizeof(item), fp);
		if (res < sizeof(item))
			break;
		printf("%d, ", item);
	}
	printf("\n");
	fclose(fp);

	return EXIT_SUCCESS;
}

int TaskA(int* arr, int n, char* fname)
{
	FILE* fp = fopen(fname, "wb");
	if (fp == NULL)
	{
		printf("problem with file write");
		return -1;
	}

	int *mas = new int[n];

	for (int i = 0, pi = 0, ni = 1; i < n; i++) {
		if (arr[i] >= 0) {
			mas[pi] = arr[i];
			pi += 2;
		}
		else {
			mas[ni] = arr[i];
			ni += 2;
		}
	}
	fwrite(mas, n, sizeof(arr[0]), fp);

	delete[]mas;
	fclose(fp);

	return EXIT_SUCCESS;
}

int TaskB(int* arr, int n, char* fname)
{
	FILE* fp = fopen(fname, "wb");
	if (fp == NULL)
	{
		printf("problem with file write");
		return -1;
	}

	int *mas1 = new int[n / 2 + 1];
	int k = 0, l = 0;
	int *mas2 = new int[n / 2 + 1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= 0)
		{
			mas1[k] = arr[i];
			k++;
		}
		else
		{
			mas2[l] = arr[i];
			l++;
		}
	}
	int *mas3 = new int[n];
	for (int i = 0, j = 0, h = 0; i < n; i++)
	{
		if (j < n / 2)
		{
			mas3[i] = mas1[j];
			j++;
		}
		else
		{
			mas3[i] = mas2[h];
			h++;
		}
	}
	fwrite(mas3, n, sizeof(arr[0]), fp);
	delete[]mas1;
	delete[]mas2;
	delete[]mas3;
	fclose(fp);

	return EXIT_SUCCESS;
}

int TaskC(int* arr, int n, char* fname)
{
	FILE* fp = fopen(fname, "wb");
	if (fp == NULL)
	{
		printf("problem with file write");
		return -1;
	}

	int *mas = new int[n];

	int *positiv = new int[n / 2 + 1];
	int pi = 0;
	int *negativ = new int[n / 2 + 1];
	int ni = 0;
	int *result = new int[n];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= 0)
		{
			positiv[pi] = arr[i];
			pi++;
		}
		else
		{
			negativ[ni] = arr[i];
			ni++;
		}
	}

	bool value = true;
	int iPos = 0;
	int iNeg = 0;
	for (int i = 0; i < n; i = i + 2)
	{
		if (value)
		{
			result[i] = positiv[iPos];
			result[i + 1] = positiv[iPos + 1];
			iPos = iPos + 2;
			value = false;
		}
		else
		{
			result[i] = negativ[iNeg];
			result[i + 1] = negativ[iNeg + 1];
			iNeg = iNeg + 2;
			value = true;
		}
	}
	fwrite(result, n, sizeof(arr[0]), fp);
	delete[]positiv;
	delete[]negativ;
	delete[]result;
	fclose(fp);

	return EXIT_SUCCESS;
}

int main()
{
	//Ввели в файл f
	char f[10] = "set1.dat";
	int ar[20];

	int n;
	printf("n = ");
	scanf("%d", &n);

	//n має ділитись на 4 (згідно умови задачі)
	if (n % 4 != 0)
	{
		printf("n / 4 must be int");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]);
	}
	vvod(ar, n, f);
	vyvod(f);

	char g[10] = "set2.dat";
	//Вивід з чергуванням через один
	TaskA(ar, n, g);
	vyvod(g);
	//Спочатку додатні, потім від'ємні
	TaskB(ar, n, g);
	vyvod(g);
	//Вивід з чергуваня через два
	TaskC(ar, n, g);
	vyvod(g);
	getchar();
	getchar();
}
