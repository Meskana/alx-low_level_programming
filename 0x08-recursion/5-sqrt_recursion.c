#include "main.h"
#include <stdio.h>

/**
 * _sqrt - compute natural square root
 * @num: number to compute the square root
 * @i: iterating number
 * Return: natural square root
 */

int _sqrt(int num, int i)
{
	int sqrt;

	sqrt = i * i;
	if (sqrt > num)
	{
		return (-1);
	}
	if (sqrt == num)
	{
		return (i);
	}
	return (_sqrt(num, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to compute natural sqrt
 * Return: returns natual sqrt
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
