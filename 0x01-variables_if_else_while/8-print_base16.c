#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int num = '0';
	char letter = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
