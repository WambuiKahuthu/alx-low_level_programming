#include <stdio.h>

/**
 * main - prints program name, followed by a new line
 *
 * @argc: number of command line arguments
 * @argv: array that contains the progam command line arguments
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
