#include <stdio.h>
#include "calc.h"

int main() {
	double a, b, c;
	double x, x2;
	printf("Input a:\n");
	scanf("%lf", &a);
	printf("Input b:\n");
	scanf("%lf", &b);
	printf("Input c:\n");
	scanf("%lf", &c);
	calc(a, b, c, &x, &x2);
	getchar();
	getchar();
return 0;
}
