#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>

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
			for (num = 0; argv[i][num] != 0; num++)
			{
				if (!isdigit(argv[i][num]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
