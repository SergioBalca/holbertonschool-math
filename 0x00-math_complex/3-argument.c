#include "holberton.h"
#define PI 3.14159265

/**
 * argument- returns the argument of a given complex number
 * @c: a given complex number
 * Return: the argument of c
 */

double argument(complex c)
{
	double arg;

	if (c.re > 0 && c.im > 0) /* first quadrant*/
	{
		arg = atan(c.im / c.re);
	}

	if (c.re < 0 && c.im > 0) /* second quadrant */
	{
		arg = atan(c.im / c.re) + PI;
	}

	if (c.re < 0 && c.im < 0) /* third quadrant */
	{
		arg = atan(c.im / c.re) - PI;
	}

	if (c.re > 0 && c.im < 0) /* fourth quadrant */
	{
		arg = atan(c.im / c.re);
	}

	return (arg);
}
