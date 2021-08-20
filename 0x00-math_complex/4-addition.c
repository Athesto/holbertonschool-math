#include "holberton.h"

/**
 * addition - addition operation to complex numbers.
 * @c1: input num1
 * @c2: input num2
 * @c3: output
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
