#include "holberton.h"

/**
 * main - Prints the number of arguments passed into it
 * @argc: Arguments count
 * @argv: Arguments array
 *
 * Return: On success always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}
