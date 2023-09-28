#include "main.h"

/**
 * actual_sqrt_recursion - Recursively finds natural square root of a number.
 * @n: The number to calculate the square root of.
 * @counter: The iterator for checking possible square roots.
 *
 * Return: The resulting square root or -1 if no exact square root is found.
 */
int actual_sqrt_recursion(int n, int counter)
{
	if (counter * counter > n)
		return (-1);
			if (counter * counter == n)
				return (counter);
	return (actual_sqrt_recursion(n, counter + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root or -1 if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
