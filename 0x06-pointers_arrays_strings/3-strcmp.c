#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, ans;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		ans = s1[i] - s2[i];
		return (ans);
	}
}
