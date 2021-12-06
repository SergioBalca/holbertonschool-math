#include "rectangle.h"

/**
 * simpson- calculates the integration of the given function
 * using the simpson method
 * @a: lower limit
 * @b: upper limit
 * @steps: number of subdivision to calculathe the integration
 * Return: the integration of the given function
 */

double simpson(double a, double b, int steps)
{
	double h = 0;
	int count = 1;
	double integration = 0;
	double f = 0;
	double p = 0;
	int even_steps;

	if (steps % 2 != 0)
	{
		even_steps = steps + 1;
	}
	else
	{
		even_steps = steps;
	}

	h = (b - a) / even_steps;
	integration = (1 / (1 + pow(a, 2))) + (1 / (1 + pow(b, 2)));

	while (count < even_steps)
	{
		p += a + h;
		f = 1 / (1 + pow(p, 2));

		if (count % 2 == 0)
		{
			integration += 2 * f;
		}
		else
		{
			integration += 4 * f;
		}

		count++;
	}
	integration = integration * (h / 3);
	return (integration);
}
