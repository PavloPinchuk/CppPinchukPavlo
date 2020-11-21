#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef
struct Poly
{
	float koef;
	float st;
}Poly;

void vvod(Poly *t)
{
	printf("koef = ");
	scanf("%f", &(t->koef));
	printf("st = ");
	scanf("%f", &(t->st));
}

void vyvod(Poly *t)
{
	if (t->koef < 0)
	{
		printf(" - %.2f * x^%.2f", t->koef, t->st);
	}
	else
	{
		printf(" + %.2f * x^%.2f", t->koef, t->st);
	}
}

void vyvod_deriv(Poly *t)
{
	if (t->koef * t->st < 0)
	{
		printf(" - %.2f * x^%.2f", -(t->koef * t->st), t->st - 1);
	}
	else
	{
		printf(" + %.2f * x^%.2f", t->koef * t->st, t->st - 1);
	}
}

void add_Poly(const char *filename)
{
	struct Poly t;
	int n;
	printf("n = ");
	scanf("%d", &n);
	FILE *f1 = fopen(filename, "wb");
	for (int i = 0; i < n; i++)
	{
		vvod(&t);
		fwrite(&t, 1, sizeof(t), f1);
	}
	fclose(f1);
}

void print_Poly(const char *filename)
{
	struct Poly t;

	FILE *f = fopen(filename, "rb");
	float maxv = 0;
	while (!feof(f))
	{
		int r = fread(&t, 1, sizeof(t), f);
		if (r < sizeof(t)) break;
		vyvod(&t);
	}

	fclose(f);
}

void print_Poly_deriv(const char *filename)
{
	struct Poly t;

	FILE *f = fopen(filename, "rb");
	float maxv = 0;
	while (!feof(f))
	{
		int r = fread(&t, 1, sizeof(t), f);
		if (r < sizeof(t)) break;
		vyvod_deriv(&t);
	}

	fclose(f);
}

int main()
{
	add_Poly("4_2_8_file.bin");
	printf("\n");
	print_Poly("4_2_8_file.bin");
	printf("\n");
	print_Poly_deriv("4_2_8_file.bin");
	getchar();
	getchar();
}
