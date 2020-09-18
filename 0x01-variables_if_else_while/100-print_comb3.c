#include <stdio.h>

/**
 * main - brains and materials
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57 ; n++)
	{
		for (m = n + 1 ; m <= 57 ; m++)
		{
			putchar (n);
			putchar (m);

			if (n == 56 && m == 57)
			{
				putchar (10);
				break;
			}
			putchar (44);
			putchar (32);
		}
	}
	return (0);
}
