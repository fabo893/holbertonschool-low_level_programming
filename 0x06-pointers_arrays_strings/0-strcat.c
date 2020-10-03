#include "holberton.h"

/**
 * *_strcat: pointer
 * @dest: first parameter
 * @src: second parameter
 * Return: return a pointer to 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	return (dest);
}
