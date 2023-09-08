#include <stdio.h>
/**
 * main - Start of execution
 *
 * Return: Returns 0
 */
int main(void)
{
	char ch, A;

	ch = 'a';
	A = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
