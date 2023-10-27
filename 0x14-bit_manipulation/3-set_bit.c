#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to an unsigned long integer.
 * @index: Index of the bit to set (starting from 0).
 *
 * Return: 1 if it succeeded, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(*n) * 8)
	return (-1);


/* Use a bitwise OR operation to set the bit at the specified index to 1. */
*n |= (1UL << index);

return (1);
}
