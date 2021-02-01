#include "holberton.h"

/**
 * main - the main function
 * Return: On success, always 0.
 */
int main(void)
{
	int sum, nat;

	for (nat = 1; nat < 1024; nat++)
	{
		if (nat % 5 == 0)
			sum += nat;
		else if (nat % 3 == 0)
			sum += nat;
		else
			sum += 0;
	}
	printf("%d\n", sum);

	return (0);
}
