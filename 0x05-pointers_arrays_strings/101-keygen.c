#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_MAX 2772
#define NUM_MIN 64

/**
 * main - entry point
 * main - generate random values up to 2772
 *
 * Return: 0
 * Return: 0 success
 */

int main(void)
{
	srand((unsigned int)(time(NULL)));
	int i = 0;
	int seed = 0;

	int index;

	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";

	for(index = 0; index < 12; index++)
	srand(time(NULL));

	for (; seed <= (NUM_MAX - NUM_MIN); seed += i)
	{
		printf("%c", characters[rand() % (sizeof characters - 1)]);
		i = (rand() % (90 - 65) + 65);
		putchar(i);
	}

	printf("%c", NUM_MAX - seed);
	return (0);
}
