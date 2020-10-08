#include "holberton.h"

/**
 * _strncpy - copy a string
 * @dest: variable char
 * @src: variable char
 * @n: variable int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}

	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
