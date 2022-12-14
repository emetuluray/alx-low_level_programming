#include "main.h"

/**
 * main - Entry
 * @c: it is the parameter
 * Return: returns 1 if c is capital
 */

int _isalpha(int c)
{
	if (c >= 'A' &&  c <= 'Z')
		return (1);
	else
		return (0);
}
