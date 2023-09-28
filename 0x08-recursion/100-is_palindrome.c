#include "main.h"

/**
 * check_pal - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 if not.
 */
int check_pal(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);

	if (start >= end)
		return (1);
	return (check_pal(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Recursively returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check for palindrome.
 *
 * Return: 1 if it's a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (*s == 0)
		return (1);

	return (check_pal(s, 0, len - 1));
}

