#include <stdio.h>

/**
 * main - prints sum of even fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long int n1, n2, sum, total_sum;

	n1 = 1;
	n2 = 2;
	sum = total_sum = 0;

	while (sum <= 4000000)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		if ((n1 % 2) == 0)
		{
			total_sum += n1;
		}
	}
	printf("%ld\n", total_sum);
	return (0);
}
