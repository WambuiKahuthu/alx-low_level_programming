#include "main.h"

/**
 * print_sign - print sign of a number
 *
 * @n: number
 * Return: + if positive, - if negative, 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
