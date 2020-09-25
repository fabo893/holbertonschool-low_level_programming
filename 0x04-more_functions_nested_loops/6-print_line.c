#include "holberton.h"

/**
 * print_line - draws a straight line in terminal.
 * @n: amount of lines.
 *
 * Return: lines in specified amount.
 */

void print_line(int n)
{
	int v;

	for (v = 0; v < n; v++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
