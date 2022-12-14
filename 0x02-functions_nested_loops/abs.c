#include "main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value
 * @n: parameter of sunction
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return(n * -1);
}
