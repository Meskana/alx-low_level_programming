#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: pointer to the bit to manipulate
 * @index: position of the bit
 * Return: integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	m = 1;
	m = m << index;
	*n = ((*n) | m);
	return (1);
}
