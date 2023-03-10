#include "main.h"

/**
 * print_times_table - Entry point
 * print_times_table :print the table of passed value between 0 and 15
 * @n : parameter passed to the function
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 14)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k > 99)
				{
					_putchar(44);
					_putchar(32);
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k > 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(k + '0');
				}
			}
			_putchar('\n');
		}
	}
}
