#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *@n: Pointer to an unsigned long integer.
 * @index: Index of the bit to clear (starting from 0)
 *
 * Return: 1 if it succeeded, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	/* Use a bitwise AND operation with the complement to clear the bit. */
	*n &= ~(1UL << index);

	return (1);
}
