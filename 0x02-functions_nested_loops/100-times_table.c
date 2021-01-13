#include "holberton.h"

/**
 * print_times_table - prints the n times table.
 * @n: the n time to be print.
 */
void print_times_table(int n)
{
	int x, y;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				_putchar(y + '0');
			}
		}
	}
}
