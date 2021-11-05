#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number- displays complex numbers in binomial
 * representation
 *@c: a complex number
 * Return: Always 0.
 */

void display_complex_number(complex c)
{
	if (c.re && c.im)
	{
		printf("%0.0f + %0.0fi\n", c.re, c.im);
	}

}
