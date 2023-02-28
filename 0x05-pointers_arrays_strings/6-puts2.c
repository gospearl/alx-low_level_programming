#include "main.h"

/**
 * puts2 - prints every other character of a string then a new line.
 * @str: a pointer to a character
 *
 */

void puts2(char *str)
{

	int count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count = count + 2;
	}
	_putchar('\n');
}
