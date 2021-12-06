#include "rectangle.h"

/**
 * rectangle_method- calculates the integral of a
 * function, using the rectangle method
 * @a: the first limit of the integral
 * @b: the second limit of the integral
 * @steps: the number of rectangles
 * Return: the integral of the given function
 */

double rectangle_method(double a, double b, int steps)
{
	double dx = (b - a) / steps;
	double p1 = dx;
	double integral = 0;
	int count = 1;
	double f1 = 0;

	while (count < steps)
	{
		f1 = 1 / (1 + pow(p1, 2));
		integral += dx * f1;
		p1 += dx;
		count++;
	}
	return (integral);
}
