#include "holberton.h"

/**
 * puts_half -prints half of a string
 * @str: parameter
 */
void puts_half(char *str)
{
	int x, y, n;

	for (x = 0; str[x] != '\0'; x++)
	{
		;
	}
	if (x % 2 == 0)
	{
		for (y = x / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	}
	else
	{
		for (n = (x - 1) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
