#include "main.h"

/**
 * print_sign - Entry point
 * print_sign:check the sign of the value and prints
 * + sign if greater than 1 and print - sign if it's less than 1
 * @n : parameter passed to the function
 * Return: Always 1 (alphabet)
 */
int print_sign(int n)
{

	if (n > 1)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
