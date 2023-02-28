#include "main.h"

/**
 * puts2 - prints every other character of a string then a new line.
 * @str: a pointer to a character
 *
 */

void puts2(char *str)
{

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
