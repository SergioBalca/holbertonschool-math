#include "holberton.h"


/**
 * substraction- performs the substraction operation to complex numbers
 * @c1: first complex number
 * @c2: second complex number
 * @c3: a pointer to the substraction of c1 and c2
 * Return: Nothing
 */

void substraction(complex c1, complex c2, complex *c3)
{
	complex sub;

	sub.re = c1.re - c2.re;
	sub.im = c1.im - c2.im;
	c3->re = sub.re;
	c3->im = sub.im;

}
