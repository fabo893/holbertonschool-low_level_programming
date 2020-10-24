#include "holberton.h"

/**
 * print_chessboard - print the chessboard
 * @a: pointer
 * @8: position
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
