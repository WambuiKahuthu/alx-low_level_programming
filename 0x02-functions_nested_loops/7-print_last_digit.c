#include "main.h"

/**
 * print_last_digit - prints last digit of number
 *
 * @n: number
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (n < 0)
		l = ((n % 10) * -1);

	else
		l = (n % 10);

	_putchar(l + '0');
	return (l);
}
