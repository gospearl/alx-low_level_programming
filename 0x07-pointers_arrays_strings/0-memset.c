#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area(pointer)
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i++] = b;
	}
	return (s);
}
