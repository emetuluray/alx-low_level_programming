#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: string that will be appended
 * @src: string to be concatenated
 * Return: Return pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index]; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
