#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: always 0 (success)
**/
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
