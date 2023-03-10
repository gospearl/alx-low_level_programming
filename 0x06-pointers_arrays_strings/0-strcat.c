#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: the resulting concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + len + i) = *(src + i);
	}
	return (dest);
}
