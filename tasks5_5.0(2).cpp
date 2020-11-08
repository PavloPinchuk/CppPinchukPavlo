#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>

typedef
struct Pole
{
	int x;
	int y;
}Pole;

Pole vvod()
{
	Pole res;
	printf("X = ");
	scanf("%d", &res.x);
	printf("Y = ");
	scanf("%d", &res.y);
	return res;
}

void vyvod(const Pole p)
{
	printf("(x: %d, y: %d)\n", p.x, p.y);
}

bool Check(const Pole f, const Pole p)
{
	if (f.x == p.x || f.y == p.y)
		return true;
	if (abs(f.x - p.x) == abs(f.y - p.y))
		return true;
	return false;
}

int main()
{
	Pole ferz;
	ferz = vvod();
	vyvod(ferz);

	Pole pole;
	pole = vvod();
	vyvod(pole);

	if (Check(ferz, pole))
		printf("Mozhe");
	else
		printf("Ne mozhe");
	getchar();
	getchar();
}
