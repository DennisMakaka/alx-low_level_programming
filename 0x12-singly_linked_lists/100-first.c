#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - Function executed before main.
 *
 * This function is executed before the `main` function. It prints two
 * sentences to the standard output, indicating that it's being executed
 * before the main program.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
