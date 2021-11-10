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
	double n = 2;

	if (c.re && !c.im)
	{
		if (fmod(c.re, n) == 0)
			printf("%0.0f\n", c.re);
		else
			printf("%.1f\n", c.re);
	}

	if (c.im)
	{
		if (c.im > 0)
		{
			if (c.im == 1)
			{
				printf("0.0%f + i\n", c.re);
			}
			else
			{	if (fmod(c.im, n) == 0)
					printf("%0.0f + %0.0fi\n", c.re, c.im);
				else
					printf("%.1f + %.1fi\n", c.re, c.im);
			}
		}
		else
		{
			if (c.im == -1)
			{
				printf("%0.0f - i\n", c.re);
			}
			else
			{
				if (fmod(c.im, n) == 0)
					printf("%0.0f - %0.0fi\n", c.re, -c.im);
				else
					printf("%f - %fi\n", c.re, -c.im);
			}
		}
	}
}
