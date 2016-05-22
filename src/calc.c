#include <stdio.h>
#include <math.h>
#include "calc.h"

int calc(double a, double b, double c, double *x, double *x2) {
	double d;
	d = b * b - 4 * a * c;
	if ((b == 0) && (a == 0)) {
		return -1;
	}
	if (a == 0) {
		*x = -1 * c / b;
		return 1;
	}
	if (d > 0) {
		*x = (-1 * b + sqrt(d)) / (2 * a);
		*x2 = (-1 * b - sqrt(d)) / (2 * a);
		return 2;
	}
	if (d == 0) {
		*x = (-1 * b + sqrt(d)) / (2 * a);
		return 1;
	}
	return 0;
}
