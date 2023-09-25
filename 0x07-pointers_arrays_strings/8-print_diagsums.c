#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals in a square matrix.
 *
 * @a: The square matrix represented as a one-dimensional array.
 * @size: The size of the square matrix (number of rows or columns).
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0; /* Sum for the main diagona */
	int sum2 = 0; /* Sum for the secondary diagonal */
	int y;

	/* Calculate the sum of the main diagonal */

	for (y = 0; y < size; y++)
	{
		sum1 += a[y * size + y];
	}
	/* Calculate the sum of te secondary diaonol*/
	for (y = 0; y < size; y++)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	sum2 += a[y * size + (size - y - 1)];
}
