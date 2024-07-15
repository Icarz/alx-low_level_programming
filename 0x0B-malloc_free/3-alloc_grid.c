#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the allocated 2D array of integers, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);
/* Allocate memory for rows */
grid = (int **)malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
/* Allocate memory for columns and initialize to 0 */
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/* Free previously allocated memory */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
/* Initialize elements to 0 */
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
