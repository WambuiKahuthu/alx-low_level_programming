#include <stdio.h>

/**
 * main - print 1 to 100
 * replace multiples of 3 with Fizz
 *         multiples of 5 with Buzz
 *         multiples of 3 & 5 with FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int n;

	n = 1;
	printf("%d", n);

	for (n = 2; n <= 100; n++)
	{
		if (((n % 3) == 0) && ((n % 5) == 0))
			printf(" FizzBuzz");

		else if ((n % 5) == 0)
			printf(" Buzz");

		else if ((n % 3) == 0)
			printf(" Fizz");

		else
			printf(" %d", n);
	}
	printf("\n");
	return (0);
}
