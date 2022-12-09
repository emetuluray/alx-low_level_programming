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
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is", (n % 10),"and is greater than 5", n);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is 0 and is 0", n);
	}
	else	
	{
		printf("Last digit of %d is", (n % 10), "and is less than 6 and not 0", n);
	}
	return (0);
}

