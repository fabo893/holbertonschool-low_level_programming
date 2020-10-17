#include "holberton.h"

/**
 * puts_half -prints half of a string
 * @str: parameter
 */
void puts_half(char *str)
{
	int x, n;

	for (x = 0; str[x] != '\0'; )
	{
		x++;
	}

	x += 1;

	for (n = x / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
