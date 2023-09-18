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
    int length = 0;

    /* Calculate the length of the string */
    while (str[length] != '\0')
    {
        length++;
    }

    int start = length / 2;

    /* Adjust start position for odd-length strings */
    if (length % 2 == 1)
    {
        start = (length - 1) / 2;
    }

    int i;  // Declare the loop counter variable here

    /* Print the second half of the string */
    for (i = start; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}
