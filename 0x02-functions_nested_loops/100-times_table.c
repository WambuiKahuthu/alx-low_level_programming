#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: number
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a, b, times;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				times = a * b;
				_putchar(44);
				_putchar(32);
				if (times <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(times + 48);
				}
				else if (times <= 99)
				{
					_putchar(32);
					_putchar((times / 10) + 48);
					_putchar((times % 10) + 48);
				}
				else
				{
					_putchar(((times / 100) % 10) + 48);
					_putchar(((times / 10) % 10) + 48);
					_putchar((times % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
