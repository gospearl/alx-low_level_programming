#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: pointer to a char
 *
 * Return: length of string
 *
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
