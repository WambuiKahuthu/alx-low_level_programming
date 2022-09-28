/**
 * square_root - finds square root
 *
 * @n: given number
 * @sqrt: square root
 *
 * Return: square root or -1
 */
int square_root(int n, int sqrt)
{
  if (sqrt * sqrt  == n)
	  return (sqrt);

  else if (sqrt * sqrt < n)

	  return  (square_root(n, sqrt + 1));

  else
	  return (-1);
}

/**
 * _sqrt_recursion - find natural square root
 *
 * @n: given number
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
