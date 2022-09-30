#include "main.h"

/**
 * _strcpy - copies a string from one pointer to another
 *           including the terminating null byte (\0)
 *
 * @src: source of string parameter input
 * @dest: destination of string
 *
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int x, y;

	y = 0;

	for (x = 0; src[x] != '\0'; ++x)
	{
		dest[y] = src[x];
		++y;
	}
	dest[y] = '\0';

	return (dest);
}
