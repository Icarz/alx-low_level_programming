#include "main.h"

/**
* print_most_numbers - 0-9 excluding 2 and 4 followed by a new line
*/
void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0'); /* Convert digit to character and print */
}
}

_putchar('\n'); /* Print new line at the end */
}
