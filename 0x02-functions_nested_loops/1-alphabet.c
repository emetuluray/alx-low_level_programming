#include "main.h"

/**
 * print_alpahet - prints alphabet in lower cases
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int re;

	for (re = 'a'; re <= 'z'; re++)
		_putchar(re);

	_putchar('\n');
}
