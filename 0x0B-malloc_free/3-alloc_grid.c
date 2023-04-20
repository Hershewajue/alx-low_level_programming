#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers
 *             with each element initialized to 0.
 *
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the 2-dimensional array of integers on success,
 *         NULL on failure.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for the grid */
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
/* Free previously allocated memory */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

/* Initialize each element to 0 */
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
