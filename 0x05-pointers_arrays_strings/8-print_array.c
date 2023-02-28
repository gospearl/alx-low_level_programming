#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers then a new line.
 * @a: pointer to int
 * @n: number of elements of the array
 *
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
