#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of argument pass into the function
 * Return: sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(num, int);
	va_end(num);
	return (sum);
}
