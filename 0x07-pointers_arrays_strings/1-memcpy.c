#include "main.h"

/**
 * _memcpy - function copies bytes from @src memory to @dest
 * @n: function copies
 * @dest: memory destination
 * @src: source bytes
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	return (dest);
}
