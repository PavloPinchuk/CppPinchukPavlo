#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>
#include<time.h>

typedef
struct Circle
{
	float radius;
	float x;
	float y;
}Circle;

Circle vvod_Circle()
{
	Circle res;
	printf("radius = ");
	scanf("%f", &res.radius);
	if (res.radius < 0)
		res.radius = 0;
	printf("x = ");
	scanf("%f", &res.x);
	printf("y = ");
	scanf("%f", &res.y);
	return res;
}

void vyvod_Circle(const Circle x)
{
	printf("Circle:\nradius = %f\ncenter = (%f, %f)\n", x.radius, x.x, x.y);
}

int main()
{
	Circle x;
	x = vvod_Circle();
	vyvod_Circle(x);
	getchar();
	getchar();
}
