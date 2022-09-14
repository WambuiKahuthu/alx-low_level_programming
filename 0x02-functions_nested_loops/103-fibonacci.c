#include <stdio.h>

/**
 * main - prints sum of even fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long n1 = 0, n2 = 1, sum, total;
	float total_sum;

	while (1)
	{
		sum = n1 + n2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;

		n1 = n2;
		n2 = sum;
	}
	printf("%.0f\n", total);

	return (0);
}
