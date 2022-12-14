#include "main.h"

/**
 * print_sign - Entry
 * Return: return 1 for c > 0, return 0 for c = 0, return -1 for c < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n = 0)
	{
		_putcar(-);
		return (0);
	}
	else
	{	
		_putchar(-);
		return (-1);
	}
}
