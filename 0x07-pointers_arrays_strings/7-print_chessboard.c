#include "main.h"

/**
 * print_chessboard - prints the chess board
 * @a: array
 *
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int k;
	int j;

	for (k = 0; k < 8; k++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[k][j]);
		_putchar('\n');
	}
}
