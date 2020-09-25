#include <stdio.h>

/**
 * main - print fizz or buzz or both.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int v;

	for (v = 1; v < 100; v++)
	{
		if (v % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (v % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (v % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", v);
		}
	}
	printf("Buzz\n");
	return (0);
}
