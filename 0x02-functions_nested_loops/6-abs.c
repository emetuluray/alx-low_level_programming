#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes absolute value
 * @n: parameter of function
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
