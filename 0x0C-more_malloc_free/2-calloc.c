#include"main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: integer element
 * @size: integer byte
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	return (result);
}
