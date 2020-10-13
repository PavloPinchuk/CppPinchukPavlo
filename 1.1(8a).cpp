#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>

int main() {
	double a1, b1, c1, a2, b2, c2;
	double x, y;
	double b0, c0; //Додаткові змінні
	scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &c1, &a2, &b2, &c2);
	if (fabs(a1*b2 - a2*b1) >= 0.0001) {
		if (a1 != 0) {
			b0 = b2 - (b1 / a1*a2);
			c0 = -(c2 - (c1 / a1*a2));
			y = c0 / b0;
			x = (-c1 - ((b1*c0) / b0)) / a1;
			printf("x=%lf \ny=%lf \n", x, y);
		}
		else {
			b0 = b1 - (b2 / a2*a1);
			c0 = -(c1 - (c2 / a2*a1));
			y = c0 / b0;
			x = (-c2 - ((b2*c0) / b0)) / a2;
			printf("x=%lf \ny=%lf \n", x, y);
		}

	}
	else {
		puts("The equation is not satisfied");
	}
	system("pause");
	return 0;
}
