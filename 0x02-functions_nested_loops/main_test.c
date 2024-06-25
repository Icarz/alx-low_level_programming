#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a, b, sum;

    a = 10;
    b = 20;

    sum = add(a, b);

    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}




