#include "holberton.h"

/**
 * *_strcat - function
 * @dest: - char pointer
 * @src: - char pointer
 * Return: return a pointer
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
