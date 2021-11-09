#include "holberton.h"
#include <stdio.h>

/**
 * division- performs the division operation to complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: a pointer to the division of c1 and c2
 * Return: Nothing
 */

void division(complex c1, complex c2, complex *c3)
{
	complex div, c4, c5, conj;

	conj = conjugate(c2);
	multiplication(c1, conj, &c4);
	multiplication(c2, conj, &c5);
	div.re = c4.re / c5.re;
	div.im = c4.im / c5.im;

	c3->re = div.re;
	c3->im = div.im;
}
