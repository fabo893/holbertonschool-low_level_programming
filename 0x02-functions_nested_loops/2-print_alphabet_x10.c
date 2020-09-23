#include "holberton.h"

/**
 * Print alphabet - Print
 *
 * Return: Print 10 times
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	y = 0;

	while (y < 10)
	{
	for (x = 1; x <= 25; x++)
	{
		_putchar(x);
	}
	y++;
		_putchar(10);
	}
}
