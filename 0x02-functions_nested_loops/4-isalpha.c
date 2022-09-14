# include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 *
 * @i: character
 *
 * Return: 1 if lowercase, 0 if not
 */

int _isalpha(int i)
{
	if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
		return (1);
	else
		return (0);

	_putchar('\n');
}
