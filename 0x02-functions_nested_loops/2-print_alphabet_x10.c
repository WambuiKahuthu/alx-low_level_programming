#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int x, ch;

	for (x = 0; x <= 10; x++)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
	}
	_putchar('\n');
}
