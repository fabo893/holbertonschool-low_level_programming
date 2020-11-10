#include "holberton.h"

/**
 * primeprot - prototype function
 * @x: - Variable int
 * @y: - Variable int
 * Return: int value
 */

int primeprot(int x, int y)
{
	if (x % y == 0 && y != (x / 2))
		return (0);
	else if (y >= (x / 2))
		return (1);
	else
		return (primeprot(x, y + 1));
}

/**
 * is_prime_number - verify the prime numbers
 * @n: number to verify
 * Return: zero or one
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (primeprot(n, 2));
	else
		return (0);
}
