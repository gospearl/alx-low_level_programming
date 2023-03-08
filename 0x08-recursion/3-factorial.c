#include "main.h"

/**
 * factorial - gives the factorial of a given number
 * @n: integer input
 *
 * Return: -1(Error), factorial(Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
