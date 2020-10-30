#include "holberton.h"
#include <stdlib.h>

/**
 * main - Multiply two numbers
 * @argc: Arguments count
 * @argv: Arguments array
 *
 * Return: On success, always 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
	}


	return (0);
}
