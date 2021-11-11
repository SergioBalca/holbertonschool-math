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
	complex div, conj, c4, c5;

	conj = conjugate(c2);
	multiplication(c1, conj, &c4); /* numerator */
	multiplication(c2, conj, &c5); /* denotinator */

	if (c2.re != 0 && c2.im != 0)
	{
		if (c5.re != 0)
		{
			div.re = c4.re / c5.re;
			div.im = c4.im / c5.re; /*c5.im = 0*/

			c3->re = div.re;
			c3->im = div.im;
		}
	}
}

/**
 * multiplication- performs the multiplication operation to complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: a pointer to the multiplication of c1 and c2
 * Return: Nothing
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	complex mul;

	mul.re = c1.re * c2.re - c1.im * c2.im;
	mul.im = c1.re * c2.im + c1.im * c2.re;

	c3->re = mul.re;
	c3->im = mul.im;

}


/**
 * conjugate- conjugates a complex number
 * @c: complex number
 * Return: the conjugate of argument c
 */

complex conjugate(complex c)
{
	if (c.re && !c.im)
	{
		c.re = c.re;
	}
	if (!c.re && c.im)
	{
		c.im = -c.im;
	}
	if (c.re && c.im)
	{
		c.re = c.re;
		c.im = -c.im;
	}
	return (c);
}
