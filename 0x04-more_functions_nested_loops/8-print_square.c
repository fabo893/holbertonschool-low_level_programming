#include "holberton.h"

/**
 * print_square - prints a square
 * @size: size of square
 *
 * Return: a square.
 */

void print_square(int size)
{
	int v, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (v = 0; v < size; v++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
