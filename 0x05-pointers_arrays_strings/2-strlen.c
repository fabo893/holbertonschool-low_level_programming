#include "holberton.h"
#include <string.h>

/**
 * _strlen - returns th length of a string.
 * @s: parameter
 * Return: always zero
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; )
		x++;

	return (x);
}
