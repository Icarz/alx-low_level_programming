#include "main.h"

/**
* print_numbers - Prints numbers 0-9 followed by a new line
*/
void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
_putchar(i + '0'); /* Convert digit to character and print */
}

_putchar('\n'); /* Print new line at the end */
}
