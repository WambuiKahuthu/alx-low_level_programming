/**
 * _prime - detects if an input number is a prime number
 *
 * @n: input number
 * @num: iterator
 *
 * Return: 1 if n is a prime number 0r 0 if n is not a prime number.
 */
int _prime(unsigned int n, unsigned int num)
{
	if (n % num == 0)
	{
		if (n == num)
			return (1);
		else
			return (0);
	}
	return (0 + _prime(n, num + 1));
}

/**
 * is_prime_number - detects if an input number is a prime number
 *
 * @n: given number
 * Return: 1 if n is a prime number or 0 if n is not a prime number
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_prime(n, 2));
}
