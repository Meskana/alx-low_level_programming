#include "main.h"
#include <stdio.h>

/**
 * _strlen_recur - finds the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen_recur(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recur(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * comparator - compare each character in the string
 * @s: string to compare
 * @i: smallest number
 * @j: biggest number
 * Return: integer
 */

int comparator(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
		{
			return (1);
		}
		return (0 + comparator(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: string
 */

int is_palindrome(char *s)
{
	if (*s != '\0')
	{
		return (comparator(s, 0, _strlen_recur(s) - 1));
	}
	return (1);
}
