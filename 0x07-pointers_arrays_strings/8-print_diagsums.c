#include "holberton.h"

/**
 * print_diagsums - print the sum
 * @a: pointer
 * @size: integer
 */
void print_diagsums(int *a, int size)
{

	int index1, index2, suma1 = 0, suma2 = 0;
	int pos = 0;

	for (index1 = 0; index1 < size; index1++)
	{
		for (index2 = 0; index2 < size; index2++)
		{
			if (index1 == index2)
			{
				suma1 = suma1 + a[pos];
			}
			pos++;
		}
	}
	printf("%d, ", suma1);

	index1--;
	pos--;

	for (; index1 >= 0; index1--)
	{
		pos = pos - (size - 1);
		suma2 = suma2 + a[pos];
	}
	printf("%d\n", suma2);
}
