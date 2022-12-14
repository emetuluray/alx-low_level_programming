#include "main.h"

/**
 * print_last_digit - print the last digit
 * @num: the parameter of function
 * Return: last digit
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');

	return(last_digit);
}
