#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - initializes element in a 2D array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: array(Success), NULL(Failure)
 */

int **alloc_grid(int width, int height)
{
	int **arry;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arry = malloc(sizeof(int *) * height);
	if (arry == NULL)
	{
		free(arry);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arry[i] = malloc(sizeof(int) * width);
		if (arry[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(arry[j]);
			}
			free(arry);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arry[i][j] = 0;
		}
	}
	return (arry);
}
