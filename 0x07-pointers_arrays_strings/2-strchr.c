#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: the string to be checked
 * @c: the chararcter to look for
 *
 * Return: the string from character
 */

char *_strchr(char *s, char c)
{
	int i, count = 0;

	while (s[count])
	{
		count++;
	}
	for (i = 0; i <= count; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}
