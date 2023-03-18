#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first value
 * @max: second value
 *
 * Return: the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
