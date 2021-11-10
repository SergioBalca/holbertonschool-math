#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <math.h>
/**
 * struct complex- Defines the raeal and imaginary part
 * of a complex number
 * @re: real part of complex number
 * @im: imaginary part of a complex number
 *
 * Description: struct complex defines the real part and
 * imaginary part of a complex number, to later display
 * this number in its binomial representation
 */

typedef struct complex
	{
		double re;
		double im;
	} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
double argument(complex c);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg (double m, double arg, complex *c3);

#endif /* MAIN_H */
