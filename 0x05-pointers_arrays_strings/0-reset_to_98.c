#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number; /* Declare an integer variable 'number' */
	int *ptr = &number; /* Create a pointer to the integer 'number' */

	/* Since 'number' is uninitialized, its value is indeterminate */

	printf("Before reset_to_98: %d\n", *ptr);

	reset_to_98(ptr);

	printf("After reset_to_98: %d\n", *ptr);

	return (0);
}

/**
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 * @n: A pointer to an integer.
 */
void reset_to_98(int *n)
{
	if (n != NULL)
	{
		*n = 98;
	}
}
