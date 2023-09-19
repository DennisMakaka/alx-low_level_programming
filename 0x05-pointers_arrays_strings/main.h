#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

/* _putchar - Writes a character to stdout */
int _putchar(char c);

/* reset_to_98 - Sets the value of an integer to 98 */
void reset_to_98(int *n);

/* swap_int - Swaps the values of two integers */
void swap_int(int *a, int *b);

/* _strlen - Calculates the length of a string */
int _strlen(char *s);

/* _puts - Prints a string, followed by a newline, to stdout */
void _puts(char *str);

/* print_rev - Prints a string in reverse */
void print_rev(char *s);

/* rev_string - Reverses a string */
void rev_string(char *s);

/* puts2 - Prints every other character of a string */
void puts2(char *str);

/* puts_half - Prints the second half of a string */
void puts_half(char *str);

/* print_array - Prints n elements of an integer array */
void print_array(int *a, int n);

/* _strcpy - Copies the string pointed to by src into dest */
char *_strcpy(char *dest, char *src);

int _atoi(char *s);

#endif /* MAIN_H */
