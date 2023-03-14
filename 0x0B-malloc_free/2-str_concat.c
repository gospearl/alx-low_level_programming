#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NUll(Faiilure), concatenated string(Success)
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, n, j = 0, r = 0, q = 0;
	char *new_str;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	n = i + j;
	new_str = malloc((sizeof(char) * n) + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (new_str == NULL)
		return (NULL);

	while (r < n)
	{
		if (r < i)
		{
			new_str[r] = s1[r];
		}
		if (r >= i)
		{
			new_str[r] = s2[q];
			q++;
		}
		r++;
	}
	new_str[n] = '\0';
	return (new_str);
}
