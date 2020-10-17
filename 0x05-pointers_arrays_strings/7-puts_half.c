#include "holberton.h"

/**
 * puts_half -prints half of a string
 * @str: parameter
 */
void puts_half(char *str)
{
	int length_of_the_string, n;

	for (length_of_the_string = 0; str[length_of_the_string] != '\0'; )
	{
		length_of_the_string++;
	}

	length_of_the_string += 1;

	for (n = length_of_the_string / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
