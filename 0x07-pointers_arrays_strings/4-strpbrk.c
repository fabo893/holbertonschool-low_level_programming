#include "holberton.h"

/**
 * *_strpbrk - search a string
 * @s: pointer
 * @accept: pointer
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				return (&s[x]);
			}
		}
	}
	return (NULL);
}
