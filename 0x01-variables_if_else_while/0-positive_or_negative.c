#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, prints if a number is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed for random number generator */
	n = rand() - RAND_MAX / 2; /* Generate random number and adjust range */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
