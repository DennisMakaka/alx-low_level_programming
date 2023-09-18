#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * This function takes a pointer to a string 's' and calculates
 * the length of the string by counting the number of characters
 * until the null terminator '\0' is encountered.
 *
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
