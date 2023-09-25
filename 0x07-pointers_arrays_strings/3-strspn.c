#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring that consists of only
 * characters found in another string.
 *
 * @s: The string to search.
 * @accept: The string containing characters to be matched.
 *
 * Return: The length of the prefix substring consisting of only characters
 * found in `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	/* Iterate through the string `s` */
	while (*s)
	{
	/* Iterate through the string `accept` to find a matching character */
	for (r = 0; accept[r]; r++)
	{
	if (*s == accept[r])
	{
	n++; /* Increment the count for each matching character */
	break;
	}
	else if (accept[r + 1] == '\0')
	{
	return (n); /* Return the length when a non-matching character is found */
	}
	}
	s++; /* Move to the next character in `s` */
	}

	return (n);
}

