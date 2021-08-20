#include "holberton.h"

/**
 * division - the division operation to complex numbers.
 * @c1: dividend
 * @c2: divisor
 * @c3: quotient
 */
void division(complex c1, complex c2, complex *c3)
{
	double divisor = c2.re * c2.re + c2.im * c2.im;

	c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / divisor;
	c3->im = ((c1.im * c2.re) - (c1.re * c2.im)) / divisor;
}
