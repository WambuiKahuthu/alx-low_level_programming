#include <stdio.h>

/**
 * main - entry point
 *
 * Return: indicates how the program exited
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	/* print alphabet from a to z using for loop*/

	putchar('\n');
	return (0);
}
