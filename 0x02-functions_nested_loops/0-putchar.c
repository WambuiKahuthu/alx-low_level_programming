#include "main.h"

/**
 * main - print the letters of the alphabet
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int count, size;

	size = sizeof(str) - 1; 

	for (count = 0; count < size; count++)
		_putchar(str[count]);

	_putchar('\n');
	return (0);
}
