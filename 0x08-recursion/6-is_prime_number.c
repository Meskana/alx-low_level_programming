#include "main.h"
#include <stdio.h>

/**
 * check_prime - check if number is prime
 * @num: number to be checked
 * @i: iteration time
 * Return: one if prime or zero if composite
 */

int check_prime(int num, int i)
{
	if (num <= 1)
	{
		return (0);
	}
	if (num % i == 0 && i > 1)
	{
		return (0);
	}
	if ((num / i) < i)
	{
		return (1);
	}
	return (check_prime(num, i + 1));
}

/**
 * is_prime_number - return prime number
 * @n: number to be checked
 * Return: prime number
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
