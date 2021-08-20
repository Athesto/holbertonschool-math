#include "holberton.h"
#include <math.h>

/**
 * division - the division operation to complex numbers.
 * @c1: dividend
 * @c2: divisor
 * @c3: quotient
 */
void division(complex c1, complex c2, complex *c3)
{
	double divisor = pow(c2.re, 2) + pow(c2.im, 2);

	c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / divisor;
	c3->im = ((c1.re * c2.im) - (c1.im * c2.re)) / divisor;
}
