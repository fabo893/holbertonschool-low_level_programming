#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: parameter
 */
void print_rev(char *s)
{
	int x;

	for (x = 64; s[x] >= '\0'; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
