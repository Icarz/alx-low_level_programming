#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search in.
 * @size: The size of the array.
 * @cmp: Pointer to the function used for comparison.
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0. If no element matches or size <= 0,
 *returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
