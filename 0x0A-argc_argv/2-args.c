#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints each arguments it receives on new line
 *
 * @argc: number of arguments
 * @argv: array of given arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
