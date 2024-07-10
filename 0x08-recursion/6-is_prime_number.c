#include "main.h"

/**
 * div - check if divisible
 * @a: number
 * @b: base
 *
 * Return: -1 if not divisible, else 0
 */

int div(int a, int b)
{
if (a % b == 0)
return (0);
else if (b == a / 2)
return (1);
return (div(a, b + 1));
}

/**
 * is_prime_number - determines if a number is prime
 * @n: number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
if (n < 2)
return (0);
if (n > 1 && n < 4)
return (1);
return (div(n, 2));
}
