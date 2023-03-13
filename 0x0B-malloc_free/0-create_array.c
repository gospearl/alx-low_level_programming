#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it
 * @size: array size
 * @c: the character the array is to be initialized with
 *
 * Return: pointer to the aray(Success), NULL(Failure)
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
