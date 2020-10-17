#include "holberton.h"

/**
 * puts_half -prints half of a string
 * @str: parameter
 */
void puts_half(char *str)
{
	int length_of_the_string, y, n;

	for (length_of_the_string = 0; str[length_of_the_string] != '\0'; )
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 == 0)
	{
		for (y = length_of_the_string / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	}
	else
	{
		for (n = (length_of_the_string - 1) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
