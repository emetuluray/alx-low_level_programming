#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int num1; 
	
	for (num1 = 0; num1 < 10; num1++)
	{
		putchar(num1);
		if (num1 != 9)
		{
			putchar(',');
			putchar();
		}
	}
	putchar('\n');
	return (0);
}
