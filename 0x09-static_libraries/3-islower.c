# include "main.h"

/**
 * _islower - checks if a character is lowercase letter
 *
 * @i: character
 *
 * Return: 1 if lowercase, 0 if not
 */

int _islower(int i)
{
	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);

	_putchar('\n');
}
