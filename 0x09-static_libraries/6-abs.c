#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @r: the number to compute the absolute value of
 *
 * Description: This function computes the absolute value of the integer @r.
 *              If @r is non-negative, it returns @r. If @r is negative, it
 *              returns @r multiplied by -1.
 *
 * Return: the absolute value of @r
 */
int _abs(int r)
{
if (r >= 0)
return (r);
else
return (r * -1);
}
