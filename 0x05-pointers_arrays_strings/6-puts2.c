#include "main.h"

/**
 * puts2 - Prints every second character from the input string.
 * @str: The input string.
 */
void puts2(char *str)
{
	int length = 0;	/* Initialize a variable to hold the string length */
	char *ptr = str; /* Pointer to iterate through the string */
	int i;			/* Declare the loop counter variable */

	/* Calculate the length of the input string */
	while (*ptr != '\0')
	{
		ptr++;
		length++;
	}

	/* Iterate through the string and print every second character */
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n'); /* Print a newline character at the end */
}
