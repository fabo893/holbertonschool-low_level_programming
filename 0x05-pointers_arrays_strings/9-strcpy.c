#include "holberton.h"

/**
 * _strcpy - copy the string
 * @dest: first variable
 * @src: secornd variable
 * Return: return variable dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
