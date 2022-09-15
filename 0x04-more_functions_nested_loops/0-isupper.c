# include "main.h"

/**
 * _isupper - checks if a character is lowercase letter
 *
 * @c: character
 *
 * Return: 1 if upperrcase, 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

	_putchar('\n');
}
