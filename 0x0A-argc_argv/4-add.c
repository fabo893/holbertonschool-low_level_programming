#include "holberton.h"
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Arguments count
 * @argv: Arguments array
 *
 * Return: On success, always 0
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);

			if (num)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
	}
	return (0);
}
