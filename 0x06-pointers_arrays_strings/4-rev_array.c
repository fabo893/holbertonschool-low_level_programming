#include "holberton.h"

/**
 * reverse_array - prototype function
 * @a: - Variable int pointer
 * @n: - Variable int
 * Return: int value
 */

void reverse_array(int *a, int n)
{
	int b = 0, c;

	n--;
	while (b <= n)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
		b++;
		n--;
	}
}
