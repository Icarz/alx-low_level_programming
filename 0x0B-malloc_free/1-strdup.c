#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 */
char *_strdup(char *str)
{
char *dup_str;
unsigned int i, len = 0;

if (str == NULL)
return (NULL);
/* Calculate the length of str */
while (str[len])
len++;
/* Allocate memory for duplicate string (+1 for null terminator) */
dup_str = malloc(sizeof(char) * (len + 1));
if (dup_str == NULL)
return (NULL);
/* Copy the string to allocated memory */
for (i = 0; i < len; i++)
dup_str[i] = str[i];
/* Add null terminator */
dup_str[len] = '\0';
return (dup_str);
}
