#include <stdio.h>

/**
 * main - entry point
 *
 * Return: indicates how the program exited
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' || ch != 'q')

		putchar(ch);
		ch++;
	}
	/* Print all letters of alphabet except e and q*/

	putchar('\n');
	return (0);
}
