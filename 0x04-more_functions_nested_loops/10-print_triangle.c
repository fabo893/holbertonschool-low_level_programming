#include "holberton.h"

/**
 * print_triangle - prints a # triangle from the given size.
 * @size: value that determines triangle size.
 */

void print_triangle(int size)
{
	int v, w;

	for (v = 0; v < size; v++)
	{
		for (w = 1; w < size - v; w++)
		{
			_putchar(' ');
		}
		for (w = 0; w < v + 1; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
