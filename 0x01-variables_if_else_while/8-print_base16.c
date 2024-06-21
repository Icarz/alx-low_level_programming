#include <stdio.h>
#include <ctype.h>

/**
 * main - program entry
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char str[] = "abcdef";

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	for (i = 0; i < 6; i++)
		putchar(str[i]);

	putchar('\n');

	return (0);
}
