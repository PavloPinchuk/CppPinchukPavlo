#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>
#include<time.h>

typedef
struct Book
{
	int shifr;
	char avtor[50];
	char title[50];
}Book;

Book vvod_Book()
{
	Book res;
	printf("shifr = ");
	scanf("%d", &res.shifr);
	printf("avtor = ");
	scanf("%s", res.avtor);
	printf("title = ");
	scanf("%s", res.title);
	return res;
}

void vyvod_Book(const Book x)
{
	printf("Shifr = %d\n", x.shifr);
	printf("Avtor = ");
	puts(x.avtor);
	printf("Title = ");
	puts(x.title);
	printf("\n");
}
/////////////////////////////////////
typedef
struct Reader
{
	int nomer;
	char surname[50];
	char date[50];
}Reader;

Reader vvod_Reader()
{
	Reader res;
	printf("nomer = ");
	scanf("%d", &res.nomer);
	printf("surname = ");
	scanf("%s", res.surname);
	printf("date = ");
	scanf("%s", res.date);
	return res;
}

void vyvod_Reader(const Reader x)
{
	printf("Nomer = %d\n", x.nomer);
	printf("Surname = ");
	puts(x.surname);
	printf("Date = ");
	puts(x.date);
}

int main()
{
	Book x;
	x = vvod_Book();
	vyvod_Book(x);
	Reader y;
	y = vvod_Reader();
	vyvod_Reader(y);
	getchar();
	getchar();
}
