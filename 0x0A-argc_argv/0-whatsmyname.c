#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints file name
 * @argc: first parameter
 * @argv: second parameter
 * Description: a prigram that prints its name
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
