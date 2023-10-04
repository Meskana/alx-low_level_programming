#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to a string
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, i;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len_s2++;
	}

	result = malloc(sizeof(char) * (len_s1 + len_s2) + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}

