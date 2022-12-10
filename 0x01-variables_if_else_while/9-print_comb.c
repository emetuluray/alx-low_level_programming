#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)
{
	int num1 = '0';
	int num2 = '0';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			putchar(num1 ,num2);
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
