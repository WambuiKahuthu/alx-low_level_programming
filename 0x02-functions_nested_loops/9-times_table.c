#include "main.h"

/**
 * times_table - prints the 9 times table
 */
 
void times_table(void)
{
	int n, num, ans;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (num = 1; num <= 9; num++)
		{
			ans = n * num;
      
			_putchar(44);
			_putchar(32);
      
			if (ans <= 9)
			{
				_putchar(32);
				_putchar(ans + 48);
			}
			else
			{
				_putchar((ans / 10) + 48);
				_putchar((ans % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
