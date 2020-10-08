#include "holberton.h"

/**
 * *leet - prototype function
 * @s: - Variable char pointer
 * Return: int value
 */

char *leet(char *s)
{
	int a, b;

	char l[] = "aeotlAEOTL";
	char n[] = "4307143071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; l[b] != '\0'; b++)
		{
			if (s[a] == l[b])
				s[a] = n[b];
		}
	}
	return (s);
}
