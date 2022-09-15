#include "main.h"

/**
 * print_square - prints square with hashtags
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int i, s;

	for (i = 0; i < size; i++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
