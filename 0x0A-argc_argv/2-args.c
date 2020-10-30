#include "holberton.h"

/**
 * main - Prints all arguments it receives
 * @argc: Arguments count
 * @argv: Arguments array
 *
 * Return: On success always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
