#include "main.h"
/**
 * times_table - print the 9 time table, starting with 0
 */
void times_table(void)
{
	int t, m, b;

	for (t = 0; t < 10; t++)
	{
		for (m = 0; m < 10; m++)
		{
			b = m * t;

			if (m == 0)
			{
				_putchar(b + '0');
			}
			if (b < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(b + '0');
			}
			else if (b >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
		}
		 _putchar('\n');
	}
}
