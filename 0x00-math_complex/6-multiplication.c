#include "holberton.h"
/**
 * multiplication - the multiplication operation to complex numbers.
 * @c1: multiplicand
 * @c2: multiplet
 * @c3: product
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re * c2.re + -1 * (c1.im * c2.im);
	c3->im = c1.re * c2.im + c1.im * c2.re;
}
