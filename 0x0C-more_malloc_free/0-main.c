#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *c;
int *i;
float *f;
double *d;

c = malloc_checked(8);
printf("%p\n", (void *)c);
i = malloc_checked(20);
printf("%p\n", (void *)i);
f = malloc_checked(100);
printf("%p\n", (void *)f);
d = malloc_checked(8);
printf("%p\n", (void *)d);

free(c);
free(i);
free(f);
free(d);
return (0);
}
