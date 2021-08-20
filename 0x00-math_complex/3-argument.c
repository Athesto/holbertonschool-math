#include "holberton.h"
#include <math.h>
/**
 * argument - the argument of a given complex number.
 * @c: input complex number
 * Return: argument of number
 */
double argument(complex c)
{
	double theta = atan(ABS(c.im) / ABS(c.re));

	if (c.re < 0)
		theta = 1 - theta;
	if (c.im < 0)
		theta = -theta;

	return (theta);
}
