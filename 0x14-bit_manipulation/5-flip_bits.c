#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: bit to flip
 * @m: number of bit to flip
 * Return: unsigned integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
