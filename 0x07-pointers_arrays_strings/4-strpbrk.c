#include "main.h"

/**
 * _strpbrk - locates the first occurence of a character
 * @s: string to be checked against
 * @accept: string to checked
 *
 * Return: The remaining string after the first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
	}
	return ('\0');
}
