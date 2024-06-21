#include <stdio.h>
/**
* main - program entry point
*
* Return: always 0 (success)
**/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
