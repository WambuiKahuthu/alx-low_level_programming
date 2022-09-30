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
if (argc != 3)
{
  printf("Error\n");
  return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
 
  
 
