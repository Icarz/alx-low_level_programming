#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to be scanned
 * @needle: the substring to be searched in haystack
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *startn = needle, *starth = haystack;

while (*haystack)
{
starth = haystack;
needle = startn;
while (*haystack && *needle && (*haystack == *needle))
{
haystack++;
needle++;
}
if (*needle == '\0')
return (starth);
haystack = starth + 1;
}
return (NULL);
}
