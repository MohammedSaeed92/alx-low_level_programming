#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * print_to_98 :print numbers to 98 starting from the passed number
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			} else
			{
				printf("%d\n", i);
			}
		}
	} else
		if (n > 98)
		{
			for (i = n; i >= 98; i--)
			{
				if (i != 98)
				{
					printf("%d, ", i);
				} else
				{
					printf("%d\n", i);
				}
			}
		}
}

