#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 *
 * This function takes a pointer to a string 's' and prints the characters
 * of the string in reverse order, followed by a new line character.
 *
 * @s: A pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	/* Move back to the last character of the string */
	s--;

	/* Print the characters in reverse order */
	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}

	_putchar('\n');
}
