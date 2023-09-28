#include "main.h"

/**
 * actual_prime - Recursively checks if a number is prime.
 * @n: The number to evaluate for primality.
 * @counter: The iterator for checking divisibility.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int counter)
{
	if (counter == 1)
		return (1);
	if (n % counter == 0 && counter > 0)
		return (0);
	return (actual_prime(n, counter - 1));
}
/**
 * is_prime_number - Determines if an integer is a prime number or not.
 * @n: The number to evaluate for primality.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
