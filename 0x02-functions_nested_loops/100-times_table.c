#include "holberton.h"

void print_times_table(int n)
{
	int x, y, mul;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				mul = x * y;
				if (y != 0)
				{
					printf(", ");
					if (mul <= 99)
						printf(" ");
					if (mul <= 9)
						printf(" ");
				}
				printf("%d", mul);
			}
			printf("\n");
		}
	}
}
