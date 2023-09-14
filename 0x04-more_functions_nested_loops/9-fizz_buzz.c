#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 * numbers which are multiples of both three and five print FizzBuzz.
 * Return: returns 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBizz");
		}
		else if (num == 100)
		{
			continue;
                }
		else
		{
			printf("%d", num);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
