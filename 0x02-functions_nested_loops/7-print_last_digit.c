#include "holberton.h"

/**
 * print_last_digit - prints last digit
 * @n: int
 *Return: value n
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 10)
	{
		n = n * -1;
	}
	_putchar(n + '0');

	return (n);
}
