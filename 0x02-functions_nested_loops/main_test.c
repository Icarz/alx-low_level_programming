#include "main.h"
#include <stdio.h>

int main(void)
{
    printf("Printing from 0 to 98:\n");
    print_to_98(0);

    printf("Printing from -10 to 98:\n");
    print_to_98(-10);

    printf("Printing from 50 to 98:\n");
    print_to_98(50);

    printf("Printing from 120 to 98:\n");
    print_to_98(120);

    return (0);
}
