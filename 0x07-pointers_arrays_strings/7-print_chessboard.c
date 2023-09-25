#include "main.h"

/**
 * print_chessboard - Prints an 8x8 chessboard.
 *
 * @a: The 8x8 array representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Loop through rows of the chessboard */
	for (i = 0; i < 8; i++)
	{
		/* Loop through columns of the chessboard */
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]); /* Print each character */
		}
		_putchar('\n'); /* Move to the next row after printing a row */
	}
}
