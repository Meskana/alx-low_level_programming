#include "main.h"
/**
 * _isupper - print uppercase characters
 * @c: variable to check
 *
 * Return: Returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
