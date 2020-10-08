#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * @dest: first variable
 * @src: second variable
 * @n: integer
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	return (dest);
}
