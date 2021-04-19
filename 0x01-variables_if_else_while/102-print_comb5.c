#include <stdio.h>

/**
 * print_help - helper to print numbers
 *
 * @n: number to be printed
 */
void print_help(int n)
{
	int ax1 = 0, ax2 = 0;

	if (n <= 9)
	{
		putchar('0');
		putchar('0' + n);
	}
	else
	{
		ax1 = n / 10;
		ax2 = n % 10;
		putchar('0' + ax1);
		putchar('0' + ax2);
	}
}

/**
 * main - main function
 *
 * Return: On success, always 0.
 */
int main(void)
{
	int i, ii;

	for (i = 0; i <= 97; i++)
	{
		for (ii = i + 1; ii <= 99; ii++)
		{
			print_help(i);
			putchar(' ');
			print_help(ii);
			putchar(',');
			putchar(' ');
		}
	}
	print_help(98);
	putchar(' ');
	print_help(99);

	putchar('\n');

	return (0);
}
