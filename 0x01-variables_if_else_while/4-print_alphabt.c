#include <stdio.h>

/**
 * main - Entry
 *
 * Description: prints alphabets a to z without e and q, returns alphabets
 * int main: prints alpahets
 * return: Always 0 (success)
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
