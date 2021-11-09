#include "holberton.h"

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
