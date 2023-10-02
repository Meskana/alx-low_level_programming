#include "main.h"

/**
 * _strncpy - this function copies a string
 * @dest: variabl to be copied to
 * @src: variable to copy
 * @n: number of byte
 * Return: return character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
