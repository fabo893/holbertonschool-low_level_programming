#include "holberton.h"

/**
 * *_memcpy - copy the memory area
 * @dest: pointer
 * @src: pointer
 * @n: unsigned integer
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
