#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>
#include<time.h>

typedef
struct Date
{
	int day;
	int month;
	int year;
}Date;

Date vvod()
{
	Date res;
	printf("day = ");
	scanf("%d", &res.day);
	printf("month = ");
	scanf("%d", &res.month);
	printf("year = ");
	scanf("%d", &res.year);
	return res;
}

void vyvod(const Date x)
{
	printf("Date = %2d.%2d.%4d\n", x.day, x.month, x.year);
}

Date yesterday(const Date x)
{
	int dayMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	Date res = x;
	if (x.day > 1)
	{
		res.day = x.day - 1;
		return res;
	}

	if (x.month > 1)
	{
		res.month--;
		res.day = dayMonth[res.month];
		return res;
	}

	if (x.month == 1)
	{
		res.year--;
		res.month = 12;
		res.day = dayMonth[res.month];
		return res;
	}
}

void DayWeek(const Date d)
{
	struct tm t;
	t.tm_year = d.year;
	t.tm_mon = d.month;
	t.tm_mday = d.day;
	mktime(&t);
	int z = t.tm_wday;
	printf("%d", z);
}

int main()
{
	Date x, y;
	x = vvod();
	vyvod(x);
	y = yesterday(x);
	vyvod(y);
	DayWeek(x);
	getchar();
	getchar();
}
