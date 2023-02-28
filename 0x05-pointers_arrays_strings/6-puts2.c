#include "main.h"

/**
 * puts2 - prints every other character of a string then a new line.
 * @str: a pointer to a character
 *
 */

void puts2(char *str)
{

	int i, count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
