#include "holberton.h"


void helper_times(int n)
{
	int x, y, mul = 0;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				mul = x * y;
				if (y != 0)
				{
					if (mul >= 0 && mul <= 9)
					{
						printf(",   %d", mul);
					}
					else if (mul >= 10 && mul <= 99)
					{
						printf(",  %d", mul);
					}
					else
					{
						printf(", %d", mul);
					}
				} else
				{
					printf("%d", mul);
				}
			}
			printf("\n");
		}
	}
}



/**
 * print_times_table - prints the n times table.
 * @n: the n time to be print.
 */
void print_times_table(int n)
{
	helper_times(n);
}
