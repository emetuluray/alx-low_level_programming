#include "main.h"

/**
 * print_alphabet_x10 -prints alphabets 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int le;
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		for (le = 'a'; le <= 'z'; le++)
			_putchar(le);
			
		_putchar('\n');
	}
}
