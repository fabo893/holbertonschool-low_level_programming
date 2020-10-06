#include "holberton.h"

/**
 * print_array - print an array
 * @a: variable that represent an array
 * @n: variable to represent the number of elements
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
	}
	printf("\n");
}
