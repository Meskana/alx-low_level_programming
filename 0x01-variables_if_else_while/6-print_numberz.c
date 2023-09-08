#include <stdio.h>
/**
 * main - Execution starts here
 *
 * Return: Returns 0
 */
int main(void)
{
	int p = 0;

	while (p < 10)
	{
		putchar(p + '0');
		p++;
	}
	putchar('\n');
	return (0);
}
