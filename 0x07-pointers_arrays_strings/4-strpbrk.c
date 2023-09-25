#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: character
 * Return: pointer character
 */

char *_strpbrk(char *s, char *accept)
{
	int i, v;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (v = 0; *accept != '\0'; v++)
		{
			if (s[i] == accept[v])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
