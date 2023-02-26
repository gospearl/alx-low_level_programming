#include "main.h"

/**
 * _isupper - checks if alphabet is in uppercase
 * @c: character input
 *
 * Return: 1(Success), 0(Failure)
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
