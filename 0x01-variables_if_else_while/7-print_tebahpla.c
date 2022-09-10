#include<stdio.h>

/**
 * main - entry point
 *
 * Return: exit successful when 0
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');
	return (0);
}
