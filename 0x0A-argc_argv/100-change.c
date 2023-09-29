#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the min number of coins to make change for an amount of money.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 (Success), 1 (Error).
 */
int main(int argc, char *argv[])
{
	int amount, j, num_coins;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	num_coins = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && amount >= 0; j++)
	{
		while (amount >= coins[j])
		{
			num_coins++;
			amount -= coins[j];
		}
	}

	printf("%d\n", num_coins);
	return (0);
}
