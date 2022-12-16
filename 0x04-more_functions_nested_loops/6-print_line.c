#include "main.h"

/**
 * print_line -Draws a straight line in the terminal
 * using
 * @n: the number of character to be printed
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_);
	}

	_putchar('\n');
}
