#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * @dest: string to be appended
 * @src: string to be completed at end of dest
 * @n: integer parameter
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
