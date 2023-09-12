#include "main.h"
/**
 * _isalpha - check for alphabet
 *@c: character to be checked
 * Return: 1 if c is a letter, 0 if its not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
