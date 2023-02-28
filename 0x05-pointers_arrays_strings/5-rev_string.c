#include <stdio.h>

/**
 * rev_string -  reverses a string.
 * @s: pointer to a character
 *
 */

void rev_string(char *s)
{
	int count = 0, i, temp;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count / 2; i++)
	{
		temp = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = temp;
	}
}
