#include "main.h"

/**
 *  main - Entry point
 *
 *  Return: 0
 *
 */

int main(void)
{
	int i;
	char word;

	word = "_putchar";
	for (i = 0; i < strlen(word); i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
