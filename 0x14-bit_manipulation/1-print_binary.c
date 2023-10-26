#include "main.h"
/**
 * print_b - prints the binary representation of a number
 * @b: base ten to be print
 */

void print_b(unsigned long int b)
{
	if (b == 0)
		return;
	print_b(b >> 1);
	if ((b & 1) == 1)
		_putchar('1');
	if ((b & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - print binary
 * @n: decimal to print
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_b(n);
}
