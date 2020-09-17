#include <stdio.h>
/**
 *
 * main - Prins the values of all the types on the computer.
 * Return: Must be 0 to work
 */
int main(void)
{
printf("Size of a char: %lu bytes(s\n)", sizeof(char));
printf("Size of an int: %lu byte(s)", sizeof(int));
printf("Size of a long int: %lu bytes(s)\n", sizeof(long));
printf("Size of a long long: %lu byte(s)\n", sizeof(long long));
printf("Size of a float:%lu byte(s)\n", sizeof(float));
return (0);
}
