#include <stdio.h>

/**
 * main - Entry
 * return: Always 0
 */

int main(void) /*program to print alphabet except e an q*/
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar (ch);
	}
	putchar('\n');
	return (0);
}
