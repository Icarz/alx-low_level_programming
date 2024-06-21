#include <stdio.h>
/**
 * main - program entry point
 *
 * Return: always 0 (success)
**/
int main(void)
{
	char letter, cap_let;

	letter = 'a';
	cap_let = 'A';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (cap_let <= 'Z')
	{
		putchar(cap_let);
		cap_let++;
	}
	putchar('\n');
	return (0);
}
