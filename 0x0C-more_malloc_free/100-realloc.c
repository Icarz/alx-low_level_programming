#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc(old_size)
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block in bytes
 *
 * Return: pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i;
char *tmp_ptr, *tmp_old_ptr;

/* Return NULL if new_size is 0 and ptr is not NULL */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
/* Return ptr if old_size is equal to new_size */
if (old_size == new_size)
return (ptr);
/* Return malloc(new_size) if ptr is NULL */
if (ptr == NULL)
return (malloc(new_size));
/* Allocate new memory block */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
/* Copy old data to new memory block */
tmp_ptr = new_ptr;
tmp_old_ptr = ptr;
for (i = 0; i < old_size && i < new_size; i++)
tmp_ptr[i] = tmp_old_ptr[i];
/* Free old memory block */
free(ptr);
return (new_ptr);
}
