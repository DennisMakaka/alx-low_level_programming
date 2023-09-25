#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: A pointer to a pointer to char.
 * @to: A pointer to char representing the new value.
 */
void set_string(char **s, char *to)
{
	*s = to; /* Set the value of s to the address of the new character array */
}
