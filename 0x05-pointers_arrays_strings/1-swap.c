#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a; /* Store the value pointed to by 'a' in a temporary variable */
	*a = *b;   /* Assign the value pointed to by 'b' to 'a' */
	*b = temp; /* Assign the value stored in the temporary variable to 'b' */
}
