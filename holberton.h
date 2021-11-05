#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
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

#endif /* MAIN_H */
