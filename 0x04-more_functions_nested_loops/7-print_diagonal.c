#include "holberton.h"

/**
 * print_diagonal - print a diagonal line a specified amount
 * @n: value for amount of times
 */

void print_diagonal(int n)
{
	int v, w;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (v = 0; v < n; v++)
		{
			for (w = 0; w < v; w++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
