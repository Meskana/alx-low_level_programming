#include <stdio.h>
/**
 * main - Execution starts here
 *
 * Return: Returns 0
 */
int main(void)
{
	int a, ch;

	a = 0;
	ch = 'a';
	while (a < 10)
	{
		putchar(a + '0');
		a++
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
		putchar('\n');
	return (0);
}
