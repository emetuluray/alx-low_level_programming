#include "main.h"

/**
 * _islower - checks for lowercase characterer
 * @e: it is the parameter
 * Return: returns 1 (success)
 */

int _islower(int e)
{

	if (e >= 'a' && e <= 'z')
		return (1);
	else
		return (0);
}
