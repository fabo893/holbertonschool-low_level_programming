#include "holberton.h"

/**
 * *_strstr - locate a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, c, s;

	for (c = 0; needle[c] != '\0'; c++)
		;

	for (a = 0; haystack[a]; a++)
	{
		s = 0;
		for (b = 0; needle[b]; b++)
		{
			if (haystack[a + b] == needle[b] && haystack[a + b] != '\0')
				s++;
			else
			{
				s = 0;
				break;
			}
		}
		if (s == c)
			return (&haystack[a]);
	}
	return (0);
}
