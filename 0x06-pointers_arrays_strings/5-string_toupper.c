#include "main.h"

/**
 * string_touuper - change lowercase to uppercase
 * @s: string
 * Return: char
 */

char *string_touuper(char *s)
{

	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
			i++;
	}
	return (s);
}
