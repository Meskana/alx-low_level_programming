#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: integer
 * @size: integer
 */

void print_diagsums(int *a, int size)
{
	int m, i, su1 = 0, su2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		su1 += a[i];
	}
	for (m = size - 1; m <= (size * size) - size; m = m + size - 1)
	{
		su2 += a[m];
	}
	printf("%d, %d\n", su1, siu2);
}
