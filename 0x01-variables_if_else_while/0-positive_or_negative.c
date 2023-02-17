#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: print negative,positive or zero according to
 * the generating number by rand
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n");
	}
	else if (n > 0)
	{
		printf("%d is positive\n");
	}
	else
	{
		printf("%d is zero");
	}

	return (0);
}
