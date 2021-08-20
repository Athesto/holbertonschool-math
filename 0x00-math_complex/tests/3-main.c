#include "../holberton.h"
#include "../3-argument.c"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	complex c1;
	double arg;

	c1.re = 1;
	c1.im = 2;
	arg = argument(c1);
	printf("%f\n", arg);
	return (0);
}
