#include "main.h"

/**
 * main - program that prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 char name[] = "_putchar\n";
 int a = 0;

 while (name[a] != '\0')
 {
 _putchar(name[a]);
 a++;
 }
 return (0);
}



