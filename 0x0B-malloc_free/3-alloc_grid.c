#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **kjg;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	kjg = malloc(sizeof(int *) * height);
	if (kjg == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		kjg[x] = malloc(sizeof(int) * width);
		if (kjg[x] == NULL)
		{
			for (; x >= 0; x--)
				free(kjg[x]);
			free(kjg);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			kjg[x][y] = 0;
	}
	return (kjg);
}
