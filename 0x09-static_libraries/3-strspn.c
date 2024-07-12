#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment
 * @accept: the bytes to be compared
 *
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int b = 0;
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
b++;
break;
}
else if (accept[i + 1] == '\0')
{
return (b);
}
}
s++;
}
return (b);
}
