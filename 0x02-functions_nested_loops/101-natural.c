#include "holberton.h"

/**
 * main - the main function
 * Return: On success, always 0.
 */
int main(void)
{
	int sum, nat;

	for (nat = 0; nat < 1024; nat++)
	{
		if (nat % 15 == 0)
			sum += nat;
		if (nat % 5 == 0)
			sum += nat;
		if (nat % 3 == 0)
			sum += nat;
	}
	printf("%d\n", sum);

	return (0);
}
