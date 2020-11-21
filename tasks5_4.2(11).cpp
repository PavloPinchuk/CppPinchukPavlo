#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct Rect
{
	unsigned num;
	float x;
	float y;
}Rect;

int vvod_Rect(Rect *r)
{
	printf("input n, x, y: ");
	scanf("%u", &(r->num));
	scanf("%f", &(r->x));
	scanf("%f", &(r->y));

	return EXIT_SUCCESS;
}

int addRect(char * fname)
{
	unsigned n;
	Rect r1;
	scanf("%d", &n);

	FILE *f = fopen(fname, "wb");

	for (unsigned i = 0; i < n; i++)
	{
		vvod_Rect(&r1);
		fwrite(&r1, i, sizeof(r1), f);
	}

	fclose(f);
	return EXIT_SUCCESS;
}

int maxRect(char * fname)
{
	unsigned n;
	Rect r1;

	FILE *f = fopen(fname, "rb");
	float maxv = 0;
	while (!feof(f))
	{
		int r = fread(&r1, 1, sizeof(r1), f);
		if (r < sizeof(r1)) break;

		float w = r1.x;
		float h = r1.y;

		if (w*h > maxv)
		{
			maxv = w*h;
			n = r1.num;
		}
	}

	fclose(f);
	return n;
}

int main()
{
	addRect("rect.dat");

	printf("%u", maxRect("rect.dat"));
	getchar();
	getchar();
}