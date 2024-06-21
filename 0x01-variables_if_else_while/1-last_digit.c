#include <stdio.h>  // Include the necessary header for printf
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));

    /* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
    n = rand() - RAND_MAX / 2;

    /* Get the last digit of n */
    int last_digit = n % 10;

    printf("Last digit of %d is ", n);

    /* Print message based on the last digit */
    if (last_digit > 5) {
        printf("and is greater than 5\n");
    } else if (last_digit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    }

    return (0);
}

