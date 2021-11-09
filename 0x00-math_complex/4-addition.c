#include "holberton.h"
#include <stdio.h>

/**
 * addition- performs the addition operation to complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: a pointer to the addition of c1 and c2
 * Return: Nothing
 */

void addition(complex c1, complex c2, complex *c3)
{
	complex sum;

	sum.re = c1.re + c2.re;
	sum.im = c1.im + c2.im;
	c3->re = sum.re;
	c3->im = sum.im;
}
