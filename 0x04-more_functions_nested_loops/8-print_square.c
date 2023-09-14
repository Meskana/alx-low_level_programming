#include "main.h"
/**
 * print_square - function that prints a square
 *@size: parameter
 */

void print_square(int size)
{
	int u, v;

	if (size <= 0)
	{
		_putchar('\n');
	}
	v = 0;
	while (v < size)
	{
		u = 0;
		while (u < size)
		{
			_putchar('#');
			u++;
		}
		_putchar('\n');
		v++;
	}
}
