#include "main.h"

/**
* print_line - Prints a line of underscores followed by a '$' sign
* @n: Number of underscores to print
*/
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n'); /* Print newline if n is 0 or less */
return;
}
for (i = 0; i < n; i++)
{
_putchar('_'); /* Print underscores */
}
_putchar('$'); /* Print the '$' sign */
_putchar('\n'); /* Print newline at the end */
}
