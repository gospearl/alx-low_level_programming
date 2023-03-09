#include "main.h"

/**
 * check_prime - checks if a number is a prime number
 * @n: number to be checked
 * @i: iterate number
 *
 * Return: 1(if number is prime), 0(Otherwise)
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (((n % i) == 0) && (i > 1))
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns an 1 or 0 if a number is prime or not
 * @n: number to be checked
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	check_prime(n, 1);
}
