#include "holberton.h"
#include <stdio.h>

/**
 * complex_from_mod_arg- function that update the real and the imaginary
 * parts of a complex number given its modulus and arguments.
 * @m: modulus of complex number
 * @arg: argument of complex number
 * @c3: a pointer to the struct complex
 * Return: Nothing
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = arg * cos(m);
	c3->im = arg * sin(m);
}
