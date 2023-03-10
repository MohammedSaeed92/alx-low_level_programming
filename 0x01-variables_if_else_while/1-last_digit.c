#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: get the last digit of a random number and print
 * if it's less or greater than 5 or equal zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n % 10 > 5)
	{
		printf("%d and is greater than 5\n", n % 10);
	}
	if (n % 10 == 0)
	{
		printf("%d and is 0\n", n % 10);
		return (0);
	}
	else if (n % 10 < 6)
	{
		printf("%d and is less than 6 and not 0\n", n % 10);
	}
	return (0);
}
