#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * 
 * Return: 0
 */

int main(void)
{
	srand(time(NULL));

	int index = 0;
	
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";
	for(index = 0; index < 12; index++)
	{
		printf("%c", characters[rand() % (sizeof characters - 1)]);
	}
  return (0);
}
