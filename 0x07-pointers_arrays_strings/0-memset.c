#include "holberton.h"

/**
 * *_memset - fill memory
 * @s: pointer
 * @b: variable
 * @n: integer
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x <= n - 1; x++)
	{
		s[x] = b;
	}
	return (s);
}
