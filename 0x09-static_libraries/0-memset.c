#include "main.h"

/**
 * _memset - function fill the first @n bytes of memory area pointed
 * to by @s with constant byte @b
 * @n: bytes of the memory areapointed by @s
 * @s: with the constant byte @b
 * @b: memory area pointer
 * Return: a pointer to memory location @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
