#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: numbers of lines
 *
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, s;

	for (i = 0; i < size; i++)
	{
		for (s = 1; s < (size - i); s++)
			_putchar(' ');
		for (s--; s < size; s++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
