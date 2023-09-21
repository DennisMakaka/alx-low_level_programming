#include "main.h"

/**
 * reverse_array - Reverse an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int temp;

	n--; /* Decrement n here */

	for (x = 0; x < n; x++, n--)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}
