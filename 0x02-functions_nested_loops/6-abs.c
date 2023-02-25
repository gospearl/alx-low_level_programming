#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: integer
 *
 * Return: n(Success)
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
