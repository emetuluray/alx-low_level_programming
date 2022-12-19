#include "main.h"

/**
 * swap_int - swaps the valus of int a and b
 * @a: first int
 * @b: second int
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
