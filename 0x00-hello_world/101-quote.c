#include <stdio.h>
/**
 * main - Entry point
 * Return: shows how program exited
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(char), sizeof(str) - 1, stdout);
	fflush(stdout);
	return (2);
}
