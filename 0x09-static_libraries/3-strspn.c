#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search within
 * @accept: the characters to accept in the substring
 *
 * Description: Calculates the length (in bytes) of the initial segment of
 *              the string `s` which consists entirely of characters from the
 *              string `accept`.
 *
 * Return: Length of the initial segment of `s` containing only characters
 *         from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;
char *ptr_s, *ptr_a;

for (ptr_s = s; *ptr_s != '\0'; ptr_s++)
{
found = 0;
for (ptr_a = accept; *ptr_a != '\0'; ptr_a++)
{
if (*ptr_s == *ptr_a)
{
found = 1;
break;
}
}
if (found == 0)
break;
count++;
}
return (count);
}
