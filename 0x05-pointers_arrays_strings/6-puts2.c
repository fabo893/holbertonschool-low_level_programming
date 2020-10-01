#include "holberton.h"

/**
 * puts2 - print every other character of a string
 * @str: parameter
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x+=2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
