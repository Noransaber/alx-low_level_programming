#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - return min num
 * @argc: count
 * @argv: array of args
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int coins, cents;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	/*parse the aargument to integer*/

	cents = atoi(argv[1]);

	/*check if the integer is neg*/
	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}
	/*Calc the min num*/

	coins = 0;

	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents;

	/*print the total num of coins*/
	printf("%d\n", coins);
	return (0);
}
