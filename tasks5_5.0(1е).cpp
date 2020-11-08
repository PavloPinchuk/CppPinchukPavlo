#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>
#include<time.h>

typedef
struct Pole
{
	char letter;
	int number;
}Pole;

Pole vvod_Pole()
{
	Pole res;
	printf("letter = ");
	scanf("%c", &res.letter);
	if (res.letter < 'a')
		res.letter = 'a';
	if (res.letter > 'h')
		res.letter = 'h';
	printf("number = ");
	scanf("%d", &res.number);
	if (res.number < 1)
		res.number = 1;
	if (res.number > 8)
		res.number = 8;
	return res;
}

void vyvod_Pole(const Pole x)
{
	printf("Pole: %c%d\n", x.letter, x.number);
}

int main()
{
	Pole x;
	x = vvod_Pole();
	vyvod_Pole(x);
	getchar();
	getchar();
}
