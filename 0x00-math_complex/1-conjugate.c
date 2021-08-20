#include "holberton.h"
/**
 * conjugate - returns the conjugate of a given complex number.
 * @c: input complex number
 * Return: conjugate of c
 */
complex conjugate(complex c)
{
	c.im = -1 * c.im;
	return (c);
}
