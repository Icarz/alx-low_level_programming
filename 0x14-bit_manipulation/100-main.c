#include <stdio.h>
#include "main.h"

/**
 * main - Checks and prints the system's endianness.
 *
 * Description:
 * Calls get_endianness() to determine if the system is
 * Little Endian or Big Endian and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

n = get_endianness();
if (n != 0)
{
printf("Little Endian\n");
}
else
{
printf("Big Endian\n");
}
return (0);
}
