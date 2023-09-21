#include "main.h"
 /**
  * leet -  change vowel to numbers
  * @s: string
  * Return: string
  */
char *leet(char *s)
{
	char r[] = "aeotlAEOTL";
	char v[] = "4307143071";
	int j, i = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(s + i) == r[j])
			{
				*(s + i) = v[j];
			}
		}
		i++;
	}
	return (s);
}
