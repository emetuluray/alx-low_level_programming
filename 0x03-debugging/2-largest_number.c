#include "main.h"

/**
 * largest_number - returns the largest number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
{
	int largest;

	if (a >= b && b>= c)
	{
		largest = a;
	}
	else if (b >= a && b>= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
