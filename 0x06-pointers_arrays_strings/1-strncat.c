#include "main.h"

/**
 * _strncat - concatenates n bytes from one string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to add to dest string
 *
 * Return: the resulting concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < n && src[i])
	{
		*(dest + len + i) = *(src + i);
		i++;
	}
	dest[len + n + i] = '\0';
	return (dest);
}
