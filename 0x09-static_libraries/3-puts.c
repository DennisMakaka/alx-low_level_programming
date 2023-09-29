#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 *
 * This function takes a pointer to a string 'str' and prints each character
 * of the string until the null terminator '\0' is encountered. It then
 * prints a new line character to stdout.
 *
 * @str: A pointer to the string to be printed.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');

}
