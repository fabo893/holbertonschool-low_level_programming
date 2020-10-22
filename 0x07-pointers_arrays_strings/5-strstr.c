#include "holberton.h"

/**
 * *_strstr - locate a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{

	int x, y;

	for (x = 0; needle[x] != '\0'; x++)
	{
		for (y = 0; haystack[y] != '\0'; y++)
		{
			if (haystack[y] == needle[x])
			{
				return (&needle[x]);
			}
		}
	}
	return (NULL);
}
