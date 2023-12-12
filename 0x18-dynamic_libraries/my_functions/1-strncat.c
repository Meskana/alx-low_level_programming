#include "main.h"
/**
 * _strncat - concatenation of two strings
 *@dest: variable 1
 *@src: variable 2
 *@n: number of character to contactnate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		l++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[l + i] = *src;
		src++;
	}
	dest[l + i] = '\0';
	return (dest);
}
