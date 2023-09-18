#include "main.h"

/**
 * puts2 - Prints every other character from a string, starting with the first.
 *
 * This function takes a pointer to a string 'str' and prints every other
 * character from the string, starting with the first character. It then
 * prints a new line character to stdout.
 *
 * @str: Input string.
 */
void puts2(char *str)
{
	int length = 0;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Print every other character starting from the first character */
	for (int i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
