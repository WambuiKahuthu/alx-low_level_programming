#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * @a: integer 1
 * @b: interger 2
*/

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
