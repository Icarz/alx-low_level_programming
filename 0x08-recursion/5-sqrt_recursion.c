#include "main.h"

/**
 * sqrt_finder - checks for square root of a number
 * @a: number
 * @b: base
 * Return: square root of b
 */

int sqrt_finder(int a, int b)
{
if (a * a == b)
return (a);
if (a * a > b)
return (-1);
return (sqrt_finder(a + 1, b));
}

/**
 * _sqrt_recursion - returns square root of n
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
if (!n)
return (0);
return (sqrt_finder(1, n));
}
