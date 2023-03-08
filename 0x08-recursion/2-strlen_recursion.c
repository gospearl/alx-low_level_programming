#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: string to be checked
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
