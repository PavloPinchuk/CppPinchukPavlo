#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef
struct Dict
{
	int key;
	char data[50];
}Dict;

void vvod(Dict *t)
{
	printf("key = ");
	scanf("%d", &(t->key));
	printf("data = ");
	scanf("%s", t->data);
}

void add_Dict(const char *filename)
{
	struct Dict t;
	int n;
	printf("n = ");
	scanf("%d", &n);
	FILE *f1 = fopen(filename, "wb");
	for (unsigned i = 0; i < n; i++)
	{
		vvod(&t);
		fwrite(&t, 1, sizeof(t), f1);
	}
	fclose(f1);
}

Dict find(int x, char* fname)
{
	Dict res;
	char str[50];
	FILE *f = fopen(fname, "rb");

	while (!feof(f))
	{
		int r = fread(&res, 1, sizeof(res), f);
		if (res.key == x)
		{
			return res;
		}
			
		if (r < sizeof(res))
			break;
	}
	strcpy(res.data, "NoData");
	return res;
}

int main()
{
	add_Dict("4_2_8_file.bin");
	Dict r = find(2, "4_2_8_file.bin");
	printf("s = %s", r.data);
	getchar();
	getchar();
}