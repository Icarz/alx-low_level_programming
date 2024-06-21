#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: always 0 (success)
**/
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
