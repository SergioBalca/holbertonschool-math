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

	if (c.re && !c.im)
	{
		printf("%0.0f\n", c.re);
	}

	if (c.im)
	{
		if (c.im > 0)
		{
			if (c.im == 1)
			
				printf("%f + i\n", c.re);
			
			else
				printf("%f + %fi\n", c.re, c.im);
			
		}
		else
		{
			if (c.im == -1)
			
				printf("%f - i\n", c.re);
			
			else
				printf("%f - %fi\n", c.re, -c.im);
			
		}
	}
}
