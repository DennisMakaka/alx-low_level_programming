#ifndef MAIN_H
#define MAIN_H

/**
 * _puts_recursion - Prints a string followed by a newline using recursion.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s);

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - Computes the length of a string using recursion.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s);

/**
 * factorial - Computes the factorial of a number using recursion.
 * @n: The number to compute the factorial for.
 *
 * Return: The factorial of the given number, or -1 if n is negative.
 */
int factorial(int n);

/**
 * _pow_recursion - Computes the value of x raised to the power of y using recursion.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - Computes the square root of a number using recursion.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - Checks if a number is prime using recursion.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n);

/**
 * is_palindrome - Checks if a string is a palindrome using recursion.
 * @s: The string to check for palindromicity.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s);

#endif /* MAIN_H */

