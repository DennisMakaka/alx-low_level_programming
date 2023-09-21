#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program demonstrates how to print "a[2] = 98" without
 * using variable 'a' and without modifying the variable 'p'.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	* Write your line of code here...
	* Remember:
	* - You are not allowed to use a
	* - You are not allowed to modify p
	* - Only one statement
	* - You are not allowed to code anything else than this line of code
	*/
	_putchar('a'['2'] - -111 + 10), _putchar(10);

	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
