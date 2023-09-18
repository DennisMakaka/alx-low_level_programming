#include "main.h"

/**
<<<<<<< HEAD
 * reset_to_98 - Updates the value pointed to by a pointer to 98.
 *
 * This function takes a pointer to an integer as a parameter and
 * updates the value it points to 98.
 *
 * @n: A pointer to an integer whose value needs to be set to 98.
 */
void reset_to_98(int *n)
{
	*n = 98;
=======
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
>>>>>>> aef049fcc7dcc051c7c84c04d455c7d3e00f0cd1
}
