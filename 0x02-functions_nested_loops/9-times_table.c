#include "main.h"

/**
 * times_table - Entry point
 * times_table :print the nine times table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				l = k % 10;
				m = (k - l) / 10;
				_putchar(m + '0');
				_putchar(l + '0');
				if (j < 9)
				{
					_putchar(44);
					_putchar(32);
				}
			} else
			{
				_putchar(k + '0');
				if (j < 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
