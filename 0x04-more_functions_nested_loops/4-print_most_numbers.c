#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 but not 2 & 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)

		if (i != 50 && i != 52)

		_putchar(i);

	_putchar('\n');
}
