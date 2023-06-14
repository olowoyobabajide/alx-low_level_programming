#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate 2 dimensuonal grid
 * @width: width
 * @height: height
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int **alloc;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	alloc = (int **)malloc(height * sizeof(int *));
	if (alloc == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		alloc[a] = (int *)malloc(width * sizeof(int));
		if (alloc[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(alloc[b]);
			}
			free(alloc);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			alloc[a][b] = 0;
		}
	}
	return (alloc);
}
