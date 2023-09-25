#ifndef MAIN_H
#define MAIN_H

	/* Function to fill memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);
	/* Function to write a character to stdout */
int _putchar(char c);
	/* Function to copy memory area from source to destination */
char *_memcpy(char *dest, char *src, unsigned int n);
	/* Function to locate character in a string */
char *_strchr(char *s, char c);
	/* Function to get the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);
	/* Function to search a string for any set of bytes */
char *_strpbrk(char *s, char *accept);
	/* Function to locate a substring within a string */
char *_strstr(char *haystack, char *needle);
	/* Function to print a chessboard */
void print_chessboard(char (*a)[8]);
	/* Function to print the sum of diagonals in a matrix */
void print_diagsums(int *a, int size);
	/* Function to set the value of a pointer to a string */
void set_string(char **s, char *to);

#endif
