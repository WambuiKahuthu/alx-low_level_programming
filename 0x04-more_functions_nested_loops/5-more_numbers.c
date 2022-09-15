#include "main.h"

/**
 * print_more_numbers - prints the 0 - 15, 10 times
 *
 * Return: 0
 */

void print_more_numbers(void)
{
	int x, ch;

	for (x = 0; x <= 9; x++)
	{
		for (ch = 0; ch <= 14; ch++)
			_putchar(ch + '0');

	_putchar('\n');
	}
}
