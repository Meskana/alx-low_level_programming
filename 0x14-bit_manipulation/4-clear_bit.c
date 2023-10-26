#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to be checked
 * @index: position of the bit
 * Return: integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m = 1;

	m = m << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = m ^ *n;
	return (1);
}
