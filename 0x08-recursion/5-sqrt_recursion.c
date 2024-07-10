#include "main.h"

/**
 * _sqrt_helper - helper function to calculate the square root recursively
 * @n: the number to find the square root of
 * @low: the lower bound of the search range
 * @high: the upper bound of the search range
 *
 * Return: the square root of n, or -1 if no natural square root is found
 */
static int _sqrt_helper(int n, int low, int high)
{
int mid;
long square;

if (low > high)
{
return (-1);
}
mid = (low + high) / 2;
square = (long)mid *mid;

if (square == n)
{
return (mid);
}
else if (square < n)
{
return (_sqrt_helper(n, mid + 1, high));
}
else
{
return (_sqrt_helper(n, low, mid - 1));
}
}

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to compute the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt_helper(n, 0, n / 2));
}
}
