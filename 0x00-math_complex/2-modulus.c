#include "holberton.h"
#include <math.h>
/**
 * modulus - returns the modulus of a given complex number.
 * @c: input complex number
 * Return: modulus of c
 */
double modulus(complex c)
{
	return (hypot(c.re, c.im));
}
