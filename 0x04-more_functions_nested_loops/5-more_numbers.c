#include "main.h"

/**
 * more numbers - prints the numbers 1-14 ten times
 */

void more_numbers(void)
{
	int times, num;

	for (times =0; times <= 9; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) +'0');
		}
		_putchar('\n');
	}
}
