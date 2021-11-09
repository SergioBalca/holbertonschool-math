#include "holberton.h"

/**
 * division- performs the division operation to complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: a pointer to the division of c1 and c2
 * Return: Nothing
 */

void division(complex c1, complex c2, complex *c3)
{
	double mod1, mod2, arg1, arg2, mod_result, arg_result;
	complex div;

	mod1 = modulus(c1);
	mod2 = modulus(c2);
	arg1 = argument(c1);
	arg2 = argument(c2);
	mod_result = mod1 / mod2;
	arg_result = arg1 - arg2;

	div.re = mod_result * cos(arg_result);
	div.im = mod_result * sin(arg_result);
	c3->re = div.re;
	c3->im = div.im;
}

#include "holberton.h"

/**
 * modulus- returns the module of a given complex number
 * @c: a given complex number
 * Return: the module of the complex number c
 */

double modulus(complex c)
{
	double mod;

	mod = sqrt(pow(c.re, 2) + pow(c.im, 2));

	return (mod);
}

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
