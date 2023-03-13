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
	unsigned int n, i = 0;
	char *copy;
	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		n++;
	}
	copy = malloc(sizeof(char) * n);

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = str[i];
	}
	dest[n] = '\0';
	return (dest);
}
