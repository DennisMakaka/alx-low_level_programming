#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);          /* Write a character to stdout */
unsigned int binary_to_uint(const char *b);  /* Convert binary to unsigned int */
void print_binary(unsigned long int n);      /* Print binary representation */
int get_bit(unsigned long int n, unsigned int index);  /* Get a bit at index */
int set_bit(unsigned long int *n, unsigned int index);   /* Set a bit at index */
int clear_bit(unsigned long int *n, unsigned int index); /* Clear a bit at index */
unsigned int flip_bits(unsigned long int n, unsigned long int m);  /* Flip bits */
int get_endianness(void);      /* Get the endianness of the system */

#endif
