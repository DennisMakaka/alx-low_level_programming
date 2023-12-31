#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 *
 * This function takes a pointer to a string 'str' and prints the second half
 * of the string. If the length of the string is odd, it prints the second half
 * starting from the middle character.
 *
 * @str: Input string.
 */
void puts_half(char *str)
{
	int length = 0;  /* Variable to store the length of the string */
	int start;       /* Variable to store the starting position for printing */
	int i;           /* Loop counter */

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculate the starting position for printing */
	start = length / 2;

	/* Adjust the start position for odd-length strings */
	if (length % 2 == 1)
	{
		start = (length + 1) / 2;
	}

	/* Print the second half of the string */
	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	/* Print a newline character at the end */
	_putchar('\n');
}
