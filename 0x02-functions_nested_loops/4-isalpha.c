#include "main.h"

/**
 * _isalpha - check if alphabet is uppercase
 * @c: integer
 *
 * Return: 1(Success), 0(Otherwise)
 *
 */

int _isalpha(int c)
{
	if ((c >= 65 && c < 91) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
