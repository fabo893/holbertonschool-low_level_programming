#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: parameter
 */
void print_rev(char *s)
{
	int x, y;

	for (x = 0; s[x] != '\0'; )
	{
		x++;
	}

	for (y = x - 1; y >= 0; y--)
	{
		_putchar(*(s + y));
	}
	_putchar('\n');
}
