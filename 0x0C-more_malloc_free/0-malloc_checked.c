#include <sttdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of memory to be allocated
 *
 * Return: the aallocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (0);
}
