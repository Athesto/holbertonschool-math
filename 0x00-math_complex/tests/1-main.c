#include "../holberton.h"
#include "../0-display.c"
#include "../1-conjugate.c"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	complex c1;

	c1.re = 1;
	c1.im = 2;
	c1 = conjugate(c1);
	display_complex_number(c1);
	c1 = conjugate(c1);
	display_complex_number(c1);
	return (0);
}
