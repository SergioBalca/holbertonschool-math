#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void addition(complex c1, complex c2, complex *c3)
{
	complex sum;

	sum.re = c1.re + c2.re;
	sum.im = c1.im + c2.im;
	c3->re = sum.re;
	c3->im = sum.im;
}
