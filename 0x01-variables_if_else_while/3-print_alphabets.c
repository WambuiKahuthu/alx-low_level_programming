#include <stdio.h>

/**
 * main - entry point
 *
 * Return: how the program exited
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	/* print letters a-z then A-Z using for loops*/

	putchar('\n');
	return (0);
}

