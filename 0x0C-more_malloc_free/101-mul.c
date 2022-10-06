#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 *
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;
	int i, j;

	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit (98);
			}
		}
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", mul);
	return (0);
}
