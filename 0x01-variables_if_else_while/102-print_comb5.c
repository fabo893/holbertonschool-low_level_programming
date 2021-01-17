#include <stdio.h>

/**
 * print_help - helper to print the numbers
 * @n: number to be printed
 */
void print_help(n)
{
	int zero = 0;

	if (n <= 9)
		printf("%d", zero);

	printf("%d", n);
}



/**
 * main - main function
 *
 * Return: On success, always 0.
 */
int main(void)
{
	int i, x;

	for (i = 0; i <= 97; i++)
	{
		for (x = i + 1; x <= 99; x++)
		{
			print_help(i);
			putchar(' ');
			print_help(x);
			putchar(',');
			putchar(' ');
		}
	}
	print_help(98);
	putchar(' ');
	print_help(99);

	return (0);
}
