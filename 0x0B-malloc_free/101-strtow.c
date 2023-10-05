#include "main.h"
#include <stdlib.h>

int len_of_wrd(char *str);
int word_count(char *str);
char **strtow(char *str);

/**
 * len_of_wrd - finds the last index of length of a word
 * @str: string
 * Return: integer
 */

int len_of_wrd(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * word_count - count the number of word in each strings
 * @str: string
 * Return: integer
 */

int word_count(char *str)
{
	int i = 0, word = 0, len = 0;

	for (i = 0; *(str + i); i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			word++;
			i += len_of_wrd(str + i);
		}
	}
	return (word);
}

/**
 * strtow - split a string into two
 * @str: string to split
 * Return: pointer
 */

char **strtow(char *str)
{
	char **strings;
	int i = 0, words = 0, w, letters, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = word_count(str);
	if (words == 0)
	{
		return (NULL);
	}
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
		{
			i++;
		}
		letters = len_of_wrd(str + i);
		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(strings[w]);
			}
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			strings[w][l] = str[i++];
		}
		strings[w][l]  = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
