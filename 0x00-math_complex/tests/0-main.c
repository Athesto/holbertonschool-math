#include "../holberton.h"
#include "../0-display.c"
#include <stdio.h>

/**
 * main - check the code display_complex_number.
 *
 * Return: Always 0.
 */
int main(void)
{
	complex c1;

	double range[] = {-4.54, -4, 0, 1, 2, 4.5};
	size_t i, j;

	for (i = 0; i < sizeof(range) / sizeof(range[0]); i++)
	{
		c1.re = range[i];
		for (j = 0; j < sizeof(range) / sizeof(range[0]); j++)
		{
			c1.im = range[j];
			display_complex_number(c1);
		}
		puts("");
	}

	return (0);
}
