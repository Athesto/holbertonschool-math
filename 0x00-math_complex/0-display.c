#include "holberton.h"
/**
 * display_complex_number - displays the complex numbers,
 * followed by a new line.
 * @c: input
 */
void display_complex_number(complex c)
{

	if (c.re < 0)
		printf("- %g", -1 * c.re);
	else
		printf("%g", c.re);

	if (c.im < 0)
		printf(" - %gi", -1 * c.im);
	else if (c.im > 0)
		printf(" + %gi", c.im);

	puts("");
}
