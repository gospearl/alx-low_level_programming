#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string
 * @str: string to be duplicated
 *
 * Return: duplicate string(Success), NULL(Failure)
 */

char *_strdup(char *str)
{
	unsigned int n = 0, i = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	copy = malloc((sizeof(char) * n) + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		copy[i] = str[i];
	}
	copy[n] = '\0';
	return (copy);
}
