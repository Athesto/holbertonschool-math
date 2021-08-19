#include "holberton.h"
#include "stdlib.h"
#include "unistd.h"
/**
 * display_complex_number - displays the complex numbers,
 * followed by a new line.
 * @c: input
 */
void display_complex_number(complex c)
{
	char *buffer;
	double abs = c.im > 0 ? c.im : -1 * c.im;
	char sign = c.im >= 0 ? '+' : '-';
	size_t len;

	buffer = malloc(1024);
	if (!buffer)
		return;

	len = sprintf(buffer, "%g", c.re);

	if (c.im != 0)
	{
		len += sprintf(buffer + len, " %c ", sign);
		if (abs != 1)
			len += sprintf(buffer + len, "%g", abs);
		len += sprintf(buffer + len, "i");
	}

	puts(buffer);
	free(buffer);
}

