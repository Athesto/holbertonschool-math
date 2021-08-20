#include "holberton.h"
#include <math.h>
/**
 * complex_from_mod_arg - update the real and the imaginary parts
 * of a complex number given its modulus and arguments.
 * @m: module
 * @arg: argument
 * @c3: output
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
