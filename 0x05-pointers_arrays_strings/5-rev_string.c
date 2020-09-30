#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: parameter
 */
void rev_string(char *s)
{
	int x, y, z = 0;
	char a;

	for (x = 0; s[x] != '\0'; x++)
		;

	for (y = (x - 1); y > z; y--)
	{
		a = *(s + z);
		*(s + z) = *(s + y);
		*(s + y) = a;
		z++;
	}
}
