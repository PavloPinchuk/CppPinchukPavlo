#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Max(double x, double y, double z)
{
	if (x * y > x * z)
	{
		if (x * y > y * z)
			return x * y;
		else
			return y * z;
	}
	else
	{
		if (x * z > y*z)
		{
			return x*z;
		}
		else
			return y*z;
	}
}

int main()
{
	double x, y, z;
	printf("x = ");
	scanf("%lf", &x);
	printf("y = ");
	scanf("%lf", &y);
	printf("z = ");
	scanf("%lf", &z);
	printf("max = %.2lf", Max(x, y, z));
	getchar();
	getchar();
}