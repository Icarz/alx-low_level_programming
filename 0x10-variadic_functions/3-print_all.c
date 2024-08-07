#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything based on the format string
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *str;

const char t_arg[] = "cifs";
va_start(args, format);
while (format && format[i])
{
j = 0;
while (t_arg[j])
{
if (format[i] == t_arg[j] && i)
{
printf(", ");
break;
} j++;
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}
i++;
}
printf("\n");
va_end(args);
}
