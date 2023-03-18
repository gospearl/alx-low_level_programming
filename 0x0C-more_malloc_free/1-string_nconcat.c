#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be concatenated
 *
 * Return: the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, k = 0, l, len, q = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (n >= j)
		n = j;
	len = i + n;
	ptr = malloc((sizeof(char) * len) + 1);

	if (ptr == NULL)
		return (NULL);
	while (q < len)
	{
		while (k < i)
		{
			ptr[k] = s1[k];
			k++;
		}
		l = 0;
		while (l < n)
		{
			ptr[k + l] = s2[l];
			l++;
		}
		q++;
	}
	ptr[len] = '\0';
	return (ptr);
}
