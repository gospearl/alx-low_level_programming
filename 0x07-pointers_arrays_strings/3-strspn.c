#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: string that are accepted
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				count++;
			}
			j++;
		}
	}
	return (count);
}
