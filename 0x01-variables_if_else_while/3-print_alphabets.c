#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	char ch;
	char le;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (le = 'A'; le <= 'Z'; le++)
	{
		putchar (le);
	}
	putchar('\n');
	return (0);
}
