#include "main.h"

/**
 * rev_string - Reverses a string in place.
 *
 * This function takes a pointer to a string 's' and reverses the characters
 * of the string in place, effectively reversing the string.
 *
 * @s: Input string to be reversed.
 */
void rev_string(char *s)
{
    int length = 0;
    char temp;
    int i; /* Declare 'i' here */

    /* Calculate the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }

    /* Reverse the string in place */
    for (i = 0; i < length / 2; i++) /* Move the declaration of 'i' here */
    {
        temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
}
