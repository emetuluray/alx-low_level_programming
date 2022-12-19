#include "main.h"

/**
 * _strlen - returns value of length of a string
 * @s: character to check
 * Description: this will return length of string
 * Return: Always 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
