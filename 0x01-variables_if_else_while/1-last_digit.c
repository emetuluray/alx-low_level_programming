#include  <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is 0 and is 0", n);
	}
	else	
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
	}
	return (0);
}

