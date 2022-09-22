/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int temp, x, y;

	x = 0;
	y = n - 1;

	while (x < y)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		x++;
		y--;
	}
}
