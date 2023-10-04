#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	int count = 0, i;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	cpy = malloc(sizeof(char) * count + 1);

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
}
