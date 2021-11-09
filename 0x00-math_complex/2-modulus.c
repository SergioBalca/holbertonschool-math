#include "holberton.h"

/**
 * modulus- returns the module of a given complex number
 * @c: a given complex number
 * Return: the module of the complex number c
 */

double modulus(complex c)
{
	double mod;
	
	mod = sqrt(pow(c.re, 2) + pow(c.im, 2));

	return (mod);
}
