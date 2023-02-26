#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - outputs a character
 * @c: character
 *
 * Return: 1(Success), -1(Error)
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
