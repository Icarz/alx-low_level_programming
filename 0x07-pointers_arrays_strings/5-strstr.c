#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the main string to be searched
 * @needle: the substring to be found in haystack
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *start_haystack, *start_needle;

while (*haystack)
{
start_haystack = haystack;
start_needle = needle;
while (*start_needle && *start_haystack && *start_haystack == *start_needle)
{
start_haystack++;
start_needle++;
}
if (!*start_needle)
return (haystack);
haystack++;
}
return (NULL);
}
