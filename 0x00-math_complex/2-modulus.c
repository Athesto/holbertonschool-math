#include "holberton.h"
#include <math.h>
/**
 * modulus - returns the modulus of a given complex number.
 * @c: input complex number
 * Return: modulus of c
 */
double modulus(complex c)
{
	return (sqrt(pow(c.re, 2) + pow(c.im, 2)));
}
