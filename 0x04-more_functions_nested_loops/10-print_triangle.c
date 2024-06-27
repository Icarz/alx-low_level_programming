#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle followed by a new line.
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
putchar('\n');
return;
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= size - i)
putchar(' ');
else
putchar('#');
}
putchar('\n');
}
}
