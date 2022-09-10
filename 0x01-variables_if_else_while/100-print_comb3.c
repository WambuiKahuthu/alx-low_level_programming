#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int n, l;

	for (n = 48; n <= 56; n++)
	{
		for (l = 49; l <= 57; l++)
		{
			if (l > n)
			{
				putchar(n);
				putchar(l);
				if (n != 56 || l != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
