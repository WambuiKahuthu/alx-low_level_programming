/**
 * _sqrt_recursion - find natural square root
 *
 * @n: given number
 *
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find square root
 *
 * @n: int to find square root
 * @sqrt: square root
 *
 * Return: square root or -1
 */

int square(int n, int val)
{
  if (sqrt * sqrt  == n)
	  return (sqrt);
  else if (sqrt * sqrt < n)
	  return  (square(n, sqrt + 1));
  else
	  return (-1);
}
