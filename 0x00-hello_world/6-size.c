#include <stdio.h>

/**
 * main - Entry point
 * Description: print variables sizes
 * Return: Always 0 (Success)
 */

int main(void)
{
	char char_var;
	int int_var;
	long int long_var;
	long long int long_long_var;
	float float_var;

	printf("Size of a char: %d byte(s)\n", sizeof(char_var));
	printf("Size of an int: %d byte(s)\n", sizeof(int_var));
	printf("Size of a long int: %d byte(s)\n", sizeof(long_var));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long_long_var));
	printf("Size of a float: %d byte(s)\n", sizeof(float_var));
	return (0);
}
