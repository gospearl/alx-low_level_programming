#include "main.h"

/**
 * sqroot - checks if an input has a natural squareroot
 * @n: integer input
 * @i: iterate
 *
 * Return: the natural square root
 */

int sqroot(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
	{
		return (-1);
	}
	if (sqr == n)
	{
		return (i);
	}
	return (sqroot(n, i + 1));
}

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: input integer
 *
 *  Return: -1(Failure), square root(Success)
 */

int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}
