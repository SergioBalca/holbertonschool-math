#include "holberton.h"
#include <stdio.h>

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
