#include <stdlib.h>

int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    int **grid = (int **)malloc(height * sizeof(int *));
    int i, j;
    if (grid == NULL) {
        return NULL;
    }

    for (i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            for (j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }

        for (int j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}

