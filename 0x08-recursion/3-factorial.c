#include "main.h"

/**
 * factorial - computes the factorial of a given number
 * @n: the number to compute factorial of
 *
 * Return: factorial of n, or -1 if n is negative (error)
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
