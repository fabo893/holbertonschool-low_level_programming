#include "holberton.h"

/**
 * print_times_table - prints the n times table
 * @n: the number of times to be print
 */
void print_times_table(int n)
{
	int ver;
	int hor;
	int mul = 0;

	if (n <= 15 && n >= 0)
	{
		for (ver = 0; ver <= n; ver++)
		{
			for (hor = 0; hor <= n; hor++)
			{
				mul = ver * hor;
				if (hor != 0 && hor <= n)
				{
					printf(",");
					if (mul <= 9)
					{
						printf(" ");
						printf(" ");
						printf(" ");
					}
					else if (mul >= 10 && mul <= 99)
					{
						printf(" ");
						printf(" ");
					}
					else
						printf(" ");
				}
				printf("%d", mul);
			}
			printf("\n");
		}
	}
}
