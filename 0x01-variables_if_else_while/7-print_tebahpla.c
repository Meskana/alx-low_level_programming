#include <stdio.h>
/**
* main - Execution starts here
*
* Return: Returns 0
*/
int main(void)
{
	char cha;

	cha = 'z';
	while (cha >= 'a')
	{
		putchar(cha);
		cha--;
	}
	putchar('\n');
	return (0);
}
