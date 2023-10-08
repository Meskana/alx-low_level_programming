#include"main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer
 * Rrturn: void pointer
 */

void *malloc_checked(unsigned int b)
{
	char *prt;

	prt = malloc(b);
	if (prt == NULL)
		exit(98);
	else
		return (prt);
}
