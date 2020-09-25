#include "holberton.h"

/**
 * more_numbers - prints from 0 to 14 ten times followed by new line.
 *
 * Return: always 0.
 */

void more_numbers(void)
{
	int w, v;

	for (w = 0; w < 10; w++)
	{
		for (v = 0; v <= 14; v++)
		{
			if (v / 10)
			{
				_putchar(v / 10 + '0');
			}
			_putchar(v % 10 + '0');
		}
		_putchar('\n');
	}
}
