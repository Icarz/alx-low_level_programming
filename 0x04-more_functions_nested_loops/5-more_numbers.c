#include "main.h"

/**
* more_numbers - Prints 10 times the numbers 0-14 followed by a new line
*/
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
_putchar((j / 10) + '0'); /* Print tens digit */
_putchar((j % 10) + '0');     /* Print ones digit */
}
_putchar('\n'); /* Print new line after each set of numbers */
}
}
